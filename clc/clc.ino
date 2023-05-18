//Created by Brian Davis, April 2022

#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_CircuitPlayground.h>
#include "Proximity.h"
#define PIN_LIGHT A8  //light sensor
#define LED_PIN 13  //the baby led pin
#define MUSIC A0
#define temp A9
Proximity prox;
int state;
void setup() {
  //Setup everything
  CircuitPlayground.begin();
  while (!Serial);
  Serial.begin(9600);
  //Change this number for your sensitivity, make higher if always says "Close to object", make lower if you can't get it to say "Close to object".
 pinMode(temp, INPUT);
CircuitPlayground.begin(9600);  //needed for the CircuitPlayground stuff
pinMode (PIN_LIGHT, INPUT); // says that the light sensor is inputting numbers
pinMode (LED_PIN,OUTPUT);
  prox.begin(0);
}
void loop() {
    String imput =Serial.readString();
if(imput == "#Pass123"){
  Serial.println("System OFF 10 Seconds");
  delay(10000);
  Serial.println("System ON");
}
  float (CircuitPlayground.soundSensor());
//Serial.println(CircuitPlayground.soundSensor());
if (CircuitPlayground.soundSensor()>50)
Serial.println("WARNING Sound");
//delay(150);
 if (prox.close()) {
 }else {
    Serial.println("WARNING: door open");
 }
 //Delay
  //delay(100);

int tempread = analogRead(A9);
float volt = tempread * (3300/1024);
float temp = (volt - 1300) / 10;
if (temp > 30){
Serial.print ("WARNING: TEMPERATURE HAS EXCEEDED SET LIMIT");
//Serial.print (temp);
Serial.println ();
}
//delay(300);
int x = analogRead (A8);
//Serial.println(x);// Creates a numeric and visual representation we can see Tools > Serial Monitor
//delay(100);
if(analogRead(A8) <=10)
{
  CircuitPlayground.setPixelColor(9,0,0,0);
  CircuitPlayground.setPixelColor(8,0,0,0);
  CircuitPlayground.setPixelColor(7,0,0,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
  CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >10;analogRead(A8) <= 50) // "else if" is the important thing here.
{
  digitalWrite(LED_PIN, HIGH); 
  CircuitPlayground.setPixelColor(9,100,0,0);
  CircuitPlayground.setPixelColor(8,0,0,0);
  CircuitPlayground.setPixelColor(7,0,0,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
  CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >50;analogRead(A8) <=100) //Multiple "analogRead" to make a #<A8<# situation. 
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(8,70,30,0);
  CircuitPlayground.setPixelColor(7,0,0,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
  CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >100;analogRead(A8) <=150) //These should all string together to make a visual gauge that illuminates more and more LEDs with the light sensor.
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(7,40,60,0);
  CircuitPlayground.setPixelColor(6,0,0,0);
  CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >150;analogRead(A8) <=200)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(6,10,90,0);
  CircuitPlayground.setPixelColor(5,0,0,0);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >200;analogRead(A8) <=250)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(5,0,90,10);
  CircuitPlayground.setPixelColor(4,0,0,0);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >250;analogRead(A8) <=300)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(4,0,60,40);
  CircuitPlayground.setPixelColor(3,0,0,0);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >300;analogRead(A8) <=350)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(3,0,30,70);
  CircuitPlayground.setPixelColor(2,0,0,0);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >350;analogRead(A8) <=400)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(2,0,00,100);
  CircuitPlayground.setPixelColor(1,0,0,0);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >400;analogRead(A8) <=450)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(1,30,0,70);
  CircuitPlayground.setPixelColor(0,0,0,0);
}
else if(analogRead(A8) >450;analogRead(A8) <=999)
{
  digitalWrite(LED_PIN, LOW);
  Serial.println("WARNING: Light Value Exceeds Set Limit");
  CircuitPlayground.setPixelColor(0,60,0,40);
} 
delay(150);
}
