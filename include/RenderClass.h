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
    
    enum Order 
    {
        RECTANGLES,
        LABELS
    };

    std::queue<void*> orderQueue;
    void* object;
    int order;

    public:
    renderUI(const RectContent* contents);
    

};