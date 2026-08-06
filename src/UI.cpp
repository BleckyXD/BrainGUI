#include "UI.h"
//#include "RenderClass.h"
brain Brain;
//using namespace vex;



 
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
    //calculateCenter();
    Screen.drawRectangle(x, y, width, height, colorReceived);
    Screen.printAt(textCenterX, textCenterY, text);
}
void Rectangle::setText(const char* textReceived)
{
    text = textReceived;
    calculateCenter();
    Screen.printAt(textCenterX, textCenterY , text);
}











std::list<Button*> Button::state;





Button::Button(int x, int y, int width, int height, const char* text,  const vex::color& color):
x(x), y(y), width(width), height(height), text(text), color(color), action(nullptr)
{
    initializedButton = false;
    state.push_back(this);
   
    
    if (!initializedButton) 
    {
        Screen.pressed(Button::touch);
        Screen.released(Button::release);
        initializedButton = true;
    }
    // drawAll();
    drawButton();
    
};

// void Button::drawAll() {
//     for (Button* btn : state) {
//         btn->drawButton();
//     }
// }
void Button::touch()
{
    //Screen.drawRectangle(50,50,100,100);
    int pressX = Screen.xPosition();
    int pressY = Screen.yPosition();
    for(Button* btn : state)
    {
        Button& b = *btn;


        if((pressX >= b.x && pressX <= (b.width + b.x)) && (pressY >= b.y && pressY <= (b.height + b.y)))
        {
            
            b.setColor(b.pressColor);
        }
    }
}

void Button::setAction(std::function<void()> action)
{
    this->action = action;
}

void Button::release()
{
    for(Button* btn : state)
    {
        int pressX = Screen.xPosition();
        int pressY = Screen.yPosition();
        Button& b = *btn;
        if((pressX >= b.x && pressX <= (b.width + b.x)) && (pressY >= b.y && pressY <= (b.height + b.y)))
        {
            b.setColor(b.color);
            if(b.action != nullptr)
            {
                b.action();
            }
        }
        
        
    }
}

void Button::setPressColor(const vex::color& pressColor)
{
    this->pressColor = pressColor;
    
}

void Button::setReleaseColor(const vex::color& releaseColor)
{
    this->releaseColor = releaseColor;
    this->color = releaseColor;
}



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
    // calculateCenter();
    Screen.drawRectangle(x, y, width, height, colorReceived);
    Screen.printAt(textCenterX, textCenterY, text);
}
void Button::setText(const char* textReceived)
{
    text = textReceived;
    calculateCenter();
    Screen.printAt(textCenterX, textCenterY , text);
}

