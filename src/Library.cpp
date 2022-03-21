//
// Created by galaqe on 15/03/22.
//

#include <sstream>
#include "tinyxml_2_6_2/tinyxml/tinyxml.h"
#include "Voertuig.h"
#include "Baan.h"
#include "Verkeerslicht.h"

std::string int_to_string(int integer) {
    std::string new_string;
    std::ostringstream convert;
    convert << integer;
    new_string = convert.str();
    return new_string;
}
void print_voertuig() {
    Voertuig bmw;
    std::cout << "Tijd:" << " " << '\n';
    std::cout << "positie:" << " " << bmw.getPositie() << '\n';
    std::cout << "baan:" << " " << bmw.getBaan() << std::endl;
}

void simple_sim() {

}