#pragma once
#include "vex.h"
#include "UI.h"
#include <queue>

class Rectangle;

struct RectContent
{
    Rectangle* rect;
    int height; 
    int width; 
    int x;
    int y;
    RectContent(int height, int width, int x, int y, Rectangle* rect);
};

class renderUI
{
    private:
    int test;
    void* object;
    int ordering;
    int height;
    int width;
    int x;
    int y;
    const RectContent contents;
   
    enum Order
    {
        RECTANGLES,
        LABELS
    };

    std::queue<void*> orderQueue;
    

    public:
    renderUI(RectContent contents);
    

};