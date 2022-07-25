/* Joystick_Input_Test
*  ===================
*
*  Function:               Test the output of the joystick and print the appropriate directional input to the terminal
*  Circuit Schematic No.:  7
*  Required Libraries:     Joystick : https://github.com/ELECXJEL2645/Joystick 
*
*  Authored by:            Andrew Knowles
*  Date:                   2021
*  Version:                1.0
*  Revision Date:          06/2022 
*  MBED Studio Version:    1.4.1
*  MBED OS Version:        6.12.0
*  Board:	                 NUCLEO L476RG */

#include "mbed.h"
#include "Joystick.h" 
 
//                  y     x
Joystick joystick(PC_3, PC_2); //attach and create joystick object
 
int main() {
    joystick.init(); //initialise the joystick
    
    while(1) {
     
        //read the direction of the joystick and print it to terminal
        if(joystick.get_direction() == N){
            printf(" Direction: N\n");

        }else if(joystick.get_direction() == S){
            printf(" Direction: S\n");
        
        }else if(joystick.get_direction() == E){
            printf(" Direction: E\n");

        }else if(joystick.get_direction() == W){
            printf(" Direction: W\n");

        }else if(joystick.get_direction() == NE){
            printf(" Direction: NE\n");

        }else if(joystick.get_direction() == NW){
            printf(" Direction: NW\n");

        }else if(joystick.get_direction() == SE){
            printf(" Direction: SE\n");

        }else if(joystick.get_direction() == SW){
            printf(" Direction: SW\n");
         
        }/*else{
            printf(" Direction: Centre\n");
        }*/
        
        /* by not including a default else statement, the program will only print the direction of the
        *  joystick if it is not equal to 'CENTRE'. This approach helps to create a more user friendly
        *  terminal output*/

        ThisThread::sleep_for(200ms);
    }
}

