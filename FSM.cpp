// #include "Arduino.h"

// #define Led1Pin 12
// #define Key_Pin 9
// #define Led2Pin 13

// void blink();
// void breath();
// void alternatebreath();

// int mode = 0;

// void setup() 
// {
//   // put your setup code here, to run once:
//     pinMode(Led1Pin, OUTPUT);
    
//     pinMode(Led2Pin, OUTPUT);
//     pinMode(Key_Pin, INPUT_PULLUP);

//     analogWrite(Led1Pin, 0);
//     analogWrite(Led2Pin, 0);

//     Serial.begin(115200);                       
// }

// void loop() 
// {
//   // put your main code here, to run repeatedly:
//     if(digitalRead(Key_Pin) == LOW)
//     {
//         delay(20);
//         if(digitalRead(Key_Pin) == LOW)
//         {
//             mode++;
//             Serial.println(mode);
//             if(mode > 3)            
//             {
//                 mode = 0;
//             }

//             switch(mode)
//             {
//                 case 0:
//                     analogWrite(Led1Pin, 0);
//                     break;

//                 case 1:
//                     blink();
//                     break;

//                 case 2:
//                     breath();
//                     break;

//                 case 3:
//                     alternatebreath();
//                     break;
//             }
            
//             while(digitalRead(Key_Pin) == LOW)
//             {

//             }
//         }
//     }
// }

// void blink()
// {
//     digitalWrite(Led1Pin, HIGH);
//     delay(80);
//     digitalWrite(Led1Pin, LOW);
//     delay(80);
// }

// void breath()
// {
//     for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++)
//     {
//         analogWrite(Led1Pin, dutyCycle);
//         delay(5);
//     }
//     for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--)
//     {
//         analogWrite(Led1Pin, dutyCycle);
//         delay(5);
//     }

//     delay(300);
// }

// void alternatebreath()
// {
//     digitalWrite(Led1Pin, HIGH);
//     digitalWrite(Led2Pin, LOW);
//     delay(500);
//     digitalWrite(Led1Pin, LOW);
//     digitalWrite(Led2Pin, HIGH);
//     delay(500);
// }