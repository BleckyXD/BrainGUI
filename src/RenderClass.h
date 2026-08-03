#pragma once
#include <vector>

enum OrderBlock
{
    RECTANGLES,
    LABELS
};

struct RectContent
{
    OrderBlock type;
    int height; 
    int width; 
    int x;
    int y;
};

class renderUI
{
    private:
    std::vector<RectContent> contentList;

    public:
    void addBlock();
     
}

// #pragma once
// #include <queue>

// class Rectangle;





// class renderUI
// {
//     private:
//     int x;
//     int y;
//     int width;
//     int height;
//     //const RectContent contents;
//     enum Order 
//     {
//         RECTANGLES,
//         LABELS
//     };

//     std::queue<void*> orderQueue;
//     void* object;
//     //int order;
    

//     public:
//     renderUI(RectContent contents);
//     void test();
    

// };