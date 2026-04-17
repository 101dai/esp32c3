// #include "Arduino.h" //1. 先定义引脚和状态
// #define Key_Pin 2       // 按键引脚
// #define LED_Pin 9       // LED PWM引脚

// // 状态定义
// #define MODE_BLINK 1    // 闪烁
// #define MODE_BREATH 2   // 呼吸灯
// #define MODE_ALT_BREATH 3 // 交替呼吸
// int mode = MODE_BLINK;  // 初始状态

// // 2. 【关键】提前声明函数（解决"not declared"报错）
// void blink();
// void breath();
// void alternatebreath();

// void setup() {
//   pinMode(Key_Pin, INPUT_PULLUP); // 按键上拉输入（按下为LOW）
//   pinMode(LED_Pin, OUTPUT);
// }

// void loop() {
//   // 3. 按键只负责切换状态（按一下切换一次，不影响状态执行）
//   static unsigned long lastKeyTime = 0;
//   if(millis() - lastKeyTime > 200) { // 200ms消抖
//     if(digitalRead(Key_Pin) == LOW) {
//       lastKeyTime = millis();
//       // 切换状态
//       mode++;
//       if(mode > MODE_ALT_BREATH) mode = MODE_BLINK;
//     }
//   }

//   // 4. 无论按键是否按下，都根据当前状态持续执行
//   switch(mode) {
//     case MODE_BLINK:
//       blink();
//       break;
//     case MODE_BREATH:
//       breath();
//       break;
//     case MODE_ALT_BREATH:
//       alternatebreath();
//       break;
//   }
// }

// // 5. 【在loop()之后定义函数也完全没问题】
// // 闪烁模式
// void blink() {
//   static unsigned long lastBlink = 0;
//   static bool ledState = LOW;
//   if(millis() - lastBlink > 500) { // 500ms闪烁
//     lastBlink = millis();
//     ledState = !ledState;
//     digitalWrite(LED_Pin, ledState);
//   }
// }

// // 呼吸灯模式（PWM渐变）
// void breath() {
//   static int brightness = 0;
//   static int fadeAmount = 5;
//   analogWrite(LED_Pin, brightness);
//   brightness += fadeAmount;
//   if(brightness <= 0 || brightness >= 255) {
//     fadeAmount = -fadeAmount;
//   }
//   delay(30); // 控制渐变速度
// }

// // 交替呼吸模式（示例：快慢交替呼吸）
// void alternatebreath() {
//   static int brightness = 0;
//   static int fadeAmount = 10;
//   static unsigned long lastChange = 0;
//   if(millis() - lastChange > 1000) { // 每1秒切换快慢
//     lastChange = millis();
//     fadeAmount = (fadeAmount == 10) ? 2 : 10;
//   }
//   analogWrite(LED_Pin, brightness);
//   brightness += fadeAmount;
//   if(brightness <= 0 || brightness >= 255) {
//     fadeAmount = -fadeAmount;
//   }
//   delay(10);
// }