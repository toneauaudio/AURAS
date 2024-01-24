/*//////////////////////////////////////////////////////////////
// AURAS
//
// AURAS is a prototype acoustic vehicle alerting system (AVAS) for both hybrid and electric vehicles.  
//
// © Toneau Audio 2024
*///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>

//using namespace std;

// Function Declarations
////////////////////////
void noObjectDetected();
void objectDetect();
void personDetect();

// Main Method
//////////////
int main() {

    std::cout << "Detecting... " << std::endl;
    
    int objectType;
    std::cin >> objectType;
    switch (objectType) {
        case 0:
            objectDetect();
            break;
        case 1:
            personDetect();
            break;
        default:
            noObjectDetected();
    }

}

// Function Definitions
///////////////////////
void noObjectDetected(){
    std::cout << std::endl;
    std::cout << "No Object Detected" << std::endl;
    std::cout << std::endl;   
}

void objectDetect(){
    std::cout << std::endl;
    std::cout << "Object Detected" << std::endl;
    std::cout << std::endl;
}

void personDetect(){
    std::cout << std::endl;
    std::cout << "Person Detected" << std::endl;
    std::cout << std::endl;
}