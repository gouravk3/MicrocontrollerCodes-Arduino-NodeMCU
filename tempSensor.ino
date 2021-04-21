const int sensor = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(sensor)*0.48827;
  Serial.print(temp);
  delay(1000);
}
