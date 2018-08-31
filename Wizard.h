//
// Created by Max Donlucas on 8/27/2018.
//

#ifndef SORTINGHAT_WIZARD_H
#define SORTINGHAT_WIZARD_H

#include <string>
#include "House.h"

class Wizard
{
public:
    Wizard();
    Wizard(std::string arg1, int arg2);
    void printWizInfo();
private:
    std::string name;
    int age;
    House their_house;
};

#endif //SORTINGHAT_WIZARD_H
