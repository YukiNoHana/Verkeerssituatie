//
// Created by misak on 10/03/2022.
//

#include "Voertuig.h"
#include <iostream>

Voertuig::Voertuig() {}

Voertuig::~Voertuig() {

}

int Voertuig::getPositie() const {
    return positie;
}
void Voertuig::setPositie(int pos) {
    positie = pos;
}

const std::string &Voertuig::getBaan() const {
    return baan;
}

void Voertuig::setBaan(const std::string &baan) {
    Voertuig::baan = baan;
}

//Gebruik maken van cout om te printen, je kan een integer ook printen