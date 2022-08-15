int moistureSensor = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int moistureReading = digitalRead(moistureSensor);

  Serial.println(moistureReading);

  delay(1000);
}
