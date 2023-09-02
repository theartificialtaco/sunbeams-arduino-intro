int LED = 12;

void setup() {
  pinMode(LED, OUTPUT);
}

void dot(){
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
}

void dash(){
  digitalWrite(LED, HIGH);
  delay(600);
  digitalWrite(LED, LOW);
  delay(200);
}

void loop() {
  dot();
  dash();
  dot();
}
