//
// Created by raduc on 07.05.2023.
//

#include <iostream>
#include "tfQuestion.h"
#include "Button_factory.h"

tfQuestion::tfQuestion(const std::string & question, Characteristics<int> &characteristics) : Question(question, characteristics),
    yesButton( Button_factory::yButton()),
    noButton(Button_factory::nButton()) {
    answer = 3;
}



void tfQuestion::showQuestion(sf::RenderWindow &window) {
    sf::Font font;
    font.loadFromFile("fonts/arial.ttf");
    sf::Text text;
    text.setFont(font);
    text.setString(question);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Bold);
    text.setPosition(10, 10);
    window.draw(text);
    yesButton.draw(window);
    noButton.draw(window);
}

std::string tfQuestion::handleEvent(sf::Event event, sf::RenderWindow &window) {
    std::string s = yesButton.handleEvent(event, window);
    if (!s.empty()) {
        return s;
    }
    s = noButton.handleEvent(event, window);
    return s;
}
