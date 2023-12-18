int sensorPin = A0; 
void setup()
{
Serial.begin(9600); 
}

void loop() 
{
int reading = analogRead(sensorPin);
float voltage = reading * 5.0 / 1024;
Serial.print(voltage); Serial.println("volts");
float temperatureC = (voltage - 0.5) * 100 ; 
Serial.print(temperatureC); 
Serial.println(" degress C");
float temperatureF = (temperatureC * 9 / 5) + 32;
Serial.print(temperatureF);
Serial.println(" degress F");
delay(1000); 
}