//Week13_4_button_beep_change
//修改自Week13_3_button_beep_twice
//在每次按下按鈕時切換不同的音樂或音符序列。
#define NOTE_C5 523
#define NOTE_G5 784
#define NOTE_E5 659
#define NOTE_A5 880

#define BUTTON 2
#define BUZZER 8

int mode = 0; // 0: 模式1, 1: 模式2

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    delay(200); // 防止按鈕彈跳
    
    if (mode == 0) {
      // 模式1：播放 C5 和 G5 音符
      tone(BUZZER, NOTE_C5, 150);  // 播 150ms 的 C5
      delay(200);                  
      tone(BUZZER, NOTE_G5, 150);  // 播 150ms 的 G5
      delay(200);
    } 
    else if (mode == 1) {
      // 模式2：播放 E5 和 A5 音符
      tone(BUZZER, NOTE_E5, 150);  // 播 150ms 的 E5
      delay(200);                  
      tone(BUZZER, NOTE_A5, 150);  // 播 150ms 的 A5
      delay(200);
    }
    
    // 切換音樂模式
    mode = !mode;  // 如果 mode 是 0，變為 1；如果是 1，變為 0
  }
}
