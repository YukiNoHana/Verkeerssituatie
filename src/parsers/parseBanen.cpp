//
// Created by misak on 19/03/2022.
//

#include "parseBanen.h"

parseBanen::parseBanen() {}

parseBanen::~parseBanen() {
}

std::vector<Baan*>* parseBanen::getBanen() {
    return banen;
}

void parseBanen::parseBaantje(TiXmlElement* elem) {
    Baan* road = new Baan();

    for (TiXmlElement *e = elem->FirstChildElement(); e != NULL; e = e->NextSiblingElement()) {
        std::string elemName = elem->Value();
        if (elemName == "BAAN") {
            std::string tempA = elem->GetText();
            for (unsigned int i = 1; i < banen->size(); i++) {
                banen->push_back(road);
            }
        }
    }
}