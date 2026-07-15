/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       gabyb                                                     */
/*    Created:      7/14/2026, 10:37:44 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
brain Brain;

// define your global instances of motors and other devices here


void testPress()
{
    
    int touchX = Brain.Screen.xPosition();
    int touchY = Brain.Screen.yPosition();
    Brain.Screen.setCursor(4,4);
    if((touchX >= 60 && touchX <= 320) && (touchY >= 60 && touchY <= 320))
    {
        Brain.Screen.print("Works!");
    }
    Brain.Screen.drawRectangle(120, 120, 100, 100,green);
}
void testRelease()
{
    Brain.Screen.setCursor(4,4);
    Brain.Screen.print("Wark");
    Brain.Screen.drawRectangle(120, 120, 100, 100,white);
}

void firstScreen()
{

}

void secondScreen()
{

}

int main() 
{

    Brain.Screen.drawRectangle(60, 60, 100, 100, red);
    Brain.Screen.pressed(testPress);
    Brain.Screen.released(testRelease);

    while(true) 
    {
       

       
        
            wait(50, msec);
        
    
    }
}
