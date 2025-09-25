#include "turnstate.hpp"
#include <cstdint>
#include <iostream>
#include <cassert>

void Turnstate::processEvents() {
    if (m_state == START) return;
    std::string command;
    std::getline(std::cin, command);
    
    if (command == "coin" or command == "c") {
        m_input = COIN;
    }
    else if (command == "push" or command == "p") {
        m_input = PUSH;
    }
    else if (command == "end" or "e") {
        m_input = END;
    }
    else if (command == "off") {
        m_input = OFF;
    }
    else if (command == "on") {
        m_input = ON;
    }

    return;
}

void Turnstate::update() {
    if (m_state == START) {
        m_state = LOCKED;
        return;
    }
    if (m_state == LOCKED) {
        if (m_input == COIN) {
            m_state = UNLOCKED;
            m_coins++;
            return;
        }
        if (m_input == OFF) {
            m_state = OUTOFORDER;
            return;
        }
    }
    if (m_state == UNLOCKED) {
        if (m_input == PUSH) {
            m_state = LOCKED;
            return;
        }
        if (m_input == OFF) {
            m_state = OUTOFORDER;
            return;
        }
        if (m_input == COIN) {
            m_coins++;
            return;
        }
    }
    if (m_state == OUTOFORDER) {
        if (m_input == ON) {
            m_state = LOCKED;
            return;
        }
        if (m_input == END) {
            m_state = STOP;
            return;
        }
    }
}

void Turnstate::render() {
    if (m_state == OUTOFORDER) {
        std::cout << "\nStatus: [OUT OF ORDER]\n";
        std::cout << "Which action (on, end)? " << std::flush;
        return;
    }
    if (m_state == LOCKED) {
        std::cout << "\nStatus: [LOCKED]\n";
        std::cout << "Which action (coin, push, off)? " << std::flush;
        return;
    }
    if (m_state == UNLOCKED) {
        std::cout << "\nStatus: [UNLOCKED]\n";
        std::cout << "Which action (push, coin, off)? " << std::flush;
        return;
    }
    if (m_state == START) {
        assert("Start cannot happen" && false);
    }
}