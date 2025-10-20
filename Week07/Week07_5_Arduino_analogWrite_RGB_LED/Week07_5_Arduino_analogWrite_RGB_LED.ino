//Week07_5_Arduino_analogWrite_RGB_LED
void setup() {
  //RGB LED最長的那根是接地GND
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}//這些特別的腳,分別是第3, 第5, 第6, 第9, 第10, 第11共6隻腳, 都可控制他的亮暗的程度

int a = 0;
void loop() {
  analogWrite(6, 0);//藍色關掉
  analogWrite(3, 255);//最亮的紅色
  delay(500);//每0.5秒
  analogWrite(3, 0);//紅色關掉
  analogWrite(5, 255);//最亮的綠色
  delay(500);
  analogWrite(5, 0);//綠色關掉
  analogWrite(6, 255);//最亮的藍色
  delay(500);
}
