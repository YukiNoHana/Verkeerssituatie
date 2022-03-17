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