
#include <iostream>

#include "Plane.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Plane::Draw() const
{
    ScreenSingleton::getInstance().SetColor(CC_LightBlue);
    ScreenSingleton::getInstance().ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "=========>";
    ScreenSingleton::getInstance().ScreenSingleton::getInstance().GotoXY(x - 2, y - 1);
    cout << "===";
    ScreenSingleton::getInstance().ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingleton::getInstance().ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
    cout << "////";
}
