//Week13_5_button_twice_beep_change
//修改自Week13_4_button_beep_change
//在利用按鈕的雙擊事件時切換不同的音樂或音符序列。
#define NOTE_C5 523
#define NOTE_G5 784
#define NOTE_E5 659
#define NOTE_A5 880

#define BUTTON 2
#define BUZZER 8

int mode = 0; // 0: 模式1, 1: 模式2
unsigned long lastPressTime = 0; // 上次按鈕按下的時間
unsigned long debounceTime = 200; // 去彈跳時間
unsigned long doubleClickThreshold = 400; // 判定雙擊的時間閾值
bool waitingForSecondPress = false; // 是否正在等待第二次按下

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // 檢查按鈕是否被按下
  if (digitalRead(BUTTON) == LOW) {
    unsigned long currentTime = millis();
    
    // 防止按鈕彈跳，確保足夠時間後才能按
    if (currentTime - lastPressTime < debounceTime) {
      return;
    }
    
    // 記錄按鈕按下的時間
    lastPressTime = currentTime;
    
    // 如果正在等待第二次按下，則進行雙擊處理
    if (waitingForSecondPress) {
      waitingForSecondPress = false;  // 重置等待狀態
      mode = (mode + 1) % 2;  // 切換模式
    } else {
      // 設置等待第二次按鈕按下
      waitingForSecondPress = true;
      delay(doubleClickThreshold);  // 等待第二次按下
    }
    
    // 播放音符
    if (mode == 0) {
      tone(BUZZER, NOTE_C5, 150);  // 播 150ms 的 C5
      delay(200);                  
      tone(BUZZER, NOTE_G5, 150);  // 播 150ms 的 G5
      delay(200);
    } 
    else if (mode == 1) {
      tone(BUZZER, NOTE_E5, 150);  // 播 150ms 的 E5
      delay(200);                  
      tone(BUZZER, NOTE_A5, 150);  // 播 150ms 的 A5
      delay(200);
    }
  }
  
  // 如果超過雙擊閾值，取消等待第二次按下
  if (waitingForSecondPress && millis() - lastPressTime > doubleClickThreshold) {
    waitingForSecondPress = false;
  }
}
