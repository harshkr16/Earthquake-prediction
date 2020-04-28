
#include "WiFi.h"
#include <DabbleESP32.h>
#include "AWS_IOT.h"

AWS_IOT dev;

//#define DEVICE_NAME "my-esp32-device"
#define AWS_HOST "a2aut7joshbly2-ats.iot.ap-south-1.amazonaws.com"
//#define AWS_IOT_TOPIC "$aws/things/" DEVICE_NAME "/shadow/update"
#define MQTT_TOPIC "$aws/things/my-esp32-device/shadow/update"
#define AWS_MAX_RECONNECT_TRIES 50
#define CLIENT_ID "ACCEL_DATA"
//openssl s_client -CAfile main/certs/aws-root-ca.pem -connect a2aut7joshbly2-ats.iot.ap-south-1.amazonaws.com:8883



const char *WIFI_SSID = "Harshseth";
const char *WIFI_PASSWORD = "12344464";



char payload[512];


//void mySubCallBackHandler (char *TOPIC_NAME, int payloadLen, char *payLoad)
//{
  //  strncpy(rcvdPayload,payLoad,payloadLen);
    //rcvdPayload[payloadLen] = 0;
   // msgReceived = 1;
//}
void setup() {
  Serial.begin(115200);    // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("MyEsp32");   //set bluetooth name of your device
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
    {
       Serial.print(".");
       delay(2000);
    }
   Serial.println("\nCONNECTED!!"); 
   dev.connect(AWS_HOST,CLIENT_ID);
   //dev.subscribe(TOPIC_NAME,mySubCallBackHandler);
}

void loop() {
  
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  print_Accelerometer_data();
}

void print_Accelerometer_data()
{
  sprintf(payload,"X:%f",(Sensor.getAccelerometerXaxis(),4));
  Serial.println("X:");
  Serial.println(Sensor.getAccelerometerXaxis(),4);
  dev.publish(MQTT_TOPIC,payload);
  sprintf(payload,"Y:%f",(Sensor.getAccelerometerYaxis(),4));
  dev.publish(MQTT_TOPIC,payload);
  Serial.println("Y:");
  Serial.println(Sensor.getAccelerometerYaxis(),4);
  sprintf(payload,"Z:%f",(Sensor.getAccelerometerZaxis(),4));
  dev.publish(MQTT_TOPIC,payload);
  Serial.println("Z:");
  Serial.println(Sensor.getAccelerometerZaxis(),4);
  delay(2000);

}
