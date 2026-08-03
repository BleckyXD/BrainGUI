#include "RenderClass.h"
#include "vex.h"
using namespace vex;
brain Brain;

auto& Screen = Brain.Screen;

RectContent::RectContent(int height, int width, int x, int y, Rectangle* rect):
height(height), width(width), x(x), y(y), rect(rect){}

renderUI::renderUI(RectContent contents): 
x(contents.x), y(contents.y), width(contents.width), height(contents.height)
{
    
}


void renderUI::test()
{
    Screen.drawRectangle(0, 0, 100, 100);
}