//
// Created by misak on 10/03/2022.
//

#include "Verkeerslicht.h"

Verkeerslicht::Verkeerslicht() {}

Verkeerslicht::~Verkeerslicht() {

}

int Verkeerslicht::getPositie() const {
    return positie;
}
void Verkeerslicht::setPositie(int pos) {
    positie = pos;
}
int Verkeerslicht::getCyclus() const {
    return cyclus;
}
void Verkeerslicht::setCyclus(int cycle) {
    cyclus = cycle;
}

const std::__cxx11::basic_string<char> &Verkeerslicht::getBaan() const {
    return baan;
}

void Verkeerslicht::setBaan(const std::__cxx11::basic_string<char> &baan) {
    Verkeerslicht::baan = baan;
}

std::string Verkeerslicht::getInfo() {
    std::string lichtje;
    lichtje += getBaan();
    lichtje += getCyclus();
    lichtje += getPositie();
    return lichtje;
}
