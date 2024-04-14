// C++ code
//
const int analogInPin = A0;
const int analogOutPin = 6;

int sensorVaule = 0;
int outputVaule = 0;

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  sensorVaule = analogRead(analogInPin);
  outputVaule = map(sensorVaule, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputVaule);
  
  Serial.print("Sensor= ");
  Serial.print(sensorVaule);
  Serial.print (" t\ output= ");
  Serial.println(outputVaule);
  
  delay(2);
  
}