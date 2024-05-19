#define LED_PIN_NUM		9    // LED 핀 번호

void setup()
{
  pinMode(LED_PIN_NUM, OUTPUT);    // LED핀을 출력핀으로 설정
}

void loop()
{
  int data = analogRead(A0);                                        // A0 (가변저항)의 값을 가져옴
  analogWrite(LED_PIN_NUM, map(data, 0, 1023, 0, 255));             // LED에게 0에서 255사이의 값을 전달
}
