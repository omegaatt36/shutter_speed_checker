#include <Wire.h>  // Arduino IDE 內建
int receiverPin = 0; // 宣告腳位2名稱為receiverPin
unsigned long duration; // 持續時間

void setup() {
  pinMode(receiverPin, INPUT); //把receiverPin設為輸入 INPUT
  Serial.begin(9600);  // // 開啟 Serial port, 通訊速率為 9600 bps
}

void loop() {
  duration = pulseIn(receiverPin, LOW);
  Serial.print(duration);
}
