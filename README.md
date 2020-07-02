# Earthquake-prediction
In this project, mobile phone accelerometer sensor is used to get the vibration of the earth by keeping it on the flat table or any flat surface.The vibration 
due to Earthquake is noticed very clearly and this data is then transmitted to the ESP32 module using sockets. Further this data is moved to Amazon AWS cloud where firstly the data is
recieved using the kinesis data stream and then these data are channelised to S3 bucket using kinesis firehose. Now from here the data is further moved to Amazon SageMaker where the 
data is filtered first for removing the high frequency noise using the moving average filter of window size 50 and then preprocessed and analysed and hence moc=delled using Logistic
regression.
