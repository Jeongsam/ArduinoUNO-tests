/**
 * 보드에 내장된 LED를 2초간격으로 깜박임
 */

// 보드 LED에 연결된 13번핀
#define LEDpin 13

void setup() {
  // 보드내 13번 핀을 출력으로 설정
  pinMode(LEDpin, OUTPUT);

  // LED 초기화 꺼짐
  digitalWrite(LEDpin, LOW);
}

void loop() {
  delay(2000);
  digitalWrite(LEDpin, HIGH);

  delay(2000);
  digitalWrite(LEDpin, LOW);
}
