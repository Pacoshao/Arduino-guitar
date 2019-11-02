float tonelist[]={1046.5,1174.7,1318.5,1396.9,1568,1760,1975.5};

void setup(){
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(12, INPUT);
}

void loop(){
  if (digitalRead(2) == LOW) {
    while (true) {
      for (int i = 1; i <= 7; i = i + (1)) {
        tonelist[(int)(i - 1)] = tonelist[(int)(i - 1)] + (map(analogRead(A0), 1, 1023, 1, 500));
        if (i == 7) {
          break;

        }
      }
      if (digitalRead(2) == LOW) {
        break;

      } else if (digitalRead(3) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(0)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(5) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(1)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(6) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(2)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(7) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(3)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(9) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(4)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(10) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(5)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      } else if (digitalRead(12) == HIGH) {
        pinMode(A1, OUTPUT);
        tone(A1,tonelist[(int)(6)]);
        delay(600);
        pinMode(A1, OUTPUT);
        noTone(A1);
        delay(600);
      }
    }

  }

}
