//
// Created by Max Donlucas on 8/27/2018.
//

#ifndef SORTINGHAT_HOUSE_H
#define SORTINGHAT_HOUSE_H

//TODO: once you switch over completely to HogwartsHouse delete this
//struct Selection {
//    int gryffindor;
//    int slytherin;
//    int ravenclaw;
//    int hufflepuff;
//};

struct HogwartsHouse {
    std::string houseName;
    int housePoints;
};

class House {
public:
    //only default constructor
    House();
    //compares and prints out the house with the most points
    void printHouse();
    //adds one point to whichever house quality the user answers
    void pointGryff();
    void pointSlyth();
    void pointRaven();
    void pointHuff();
private:
    //Selection house_sel;
    HogwartsHouse gryffindor;
    HogwartsHouse slytherin;
    HogwartsHouse ravenclaw;
    HogwartsHouse hufflepuff;
};


#endif //SORTINGHAT_HOUSE_H
