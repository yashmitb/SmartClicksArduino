int A_4 = 440;
int C4 = 523;
int D4 = 587;
int E4 = 659;
int F4 = 698;

int a_button = 2;
int a_led = 3;
int a_buzzer = 4;

int b_button = 5;
int b_led = 6;
int b_buzzer = 7;

int c_button = 8;
int c_led = 9;
int c_buzzer = 10;

int d_button = 11;
int d_led = 12;
int d_buzzer = 13;

int upperJoystick = 1000;
int lowerJoystick = 50;

void setup() {
  pinMode(a_button, INPUT);   // button
  pinMode(a_led, OUTPUT);  // LED
  pinMode(a_buzzer, OUTPUT);  // buzzer

  pinMode(b_button, INPUT);
  pinMode(b_led, OUTPUT);
  pinMode(b_buzzer, OUTPUT);

  pinMode(c_button, INPUT);
  pinMode(c_led, OUTPUT);
  pinMode(c_buzzer, OUTPUT);

  pinMode(d_button, INPUT);
  pinMode(d_led, OUTPUT);
  pinMode(d_buzzer, OUTPUT);

  digitalWrite(a_button, HIGH);
  digitalWrite(b_button, HIGH);
  digitalWrite(c_button, HIGH);
  digitalWrite(d_button, HIGH);

  // tones: https://www.circuitbasics.com/how-to-use-active-and-passive-buzzers-on-the-arduino/

  tone(a_buzzer, C4);
  digitalWrite(a_led, HIGH);
  delay(200);
  noTone(a_buzzer);
  tone(b_buzzer, D4);
  digitalWrite(b_led, HIGH);
  delay(200);
  noTone(b_buzzer);
  tone(c_buzzer, E4);
  digitalWrite(c_led, HIGH);
  delay(200);
  noTone(c_buzzer);
  tone(d_buzzer, F4);
  digitalWrite(d_led, HIGH);
  delay(200);
  noTone(d_buzzer);

  Serial.begin(9600);
  // Serial.println("Connected");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!digitalRead(a_button)) {  // A
    Serial.println("A");
    digitalWrite(a_led, LOW);
    digitalWrite(b_led, LOW);
    digitalWrite(c_led, LOW);
    digitalWrite(d_led, LOW);

    digitalWrite(a_led, HIGH);
    // digitalWrite(4, HIGH);
    tone(a_buzzer, C4);
    delay(500);
    digitalWrite(a_led, LOW);
    // digitalWrite(4, LOW);
    noTone(a_buzzer);
    delay(500);
    digitalWrite(a_led, HIGH);
    delay(2000);

    digitalWrite(a_led, HIGH);
    digitalWrite(b_led, HIGH);
    digitalWrite(c_led, HIGH);
    digitalWrite(d_led, HIGH);
  } else if (!digitalRead(b_button)) {  // B
    Serial.println("B");
    digitalWrite(a_led, LOW);
    digitalWrite(b_led, LOW);
    digitalWrite(c_led, LOW);
    digitalWrite(d_led, LOW);

    digitalWrite(b_led, HIGH);
    // digitalWrite(7, HIGH);
    tone(b_buzzer, D4);
    delay(500);
    digitalWrite(b_led, LOW);
    // digitalWrite(7, LOW);
    noTone(b_buzzer);
    delay(500);
    digitalWrite(b_led, HIGH);
    delay(2000);

    digitalWrite(a_led, HIGH);
    digitalWrite(b_led, HIGH);
    digitalWrite(c_led, HIGH);
    digitalWrite(d_led, HIGH);
  } else if (!digitalRead(c_button)) {  // C
    Serial.println("C");
    digitalWrite(a_led, LOW);
    digitalWrite(b_led, LOW);
    digitalWrite(c_led, LOW);
    digitalWrite(d_led, LOW);

    digitalWrite(c_led, HIGH);
    // digitalWrite(10, HIGH);
    tone(c_buzzer, E4);
    delay(500);
    digitalWrite(c_led, LOW);
    // digitalWrite(10, LOW);
    noTone(c_buzzer);
    delay(500);
    digitalWrite(c_led, HIGH);
    delay(2000);

    digitalWrite(a_led, HIGH);
    digitalWrite(b_led, HIGH);
    digitalWrite(c_led, HIGH);
    digitalWrite(d_led, HIGH);
  } else if (!digitalRead(d_button)) {  // D
    Serial.println("D");
    digitalWrite(a_led, LOW);
    digitalWrite(b_led, LOW);
    digitalWrite(c_led, LOW);
    digitalWrite(d_led, LOW);

    digitalWrite(d_led, HIGH);
    // digitalWrite(13, HIGH);
    tone(d_buzzer, F4);  // F4
    delay(500);
    digitalWrite(d_led, LOW);
    // digitalWrite(13, LOW);
    noTone(d_buzzer);
    delay(500);
    digitalWrite(d_led, HIGH);
    delay(2000);

    digitalWrite(a_led, HIGH);
    digitalWrite(b_led, HIGH);
    digitalWrite(c_led, HIGH);
    digitalWrite(d_led, HIGH);
  }

  // ---------------------------------------------------------

  if (analogRead(A1) > upperJoystick) { // A up
    Serial.println("E");
    digitalWrite(a_led, LOW);
    tone(a_buzzer, C4);
    delay(100);
    noTone(a_buzzer);
    digitalWrite(a_led, HIGH);
    delay(100);
    tone(a_buzzer, C4);
    digitalWrite(a_led, LOW);
    delay(100);
    digitalWrite(a_led, HIGH);
    noTone(a_buzzer);
    delay(200);
  } else if (analogRead(A1) < lowerJoystick){ // A down
    Serial.println("I");
    digitalWrite(a_led, LOW);
    tone(a_buzzer, A_4);
    delay(100);
    noTone(a_buzzer);
    delay(200);
  }

  if (analogRead(A2) > upperJoystick) { // B up
    Serial.println("F");
    digitalWrite(b_led, LOW);
    tone(b_buzzer, D4);
    delay(100);
    noTone(b_buzzer);
    digitalWrite(b_led, HIGH);
    delay(100);
    tone(b_buzzer, D4);
    digitalWrite(b_led, LOW);
    delay(100);
    digitalWrite(b_led, HIGH);
    noTone(b_buzzer);
    delay(200);
  } else if (analogRead(A2) < lowerJoystick){ // B down
    Serial.println("J");
    digitalWrite(b_led, LOW);
    tone(b_buzzer, A_4);
    delay(100);
    noTone(b_buzzer);
    delay(200);
  }

  if (analogRead(A3) > upperJoystick) { // C up
    Serial.println("G");
    digitalWrite(c_led, LOW);
    tone(c_buzzer, E4);
    delay(100);
    noTone(c_buzzer);
    digitalWrite(c_led, HIGH);
    delay(100);
    tone(c_buzzer, E4);
    digitalWrite(c_led, LOW);
    delay(100);
    digitalWrite(c_led, HIGH);
    noTone(c_buzzer);
    delay(200);
  } else if (analogRead(A3) < lowerJoystick){ // C down
    Serial.println("K");
    digitalWrite(c_led, LOW);
    tone(c_buzzer, A_4);
    delay(100);
    noTone(c_buzzer);
    delay(200);
  }

  if (analogRead(A4) > upperJoystick) { // D up
    Serial.println("H");
    digitalWrite(d_led, LOW);
    tone(d_buzzer, F4);
    delay(100);
    noTone(d_buzzer);
    digitalWrite(d_led, HIGH);
    delay(100);
    tone(d_buzzer, F4);
    digitalWrite(d_led, LOW);
    delay(100);
    digitalWrite(d_led, HIGH);
    noTone(d_buzzer);
    delay(200);
  } else if (analogRead(A4) < lowerJoystick){ // D down
    Serial.println("L");
    digitalWrite(d_led, LOW);
    tone(d_buzzer, A_4);
    delay(100);
    noTone(d_buzzer);
    delay(200);
  }

}
