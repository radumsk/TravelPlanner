//
// Created by raduc on 19.04.2023.
//

#ifndef OOP_CHARACTERISTICS_H
#define OOP_CHARACTERISTICS_H

#include <array>
#include <iostream>
#include "Rating.h"

template <class T = int>
class Characteristics {
private:
    std::array<Rating, 4> characteristics;
    T tier;
public:
    Characteristics() = default;
    Characteristics(int a, int b, int c, int d);
    Characteristics(int a, int b, int c, int d, T t);

    float getMatching(const Characteristics &c);

    void updateCharacteristics(const Characteristics &extra, int multiplier);
    friend std::ostream & operator << (std::ostream &out, const Characteristics &c);
};


#endif //OOP_CHARACTERISTICS_H

