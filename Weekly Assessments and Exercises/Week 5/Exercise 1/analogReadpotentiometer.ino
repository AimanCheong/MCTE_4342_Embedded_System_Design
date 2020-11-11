
int sensorPin = A0;     //input pin for potentiometer  
int sensorValue = 0;    //store value from analog read 

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);
  Serial.print(" Value =");
  Serial.println(sensorValue);
}
