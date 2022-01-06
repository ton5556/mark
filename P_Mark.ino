#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxx";  // ใส่โทเคนที่ได้จากแอพ Blynk
char ssid[] = "xxxxxxxxxxxx";  // ใส่ชื่อไวไฟ
char pass[] = "xxxxxxxxxxxx";  // ใส่รหัสไฟไว

#define relay1 D5
#define relay2 D6
#define relay3 D7
#define relay4 D8

BlynkTimer timer;

BLYNK_WRITE(V0)
{
  if (param.asInt() == 1) {
    digitalWrite(relay1, !digitalRead(relay1));       
    if (digitalRead(relay1) == LOW) {
     
    }
    else {
      
    }
  }
  if (param.asInt() == 0) {
    digitalWrite(relay1, !digitalRead(relay1));       
    if (digitalRead(relay1) == HIGH) {
      
    }
    else {
      
    }
  }
}

BLYNK_WRITE(V1)
{
  if (param.asInt() == 1) {
    digitalWrite(relay2, !digitalRead(relay2));       
    if (digitalRead(relay2) == LOW) {
     
    }
    else {
      
    }
  }
  if (param.asInt() == 0) {
    digitalWrite(relay2, !digitalRead(relay2));       
    if (digitalRead(relay2) == HIGH) {
      
    }
    else {
      
    }
  }
}
BLYNK_WRITE(V2)
{
  if (param.asInt() == 1) {
   digitalWrite(relay3, !digitalRead(relay3));       
    if (digitalRead(relay3) == LOW) {
     
    }
    else {
      
    }                  
    
  }
  if (param.asInt() == 0) {
    digitalWrite(relay3, !digitalRead(relay3));      
    if (digitalRead(relay3) == HIGH) {
      
    }
    else {
      
    }
  }
}
BLYNK_WRITE(V3)
{
  if (param.asInt() == 1) {
   digitalWrite(relay4, !digitalRead(relay4));       
    if (digitalRead(relay4) == LOW) {
     
    }
    else {
      
    }                  
  }
  if (param.asInt() == 0) {
    digitalWrite(relay4, !digitalRead(relay4));      
    if (digitalRead(relay4) == HIGH) {
     
    }
    else {
     
    }
  }
}

void setup() {
  
  Serial.begin (9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT); 
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
}

void loop() 
{
  Blynk.run();
  timer.run();
}
