//
// Created by galaqe on 15/03/22.
//

#include "Verkeersparser.h"

Verkeersparser::Verkeersparser() {}

Verkeersparser::~Verkeersparser() {}

std::string readElement(TiXmlElement* elem, const char* attr){
    TiXmlElement* e = elem->FirstChildElement(attr);
    TiXmlNode* node = e->FirstChild();
    TiXmlText* text = node->ToText();
    return text->Value();
}

Voertuig* Verkeersparser::parseVoertuig(TiXmlElement* elem){
    std::string vehicle = readElement(elem, "VOERTUIG");
    voertuig->setPositie(atoi(vehicle.c_str()));
    voertuig->setBaan(vehicle);
    return voertuig;
}

Voertuig* Verkeersparser::getVoertuig() {
    return voertuig;
}

Baan* Verkeersparser::parseBaan(TiXmlElement* elem){
    std::string road = readElement(elem, "BAAN");
    baan->setNaam(road);
    baan->setLengte(atoi(road.c_str()));
    return baan;
}

Baan* Verkeersparser::getBaan() {
    return baan;
}

Verkeerslicht* Verkeersparser::parseVerkeerslicht(TiXmlElement* elem){
    std::string trafficlights = readElement(elem, "VERKEERSSLICHT");
    verkeerslicht->setBaan(trafficlights);
    verkeerslicht->setPositie(atoi(trafficlights.c_str()));
    verkeerslicht->setCyclus(atoi(trafficlights.c_str()));
    return verkeerslicht;
}

Verkeerslicht* Verkeersparser::getVerkeerslicht() {
    return verkeerslicht;
}