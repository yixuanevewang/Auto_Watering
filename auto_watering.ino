// define constants (pin numbers)
const int pump = 11;
const int soil_moisture = 12;

void setup() { 
  // put your setup code here, to run once:
  pinMode(pump, OUTPUT);
  pinMode(soil_moisture, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int moistureReading = digitalRead(soil_moisture);
  
  Serial.println(moistureReading);
  
  if(moistureReading == 1) 
  {
    digitalWrite(pump, HIGH);
  }
  else {
    digitalWrite(pump, LOW);
  }
 
  delay(2000);
}
