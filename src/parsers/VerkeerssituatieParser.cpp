//
// Created by misak on 19/03/2022.
//

#include "VerkeerssituatieParser.h"

VerkeerssituatieParser::VerkeerssituatieParser() {}

VerkeerssituatieParser::~VerkeerssituatieParser() {
}

std::vector<Baan*>* VerkeerssituatieParser::getBanen() {
    return banen;
}

std::vector<Voertuig*>* VerkeerssituatieParser::getVoertuigen() {
    return voertuigen;
}

std::vector<Verkeerslicht*>* VerkeerssituatieParser::getVerkeerslichten() {
    return verkeerslichten;
}

std::vector<Baan*>* VerkeerssituatieParser::parseBanen(TiXmlElement* elem) {
    for (TiXmlElement *e = elem->FirstChildElement(); e != NULL; e = e->NextSiblingElement()) {
        Verkeersparser* bn;
        Baan* road = bn->parseBaan();
        if(road->isCon)
    }
}

