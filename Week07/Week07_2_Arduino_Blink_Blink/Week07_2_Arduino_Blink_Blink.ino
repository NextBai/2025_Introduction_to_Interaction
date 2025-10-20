//Week07_2_Arduino_Blink_Blink
//修改自Week07_1_Arduino_Blink 只是再多插一隻LED
//小心有一隻腳要接地GND,另一隻要接13
//小心有一隻腳要接地GND,另一隻要接12
void setup() {
  pinMode(12, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
  pinMode(13, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
}

void loop() {
  digitalWrite(12, LOW);//暗掉
  digitalWrite(13, HIGH);//發亮
  delay(500);
  digitalWrite(13, LOW);//暗掉
  digitalWrite(12, HIGH);//發亮
  delay(500);
}
