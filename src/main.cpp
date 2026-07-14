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


int main() 
{

    Brain.Screen.printAt( 10, 50, "Hello V5" );
    Brain.Screen.clearScreen();
    Brain.Screen.setFont(fontType::mono30);
    
    while(true) 
    {
        // Check if the screen is being pressed
        if(Brain.Screen.pressing()) 
        {
            int touchX = Brain.Screen.xPosition();
            int touchY = Brain.Screen.yPosition();
            
            // Display the coordinates on the screen
            Brain.Screen.clearScreen();
            Brain.Screen.setCursor(2, 2);
            Brain.Screen.print("Pressed At:");
            
            Brain.Screen.setCursor(4, 2);
            Brain.Screen.print("X: %d", touchX);
            
            Brain.Screen.setCursor(5, 2);
            Brain.Screen.print("Y: %d", touchY);
        }
        
        // Brief pause to prevent overloading the CPU
        wait(50, msec);
    }
    
}
