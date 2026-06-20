#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL6AOqGNlSW"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "r9Tbb7VUuLiVLd5ip-DS94OV2MHcfOBH"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Xiaomi13T"; 
char pass[] = "12345678"; 

int device1 = 12;
int device2 = 13;
int device3 = 14;
int device4 = 27;
int device5 = 26;
int device6 = 25;
int device7 = 33;
int device8 = 32;


void setup(){
   Serial.begin(115200);
   pinMode(device1,OUTPUT);
   pinMode(device2,OUTPUT);
   pinMode(device3,OUTPUT);
   pinMode(device4,OUTPUT);
   pinMode(device5,OUTPUT);
   pinMode(device6,OUTPUT);
   pinMode(device7,OUTPUT);
   pinMode(device8,OUTPUT);
   digitalWrite(device1,HIGH);
   digitalWrite(device2,HIGH);
   digitalWrite(device3,HIGH);
   digitalWrite(device4,HIGH);
   digitalWrite(device5,HIGH);
   digitalWrite(device6,HIGH);
   digitalWrite(device7,HIGH);
   digitalWrite(device8,HIGH);
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  Blynk.run();
}

 BLYNK_WRITE(V0) // From Blynk to the ESP32, to control a Relay
{
  int pinValue1 = param.asInt();
  digitalWrite(device1 , !pinValue1);
  }
 BLYNK_WRITE(V1) // From Blynk to the ESP32, to control a Relay
{
 int pinValue2 = param.asInt();
  digitalWrite(device2 , !pinValue2);
  }
 BLYNK_WRITE(V2) // From Blynk to the ESP32, to control a Relay
{
  int pinValue3 = param.asInt();
  digitalWrite(device3 , !pinValue3);
  }
 BLYNK_WRITE(V3) // From Blynk to the ESP32, to control a Relay
{
 int pinValue4 = param.asInt();
  digitalWrite(device4 , !pinValue4);
  }
 BLYNK_WRITE(V4) // From Blynk to the ESP32, to control a Relay
{
   int pinValue5 = param.asInt();
  digitalWrite(device5 , !pinValue5);
  }
 BLYNK_WRITE(V5) // From Blynk to the ESP32, to control a Relay
{
 int pinValue6 = param.asInt();
  digitalWrite(device6 , !pinValue6);
  }
 BLYNK_WRITE(V6) // From Blynk to the ESP32, to control a Relay
{
 int pinValue7 = param.asInt();
  digitalWrite(device7, !pinValue7);
  }
 BLYNK_WRITE(V7) // From Blynk to the ESP32, to control a Relay
{
 int pinValue8 = param.asInt();
  digitalWrite(device8 , !pinValue8);
  }
 
