
#include "WiFi.h"
#include "AWS_IOT.h"
#include<string.h>
#include <ArduinoJson.h>
#include <WebSocketsServer.h>
 
AWS_IOT dev;
char c;
float val1,val2,val3;
char luvmsg[10000] = "";

char HOST_ADDRESS[]= "a2aut7joshbly2-ats.iot.us-east-1.amazonaws.com";
char TOPIC_NAME[]= "$aws/things/my_device/shadow/update";
#define AWS_MAX_RECONNECT_TRIES 50
#define CLIENT_ID "ACCEL_DATA"
StaticJsonDocument<512> doc;
//JsonObject stateObj = doc.createNestedObject("state");
//JsonObject reportedObj = stateObj.createNestedObject("reported");

char d[50];
int count=0,i=0;
const char *WIFI_SSID = "Harshseth";
const char *WIFI_PASSWORD = "12344464";
WiFiServer wifiServer(8080);
WebSocketsServer webSocketServer=WebSocketsServer(8080);
char payload[512];
char rcvdPayload[512];
int msgReceived;
char a[100];


void mySubCallBackHandler (char *TOPIC_NAME, int payloadLen, char *payLoad)
{
    strncpy(rcvdPayload,payLoad,payloadLen);
    rcvdPayload[payloadLen] = 0;
    msgReceived = 1;
}
void setup() {
  
  Serial.begin(115200);    // make sure your Serial Monitor is also set at this baud rate.
 // Dabble.begin("MyEsp32");   //set bluetooth name of your device
  
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
    {
       Serial.print(".");
       delay(2000);
    }
  Serial.print("Connected to WiFi. IP:");
  Serial.println(WiFi.localIP());
  wifiServer.begin();
  webSocketServer.begin();
  // Serial.println("\nCONNECTED!!");
  // Dabble.begin("MyEsp32");
   dev.connect(HOST_ADDRESS,CLIENT_ID); 
      
   dev.subscribe(TOPIC_NAME,mySubCallBackHandler);
  
}

void loop() {
  //char d[50]="";
  
 WiFiClient client = wifiServer.available();
   
   
 
  if (client) {
    
 
    while (client.connected()) {
      
 
      while (client.available()>0) {
       // data= client.readStringUntil('\n');
       // float c = client.read();
        c = client.read();
         
       
       // luvmsg += c;
      strncat(luvmsg,&c,1);
         //Serial.println(c);  
       }

    delay(10);
    }
 
   client.stop();
   Serial.println("Client disconnected");
   
  luvmsg[strlen(luvmsg)]='\0';

  char *ptr = strtok(luvmsg, "]");
   //Serial.println(luvmsg);
    
    while (ptr != NULL)
  {
    //float val1,val2,val3;
    //for(int i=0;i<strlen(ptr);i++){
     //   ptr[i]=ptr[i+1];
    //}
    //ptr[strlen(ptr)]='\0';
    sscanf(ptr,"[%f,%f,%f",&val1,&val2,&val3);
 // reportedObj["X"] = val1;
  //reportedObj["Y"] = val2;
  //reportedObj["Z"] = val3;
  doc["X"] = val1;
  doc["Y"] = val2;
  doc["Z"] = val3;
  serializeJson(doc,Serial);
  serializeJson(doc,payload);
  Serial.println("\n");
 // sprintf(payload, "%s" ,doc);
   //sprintf(payload,"{\"X\":\"%f\"\"Y\":\"%f\"\"Z\":\"%f\"}",val1);
  dev.publish(TOPIC_NAME, payload);
   //Serial.println("\n");
  //Serial.printf("\n%f\t%f\t%f",val1,val2,val3);
   
  // Serial.println(ptr);
   ptr = strtok(NULL, "]");
  
  }
 
  }
  
  
  
}
