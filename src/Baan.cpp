//
// Created by misak on 10/03/2022.
//

#include "Baan.h"

Baan::Baan() {}

Baan::~Baan() {

}
const std::string& Baan::getNaam() const {
    return naam;
}


void Baan::setNaam(const std::string& lol) {
    naam = lol;
}

int Baan::getLengte() const {
    return lengte;
}

void Baan::setLengte(int lol2) {
    lengte = lol2;
}

std::string Baan::getInfo() {
    std::string roady;
    roady += "baan:" + getNaam();
    roady += "lengte:";
    roady += getLengte();
    return roady;
}

