#include "DHT.h"  
#define DHTTYPE DHT11
uint8_t DHTPin = 2; 
// Initialize DHT sensor.
DHT dht(DHTPin, DHTTYPE);
   
 void setup()  
 {  
  pinMode(DHTPin, INPUT);
  dht.begin();
  Serial.begin(9600); 
  delay(5000); 
 }  
 void loop()  
 {  
   float humidity = dht.readHumidity(); /* Get humidity value */
  float temperature = dht.readTemperature();
   //Serial.println("Temperature in C:");  
   Serial.print(temperature);  
   Serial.print(",");  
   Serial.print(humidity);
   Serial.print("\n");  
   delay(2000);  
 }
