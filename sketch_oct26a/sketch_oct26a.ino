
int ledPins[] = {8, 10, 12, 13};

void setup() {
  // put your setup code here, to run once:

  for (int i = 0; i < 4; i++) pinMode(ledPins[i], OUTPUT);
  Serial.begin(9600);

}

void loop() {
  const long interval = 1000
  for (int i = 0; i < 16; i++) {
    showBinNumber(i);
    delay(1000);
  }
}

void showBinNumber(int num) {
  for (int i = 0; i < 4; i++) {
    if (num % 2)
      digitalWrite(ledPins[i], HIGH);
    else
      digitalWrite(ledPins[i], LOW);
    num /= 2;
  }
}
