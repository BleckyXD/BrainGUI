#pragma once
#include "vex.h"
#include <list>

using namespace vex;
extern brain Brain;
inline extern auto& Screen = Brain.Screen;
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
    static std::list<Button*> state;
   
    int height; 
    int width; 
    int x;
    int y;
    int textCenterX;
    int textCenterY;
    int tet;
    const vex::color color;
    static bool initializedButton;
    void drawButton();
    void calculateCenter();
    void calculatePressArea();

    static void touch();
    static void release();




 
     

    // RectContent contents;
    // renderUI block;
   
    const char* text;
    
    //
    public:
    //We can use multiple constructors depending on the rectangle's needs in the function
    Button(int x = 0, int y = 0, int width = 0, int height = 0, const char* text = "", const vex::color& color = transparent);

    
    
    void setColor(const vex::color& colorReceived);
    void setText(const char* textReceived);
    


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