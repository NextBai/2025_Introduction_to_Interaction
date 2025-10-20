//Week07_4_Arduino_analogWrite
void setup() {
  pinMode(13, OUTPUT);//第13個pin腳(有PWM功能, 可0-255輸出), 要輸出
}//這些特別的腳,分別是第3, 第5, 第6, 第9, 第10, 第11共6隻腳, 都可控制他的亮暗的程度

int a = 0;
void loop() {
  analogWrite(13, a);//亮的程度,是a的值
  a = (a+1) % 256;//會在亮一點點
  delay(10);//每0.01秒
}
