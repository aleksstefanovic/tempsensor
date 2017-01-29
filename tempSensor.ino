const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(sensorPin);

  //Serial.print("sensor Value: ");
  //Serial.print(sensorVal);

  float voltage = (sensorVal / 1024.0) * 5.0;

  //Serial.print(", Volts: ");
  //Serial.print(voltage);

  //Serial.print(", degrees C: ");
  int temperature = (voltage - .5) * 100;
  Serial.println(temperature);
  //Serial.write(temperature);

  delay(1000);
}
