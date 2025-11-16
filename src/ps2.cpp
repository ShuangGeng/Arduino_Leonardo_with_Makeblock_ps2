#include <Arduino.h>
#include <MePS2.h>
//实例化对象
MePS2 ps2 = MePS2(&Serial1);

void setup() {
  Serial.begin(115200);
  //PS2初始化
  ps2.begin(115200);
}

void loop() {
 //PS2数据更新
 ps2.loop();
 //读取手柄数据
 if (ps2.ButtonPressed(MeJOYSTICK_UP))
 {
   Serial.println("UP is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_DOWN))
 {
   Serial.println("DOWN is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_LEFT))
 {
   Serial.println("LEFT is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_RIGHT))
 {
   Serial.println("RIGHT is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_L1))
 {
   Serial.println("L1 is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_L2))
 {
   Serial.println("L2 is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_R1))
 {
   Serial.println("R1 is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_R2))
 {
   Serial.println("R2 is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_TRIANGLE))
 {
   Serial.println("TRIANGLE is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_XSHAPED))
 {
   Serial.println("XSHAPED is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_SQUARE))
 {
   Serial.println("SQUARE is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_ROUND))
 {
   Serial.println("ROUND is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_START))
 {
   Serial.println("START is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_SELECT))
 {
   Serial.println("SELECT is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_MODE))
 {
   Serial.println("MODE is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_BUTTON_L))
 {
   Serial.println("BUTTON_L is pressed!");
 }
 if (ps2.ButtonPressed(MeJOYSTICK_BUTTON_R))
 {
   Serial.println("BUTTON_R is pressed!");
 }

 if (ps2.MeAnalog(MeJOYSTICK_RX))
 {
   Serial.print("MePS2_RX value is: ");
   Serial.println(ps2.MeAnalog(MeJOYSTICK_RX), DEC);
 }
 if (ps2.MeAnalog(MeJOYSTICK_RY))
 {
   Serial.print("MePS2_RY value is: ");
   Serial.println(ps2.MeAnalog(MeJOYSTICK_RY), DEC);
 }
 if (ps2.MeAnalog(MeJOYSTICK_LX))
 {
   Serial.print("MePS2_LX value is: ");
   Serial.println(ps2.MeAnalog(MeJOYSTICK_LX), DEC);
 }
 if (ps2.MeAnalog(MeJOYSTICK_LY))
 {
   Serial.print("MePS2_LY value is: ");
   Serial.println(ps2.MeAnalog(MeJOYSTICK_LY), DEC);
 }
}
