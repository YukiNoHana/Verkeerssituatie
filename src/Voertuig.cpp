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

const std::string Voertuig::voiture() const{
    Baan road;
    std::string voertuigje;
    voertuigje += road.getNaam();
    return voertuigje;
}