/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       gabyb                                                     */
/*    Created:      7/14/2026, 10:37:44 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
// #include "vex.h"
#include "UI.h"
// #include <string>

// using namespace vex;

// struct Button
// {
//     int width = 100;
//     int height = 100;
// };
// Button button;

// brain Brain;

// auto& Screen = Brain.Screen;



// void firstScreen()
// {
//     Brain.Screen.clearScreen(blue);
// }
void test()
{
    Screen.print("hey");
}



int main()
{
    int positionX = 0;
    int positionY = 0;
    
    // Rectangle a(positionX, positionY, 100, 100);
    // a.setText("hey");
    // a.setColor(blue);

    Button b(150,0,200,100);
    
    //Button::drawAll();


    b.setText("This is a Button!");
    b.setPressColor(red);
    b.setReleaseColor(green);
    

    
    Button open(200, 100, 50, 50);
    open.setAction(test);
    open.setPressColor(green);
    open.setReleaseColor(purple);
    
    
    // Label(a, "hey");
    // a.setColor(white);
    // a.setText("pina");
    
    
}


// void createMenu()
// {
//     int width = button.width;
//     int height = button.height;
//     const char* text = "hello";
//     int textHeight = Screen.getStringHeight(text);
//     int textWidth = Screen.getStringWidth(text);

//     int textCenterX = (width - textWidth)/2;
//     int textCenterY = (height/2) + (textHeight/2);
    
//     Screen.drawRectangle(0, 0, width, height, red);

  
//     Screen.printAt(textCenterX, textCenterY , "Hello");
// }


// 6:30pm





// int main() 
// {
//     // Brain.Screen.pressed(testPress);
//     // Brain.Screen.released(testRelease);
//     Screen.drawRectangle(120, 120, 100, 100, red);

//     while(true) 
//     {
//         int touchX = Brain.Screen.xPosition();
//         int touchY = Brain.Screen.yPosition();
        
//         if(Screen.pressing())
//         {
//             if((touchX >= 120 && touchX <= 220) && (touchY >= 120 && touchY <= 220))
//             {
//                 Screen.drawRectangle(120, 120, 100, 100,green);
//             }
//         }
//         else
//         {
//             Screen.drawRectangle(120, 120, 100, 100, white);
//         }
//         // if((touchX >= 60 && touchX <= 320) && (touchY >= 60 && touchY <= 320))
//         // {
//         //     Brain.Screen.print("Not Pressing");
//         //     Brain.Screen.drawRectangle(120, 120, 100, 100,green);
//         // }
        
//         wait(50, msec);
//     }
// }
