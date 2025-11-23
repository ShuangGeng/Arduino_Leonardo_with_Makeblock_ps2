// 0  按钮3
// 1  按钮4
// 2  按钮1
// 3  按钮2
// 4  L1
// 5  R1
// 6  L2
// 7  R2
// 8  选择
// 9  开始
// 10 左摇杆按钮
// 11 右摇杆按钮
// 12 上
// 13 下
// 14 左
// 15 右

#include <Joystick.h>
#include <MePS2.h>

int pskeys[] = {MeJOYSTICK_XSHAPED, MeJOYSTICK_SQUARE, MeJOYSTICK_TRIANGLE, MeJOYSTICK_ROUND, MeJOYSTICK_L1, MeJOYSTICK_R1, MeJOYSTICK_L2, MeJOYSTICK_R2, MeJOYSTICK_SELECT, MeJOYSTICK_START, MeJOYSTICK_BUTTON_L, MeJOYSTICK_BUTTON_R, MeJOYSTICK_UP, MeJOYSTICK_DOWN, MeJOYSTICK_LEFT, MeJOYSTICK_RIGHT};

// 实例化对象
MePS2 ps2 = MePS2(&Serial1);
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
                   16, 0,                // Button Count, Hat Switch Count
                   true, true, false,    // X and Y, but no Z Axis
                   true, true, false,    // No Rx, Ry, or Rz
                   false, false,         // No rudder or throttle
                   false, false, false); // No accelerator, brake, or steering

void setup()
{
  ps2.begin(115200);
  // Initialize Joystick Library
  Joystick.begin();
  Joystick.setXAxisRange(-255, 255);
  Joystick.setYAxisRange(255, -255);
  Joystick.setRxAxisRange(-255, 255);
  Joystick.setRyAxisRange(255, -255);
}

void loop()
{
  ps2.loop();
  for (size_t i = 0; i < 16; i++)
  {
    Joystick.setButton(i, ps2.ButtonPressed(pskeys[i]));
  }
  Joystick.setXAxis(ps2.MeAnalog(MeJOYSTICK_LX));
  Joystick.setYAxis(ps2.MeAnalog(MeJOYSTICK_LY));
  Joystick.setRxAxis(ps2.MeAnalog(MeJOYSTICK_RX));
  Joystick.setRyAxis(ps2.MeAnalog(MeJOYSTICK_RY));
}
