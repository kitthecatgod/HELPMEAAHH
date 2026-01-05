#include <SFML/Graphics.hpp>
#include <iostream>
// Aishidemasu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

import Beginning;
import Good_ending;
import Bad_ending;
import Neutral_ending;
import Stats;


int main() {

    Beginning();

    if (Affection >= 50) {
        Good_ending();
    }
    else if (Hate >= 50) {
        Bad_ending();
    }
    else if (Neutral >= 50) {
        Neutral_ending();
    }
}