// #include "Arduino.h"

// int Key1Pin = 9;

// int Led1Pin = 12;

// int sign_led = 1;

// void setup() 
// {
//   // put your setup code here, to run once:
//     pinMode(Led1Pin, OUTPUT);

//     digitalWrite(Led1Pin, HIGH);

//     pinMode(Key1Pin, INPUT_PULLUP);
// }

// void loop() 
// {
//   // put your main code here, to run repeatedly:
//     if(digitalRead(Key1Pin) == LOW)
//     {
//         delay(20);
//         if(digitalRead(Key1Pin) == LOW)
//         {
//             sign_led = !sign_led;
//             digitalWrite(Led1Pin, sign_led);

//             while(digitalRead(Key1Pin) == LOW)
//             {

//             }
//         }
//     }
// }