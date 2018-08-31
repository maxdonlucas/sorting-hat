//
// Created by Max Donlucas on 8/27/2018.
//

#include <iostream>
#include <algorithm>
#include "House.h"

House::House() {
    house_sel.gryffindor = 0;
    house_sel.slytherin = 0;
    house_sel.ravenclaw = 0;
    house_sel.hufflepuff = 0;
}
void House::printHouse() {
    if(this->gryffindor)
//    if(this->house_sel.gryffindor && this->house_sel.slytherin &&
//        this->house_sel.ravenclaw && this->house_sel.hufflepuff)
//    {
//        std::cout<<"House has not been determined..."<<std::endl;
//    }
//    else if(this->house_sel.gryffindor >
//        (std::max(this->house_sel.slytherin,
//                std::max(this->house_sel.ravenclaw,this->house_sel.hufflepuff))))
//    {
//        std::cout<<"Gryffindor!!!"<<std::endl;
//    }
//    else if(this->house_sel.slytherin >
//        (std::max(this->house_sel.ravenclaw,this->house_sel.hufflepuff)))
//    {
//        std::cout<<"Slytherin!!!"<<std::endl;
//    }
//    else if(this->house_sel.ravenclaw > this->house_sel.hufflepuff)
//    {
//        std::cout<<"Ravenclaw!!!"<<std::endl;
//    }
//    else
//    {
//        std::cout<<"Hufflepuff!!!"<<std::endl;
//    }
}
void House::pointGryff() {
    this->gryffindor.housePoints++;
    //house_sel.gryffindor++;
}
void House::pointSlyth() {
    this->slytherin.housePoints++;
    //house_sel.slytherin++;
}
void House::pointRaven() {
    this->ravenclaw.housePoints++;
    //house_sel.ravenclaw++;
}
void House::pointHuff() {
    this->hufflepuff.housePoints++;
    //house_sel.hufflepuff++;
}