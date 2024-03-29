//
// Created by raduc on 07.05.2023.
//

#include <iostream>
#include "Question.h"

Question::~Question() {}

Question::Question(const std::string & question, Characteristics<int> &characteristics) : question(question), characteristics(characteristics) {std::cout << "Question constructor" << std::endl;}

const Characteristics<int> &Question::getCharacteristics() const {
    return characteristics;
}

double Question::getAnswer() const {
    return answer;
}

Question::Question(const std::string &question) : question(question), characteristics(){
    std::cout << "Question constructor" << std::endl;
}


