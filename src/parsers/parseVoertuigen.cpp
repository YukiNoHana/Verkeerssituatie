//
// Created by misak on 20/03/2022.
//

#include "parseVoertuigen.h"

parseVoertuigen::parseVoertuigen() {}

parseVoertuigen::~parseVoertuigen() {

}

std::vector<Voertuig*>* parseVoertuigen::getVoertuigen() {
    return voertuigen;
}

void parseVoertuigen::parseVoertuigje(TiXmlElement* elem){
    Voertuig* vroomvroom = new Voertuig;

    for (TiXmlElement *e = elem->FirstChildElement(); e != NULL; e = e->NextSiblingElement()) {
        std::string elemName = elem->Value();
        if (elemName == "VERKEERSLICHT") {
            std::string tempA = elem->GetText();
            for (unsigned int i = 1; i < voertuigen->size(); i++) {
                voertuigen->push_back(vroomvroom);
            }
        }
    }
}