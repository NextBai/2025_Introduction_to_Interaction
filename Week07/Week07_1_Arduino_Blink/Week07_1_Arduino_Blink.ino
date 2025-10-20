//Week07_1_Arduino_Blink
//安裝好後, Select Board要選剛剛裝置管理員的那個 USB-Serial COM5
void setup() {
  pinMode(13, OUTPUT);//把第13隻腳, 能送出資料 OUTPUT
}

void loop() {
  digitalWrite(13, HIGH);//發亮
  delay(500);
  digitalWrite(13, LOW);//暗掉
  delay(500);
}
