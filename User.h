//
// Created by raduc on 07.05.2023.
//

#ifndef OOP_USER_H
#define OOP_USER_H

#include "Characteristics.h"
#include "Point.h"


class User {
    Point location;
    Characteristics chr;
public:
    void updateCharacteristics(const Characteristics &extra, int multiplier);
    Point getLocation();
    const Characteristics & getCharacteristics();

    void updateLocation(double lati, double longi);
};


#endif //OOP_USER_H
