#pragma once
#include "vex.h"

using namespace vex;
class Rectangle
{
    
    private:
    int height; 
    int width; 
    int x;
    int y;
    int textCenterX;
    int textCenterY;
    int tet;
    const vex::color color;

    // RectContent contents;
    // renderUI block;
   
    const char* text;
    
    //
    public:
    //We can use multiple constructors depending on the rectangle's needs in the function
    Rectangle(int x = 0, int y = 0, int width = 0, int height = 0, const char* text = "", const vex::color& color = transparent);

    
    void drawRect();
    void setColor(const vex::color& colorReceived);
    void setText(const char* textReceived);
    void calculateCenter();
    // const int getWidth();
    // const int getHeight();
    // const int getX();
    // const int getY();

};


class Button
{
    private:
    int height; 
    int width; 
    int x;
    int y;
    int textCenterX;
    int textCenterY;
    int tet;
    const vex::color color;

    // RectContent contents;
    // renderUI block;
   
    const char* text;
    
    //
    public:
    //We can use multiple constructors depending on the rectangle's needs in the function
    Button(int x = 0, int y = 0, int width = 0, int height = 0, const char* text = "", const vex::color& color = transparent);

    
    void drawButton();
    void setColor(const vex::color& colorReceived);
    void setText(const char* textReceived);
    void calculateCenter();


};

class Label
{
    private:
    // int height; 
    // int width; 
    // int x;
    // int y;
    const char* text;
    Rectangle& rect;

    enum class TextAlignment 
    {
        LeftAlign,
        CenterAlign,
        RightAlign
    };


    public:
    Label(Rectangle& rect, const char* text);
    void writeText();
    
};

// class Column
// {
//     private:

//     public:
// };

// class Row
// {
//     private:

//     public:
// };