//Week07_3_Arduino_Blink_Blink_Blink_Blink
//修改自Week07_2_Arduino_Blink_Blink 只是再多插2隻LED
//使用麵包板, 每5洞是一板,所以用GND接之後
//小心有一隻腳要接地GND,另一隻要接13
//小心有一隻腳要接地GND,另一隻要接12
//小心有一隻腳要接地GND,另一隻要接11
//小心有一隻腳要接地GND,另一隻要接10
void setup() {
  pinMode(10, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
  pinMode(11, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
  pinMode(12, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
  pinMode(13, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
}

void loop() {
  for(int i=10;i<=13;i++){
  digitalWrite(13, LOW);//暗掉
  digitalWrite(i-1, LOW);//暗掉
  digitalWrite(i, HIGH);//發亮
  delay(500);
  }
}
