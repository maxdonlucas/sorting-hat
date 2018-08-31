//
// Created by Max Donlucas on 8/27/2018.
//

#include <iostream>
#include "Wizard.h"

Wizard::Wizard() {
    name = "unknown";
    age = 0;
}
Wizard::Wizard(std::string arg1, int arg2) {
    name = arg1;
    age = arg2;
}
void Wizard::printWizInfo() {
    std::cout<<"~~Wizard's Identification~~"<<std::endl;
    std::cout<<"Name:  "<<this->name<<std::endl;
    std::cout<<"Age:   "<<this->age<<std::endl;
    std::cout<<"House: ";this->their_house.printHouse();
}