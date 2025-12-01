//Week13_3_button_beep_twice
//修改自Week13_2_do_it_by_your_self
//按一下會逼兩個音
#define NOTE_C5 523
#define NOTE_G5 784
#define BUTTON 2
#define BUZZER 8

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // button 由 INPUT_PULLUP → 按下時讀到 LOW
  if (digitalRead(BUTTON) == LOW) {
    tone(BUZZER, NOTE_C5, 150);  // 播 150ms 的 C5
    delay(200);                  // 防止按鈕彈跳
    tone(BUZZER, NOTE_G5, 150);  // 播 150ms 的 G5
    delay(200);                  // 防止音符重疊和狂叫
  }
}
