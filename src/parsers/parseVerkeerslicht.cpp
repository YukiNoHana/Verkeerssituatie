//
// Created by misak on 20/03/2022.
//

#include "parseVerkeerslicht.h"

parseVerkeerslicht::parseVerkeerslicht() {}

parseVerkeerslicht::~parseVerkeerslicht() {

}

std::vector<Verkeerslicht*>* parseVerkeerslicht::getVerkeerslichten() {
    return verkeerslichten;
}

void parseVerkeerslicht::parseVerkeerslichtjes(TiXmlElement* elem){
    Verkeerslicht* trafficlight = new Verkeerslicht;

    for (TiXmlElement *e = elem->FirstChildElement(); e != NULL; e = e->NextSiblingElement()) {
        std::string elemName = elem->Value();
        if (elemName == "VERKEERSLICHT") {
            std::string tempA = elem->GetText();
            for (int i = 1; i < verkeerslichten->size(); i++) {
                verkeerslichten->push_back(trafficlight);
            }
        }
    }
}
