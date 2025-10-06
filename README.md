# 2025 Introduction to Interaction
葉正聖老師的互動概論選修
# 課程大綱（針對第 2–3 週進度）

## 第 2 週：Maker-UNO 電路板應用與音樂控制

### 教學目標
- 了解 Maker-UNO 板的硬體規格與功能
- 建立初始環境設定（驅動、板子對接、上傳測試）
- 學會控制蜂鳴器發聲、LED 燈與按鈕互動
- 練習利用 Serial 通訊與電腦交互

### 內容與流程

| 單元 | 主題 | 關鍵技術 / 知識點 | 範例或練習 |
|---|---|---|---|
| 2-1 | Maker-UNO 介紹與初始設定 | 與 Arduino Uno 的兼容性、CH340G 晶片、IO 引腳 | 拆箱與硬體外觀認識 |
| 2-2 | 驅動安裝與電腦連線 | 安裝 CH341SER 驅動程式、COM 埠選擇、板子選擇 | 上傳簡單 Blink 測試、確認連線 |
| 2-3 | 基本蜂鳴器（Buzzer）發聲 | 定義音符（如 NOTE_C5 等）、tone()、delay()、noTone() | 撰寫簡單旋律（myMusic） |
| 2-4 | LED 與按鈕控制互動 | digitalRead、digitalWrite、INPUT_PULLUP、mode 切換 | 按下按鈕切換模式、同步 LED 與蜂鳴器 |
| 2-5 | 串列通訊 Serial | Serial.begin、serialEvent、讀寫資料 | 接收來自 Serial 的命令以觸發音樂播放 |

### 預期成果
- 學員可成功在 Maker-UNO 上執行簡單的音樂播放程式
- 同時能讓 LED 隨模式亮滅與按鈕互動控制
- 能與電腦透過 Serial 溝通，發送指令控制動作

---

## 第 3 週：進階輸出控制與互動整合

### 教學目標
- 熟悉 pinMode、digitalWrite／digitalRead 的使用
- 運用迴圈（for）來重複控制動作
- 進行 LED 閃爍、循環走動等效果程式設計
- 整合 Processing + Arduino，實現滑鼠互動控制 LED / 聲音

### 內容與流程

| 單元 | 主題 | 關鍵技術 / 知識點 | 範例或練習 |
|---|---|---|---|
| 3-1 | 基礎輸出控制與 tone 範例 | pinMode, tone, delay | Week03_1：設定 pin 8 輸出並以 tone 觸發聲音 |
| 3-2 | 迴圈控制重複動作 | for 迴圈、重複執行 | Week03_2：用 for 做 5 次發聲 |
| 3-3 | 長時間重複輸出 | loop() 的無限執行 | Week03_3：在 loop 裡持續發聲 |
| 3-4 | LED 與聲音同步控制 | digitalWrite + tone 混合操控 | Week03_4：三個 LED 與不同音調交替亮燈發聲 |
| 3-5 | 按鈕控制 LED 狀態 | digitalRead 讀按鍵、變數控制 LED | Week03_5：按鈕按下切換 LED 燈號 |
| 3-6 | 循環跑動 LED 效果 | 雙向 for 迴圈控制 LED 閃爍走動 | Week03_6：LED 從一端跑到另一端再反回 |
| 3-7 | Processing + Arduino 通訊 | Processing Serial.write, Arduino serialEvent | Week03_7：滑鼠點擊傳送指令讓 Arduino 發聲 |
| 3-8 | 模擬拆彈互動設計 | 左鍵／右鍵控制發聲開關 | Week03_8：接收滑鼠指令切換 beep 狀態 |

### 預期成果
- 學員能撰寫可控制多個 LED 與音效同步的程式
- 能利用按鈕、迴圈、變數來設計互動行為
- 完成基礎的 Processing + Arduino 通訊，讓滑鼠互動控制硬體響應  

---


後續可能發展：更多感測器、輸出設備、互動應用
