#define motor_pin 26
#define dir_pin 27

#define max_speed 255

void setup() {
  pinMode(motor_pin, OUTPUT);
  pinMode(dir_pin, OUTPUT);
}

void loop() {
  // going forward
  digitalWrite(dir_pin, HIGH);

  for (int i = 0; i < max_speed; i++) {
    analogWrite(motor_pin, i);
  }
  delay(2000);

  digitalWrite(dir_pin, LOW);
  digitalWrite(dir_pin, LOW);

  delay(10000);

  // going backwards
  digitalWrite(dir_pin, LOW);
  for (int i = 0; i < max_speed; i++) {
    analogWrite(motor_pin, i);
  }

  delay(2000);
  digitalWrite(dir_pin, LOW);
  digitalWrite(dir_pin, LOW);
  delay(10000);

}
