#include "UI.h"
#include "vex.h"
//#include "RenderClass.h"

using namespace vex;

brain Brain;

auto& Screen = Brain.Screen;

Rectangle::Rectangle(int x, int y, int width, int height, const char* text,  const vex::color& color):
x(x), y(y), width(width), height(height), text(text), color(color)
{
    drawRect();
    //function for calculating center only if there is text
};

void Rectangle::calculateCenter()
{
    int textHeight = Screen.getStringHeight(text);
    int textWidth = Screen.getStringWidth(text);
    textCenterX = x + (width - textWidth)/2;
    textCenterY = y + (height/2) + (textHeight/2);
}
void Rectangle::drawRect()
{
    calculateCenter();
    if(color != vex::color::transparent)
    {
        Screen.drawRectangle(x, y, width, height, color);
    }
    else
    {
        Screen.drawRectangle(x, y, width, height);
    } 
    Screen.printAt(textCenterX, textCenterY, text);
}
void Rectangle::setColor(const vex::color& colorReceived)
{
    calculateCenter();
    Screen.drawRectangle(x, y, width, height, colorReceived);
    Screen.printAt(textCenterX, textCenterY, text);
}
void Rectangle::setText(const char* textReceived)
{
    text = textReceived;
    calculateCenter();
    Screen.printAt(textCenterX, textCenterY , text);
}



Button::Button(int x, int y, int width, int height, const char* text,  const vex::color& color):
x(x), y(y), width(width), height(height), text(text), color(color)
{

};

void Button::calculateCenter()
{
    int textHeight = Screen.getStringHeight(text);
    int textWidth = Screen.getStringWidth(text);
    textCenterX = x + (width - textWidth)/2;
    textCenterY = y + (height/2) + (textHeight/2);
}
void Button::drawButton()
{
    calculateCenter();
    if(color != vex::color::transparent)
    {
        Screen.drawRectangle(x, y, width, height, color);
    }
    else
    {
        Screen.drawRectangle(x, y, width, height);
    } 
    Screen.printAt(textCenterX, textCenterY, text);
}
void Button::setColor(const vex::color& colorReceived)
{
    calculateCenter();
    Screen.drawRectangle(x, y, width, height, colorReceived);
    Screen.printAt(textCenterX, textCenterY, text);
}
void Button::setText(const char* textReceived)
{
    text = textReceived;
    calculateCenter();
    Screen.printAt(textCenterX, textCenterY , text);
}

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