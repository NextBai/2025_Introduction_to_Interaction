# 2025 Introduction to Interaction
葉正聖老師的互動概論選修
一、導言 / 前言
課程背景介紹
Maker-Uno 是什麼（基於 Arduino Uno，與其相容） 
2025interaction.blogspot.com
課程目的：透過實作了解控制板的操作與應用
二、Week02 — Maker_Uno 電路板應用
初始設置與驅動安裝
板件拆箱、連線方式 (MicroUSB) 
2025interaction.blogspot.com
CH341 驅動程式安裝（CH341SER.EXE） 
2025interaction.blogspot.com
接口設定：Port、Board 選擇 
2025interaction.blogspot.com
第一支程式：聲音 (蜂鳴器) + LED 控制
定義音調（NOTE_C5, NOTE_E5, NOTE_G5 等） 
2025interaction.blogspot.com
使用 tone()、delay()、noTone() 等函式控制音調與節奏 
2025interaction.blogspot.com
LED 控制邏輯：正向 / 反向模式切換、點亮／熄滅控制 
2025interaction.blogspot.com
進階擴展：myMusic、Serial 整合
將 setup 裡重複區段抽成 myMusic() 函式 
2025interaction.blogspot.com
Serial 整合：偵聽 USB 傳輸資料觸發音樂（使用 serialEvent()） 
2025interaction.blogspot.com
Week02 小結與反思
本週學到的重點：驅動安裝、基本音效控制、LED 控制
遇到問題與注意事項（如驅動安裝、COM port 選擇）
三、Week03 — 更進一步的實作與互動
基礎程式練習：tone + loop + delay
Week03_1：單次發聲
Week03_2：for 迴圈重複發聲
Week03_3：放在 loop 中無限重複發聲 
2025interaction.blogspot.com
添加 LED 控制
Week03_4：設定多個 pin 為 OUTPUT，搭配 tone，交替點亮 LED 
2025interaction.blogspot.com
加入使用者互動（按鈕控制）
Week03_5：digitalRead 與 digitalWrite 來偵測按鈕與控制 LED 
2025interaction.blogspot.com
自動閃爍效果
Week03_6：使用巢狀迴圈，使 LED 由一側閃到另一側再回來 
2025interaction.blogspot.com
與電腦 / 滑鼠互動整合
Week03_7：Processing 程式與 Arduino Serial 溝通，滑鼠點擊觸發聲音 
2025interaction.blogspot.com
Week03_8：延伸：滑鼠左鍵 / 右鍵控制發聲或停止，類似拆彈器效果 
2025interaction.blogspot.com
Week03 小結與發展方向
本週核心技能：迴圈控制、LED 閃爍、按鈕偵測、Serial 通訊
綜合實作：整合滑鼠、聲音、LED 的交互應用
後續可能發展：更多感測器、輸出設備、互動應用
