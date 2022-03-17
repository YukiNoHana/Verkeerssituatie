//
// Created by galaqe on 15/03/22.
//

#include "Verkeerssituatieparser.h"

Verkeerssituatieparser::Verkeerssituatieparser() {}

Verkeerssituatieparser::~Verkeerssituatieparser() {}

std::string readElement(TiXmlElement* elem, const char* attr){
    TiXmlElement* e = elem->FirstChildElement(attr);
    TiXmlNode* node = e->FirstChild();
    TiXmlText* text = node->ToText();
    return text->Value();
}

Voertuig* Verkeerssituatieparser::parseVoertuig(TiXmlElement* elem){
    std::string baan = readElement(elem, "BAAN");
    voertuig->set
}
