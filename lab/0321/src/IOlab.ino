const int numReadings = 10;
int fsr = A2;
int value;
void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(fsr);
  Serial.println(value);
  delay(1);        // delay in between reads for stability
}
