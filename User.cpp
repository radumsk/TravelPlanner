//
// Created by raduc on 07.05.2023.
//

#include "User.h"

Point User::getLocation() {
    return location;
}

void User::updateLocation(double lati, double longi) {
    location = Point(lati, longi);
}

void User::updateCharacteristics(const Characteristics &extra, int multiplier) {
    this->chr.updateCharacteristics(extra, multiplier);
}

const Characteristics & User::getCharacteristics() {
    return chr;
}

void User::addAnswer(double answer) {
    answers.push_back(answer);
}

const std::vector<double> &User::getAnswers() const {
    return answers;
}
