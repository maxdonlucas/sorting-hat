#include <iostream>
#include "Wizard.h"

void SortingQuestion()
{
    std::cout<<"If you were playing a game, what would be "
               "the most important thing for you?"<<std::endl;
    std::cout<<"A. That everyone plays by the rules\n"
               "B. That whatever happens, you win\n"
               "C. That your team follows the gameplan\n"
               "D. That everyone ends up having fun\n"<<std::endl;
}
void SortingHat(Wizard a) {
    //TODO: ask question(s), then sort
    SortingQuestion();
    char answer;
    std::cin>>answer;
    while(1)
    {
        if((answer>='A'&&answer<='D')||(answer>='a'&&answer<='d'))
        {
            //continue
            break;
        }
        else
        {
            std::cout<<"Please pick between the options given..."<<std::endl;
            SortingQuestion();
            std::cin>>answer;
        }
    }
    if(answer == 'A' || answer == 'a')
    {
        //TODO: point for gryffindor

    }
    else if(answer == 'B' || answer == 'b')
    {
        //TODO: point for slytherin
    }
    else if(answer == 'C' || answer == 'c')
    {
        //TODO: point for ravenclaw
    }
    else
    {
        //TODO: point for hufflepuff
    }
}

int main() {

    return 0;
}