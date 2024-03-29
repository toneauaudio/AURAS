/*//////////////////////////////////////////////////////////////
// AURAS
//
// AURAS is a prototype acoustic vehicle alerting system (AVAS) for both hybrid and electric vehicles.  
//
// © Toneau Audio 2024
*///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>
//#include "../include/audioSynthesis.hpp"

// Function Declarations
////////////////////////
void noObjectDetected();
void objectDetect();
void personDetect();
void motionFWRD();
void motionBKWD();
void motionIdle();

// Main Method
//////////////
int main() {

    std::cout << "Detecting... " << std::endl;

    //int objectType;
    // for testing purposes only
    std::vector<int> inputs(2);
    for (int& input : inputs) {
        std::cin >> input;
    }

    for (int objectType : inputs) { // this for loop interacts with inputs for test
        switch (objectType) {
            case 0:
                noObjectDetected();
                break;       
            case 1:
                objectDetect();
                break;
            case 2:
                personDetect();
                break;
            case 3:
                motionFWRD();
                break;
            case 4:
                motionBKWD();
                break;
	        case 5:
                motionIdle();
                break;
        }
    }
}

// Function Definitions
///////////////////////
void noObjectDetected(){
    std::cout << std::endl;
    std::cout << "No Object Detected" << std::endl;   
}

void objectDetect(){
    std::cout << std::endl;
    std::cout << "Object Detected" << std::endl;
}

void personDetect(){
    std::cout << std::endl;
    std::cout << "Person Detected" << std::endl;
}

void motionFWRD(){
    std::cout << std::endl;
    std::cout << "Playing Foward Motion Audio" << std::endl;
    /*
    Code for Audio Implimentation and Velocity Here
    */
}

void motionBKWD(){
    std::cout << std::endl;
    std::cout << "Playing Backward Motion Audio" << std::endl;
    /*
    Code for Audio Implimentation and Velocity Here
    */
}

void motionIdle(){
    std::cout << std::endl;
    std::cout << "Car Idle/Running" << std::endl;
    /*
    Code for Idle/Running Audio 
    */
}
