#include "UI.h"
#include "vex.h"
//#include "RenderClass.h"

using namespace vex;



Rectangle::Rectangle(int x, int y, int width, int height, const char* text,  const vex::color& color)
{
    RectContent rct;
    rct.x = x;
    rct.y = y;
    rct.width = width;
    rct.height = height;
    rct.type = RECTANGLES;
    globalUI.addBlock(rct);
};

// void Rectangle::drawRect()
// {
//     int textHeight = Screen.getStringHeight(text);
//     int textWidth = Screen.getStringWidth(text);
//     int textCenterX = x + (width - textWidth)/2;
//     int textCenterY = y + (height/2) + (textHeight/2);

//     if(color != vex::color::transparent)
//     {
//         Screen.drawRectangle(x, y, width, height, color);
//     }
//     else
//     {
//         Screen.drawRectangle(x, y, width, height);
//     } 
//     Screen.printAt(textCenterX, textCenterY , text);
// }
// void Rectangle::setColor(const vex::color& colorReceived)
// {
//     Screen.drawRectangle(x, y, width, height, colorReceived);
// }
// void Rectangle::setText(const char* textReceived)
// {
//     int textHeight = Screen.getStringHeight(textReceived);
//     int textWidth = Screen.getStringWidth(textReceived);
//     int textCenterX = x + (width - textWidth)/2;
//     int textCenterY = y + (height/2) + (textHeight/2);
//     Screen.printAt(textCenterX, textCenterY , textReceived);
// }

// const int Rectangle::getWidth()
// {
//     return width;
// }

// const int Rectangle::getHeight()
// {
//     return height;
// }

// const int Rectangle::getX()
// {
//     return x;
// }

// const int Rectangle::getY()
// {
//     return y;
// }


// Label::Label(Rectangle& rect, const char* text): rect(rect),text(text)
// {
//     writeText();
// };

// void Label::writeText()
// {
//     int textHeight = Screen.getStringHeight(text);
//     int textWidth = Screen.getStringWidth(text);
//     int textCenterX = rect.getX() + (rect.getWidth() - textWidth)/2;
//     int textCenterY = rect.getY() + (rect.getHeight()/2) + (textHeight/2);
//     Screen.printAt(textCenterX, textCenterY , text);
// }