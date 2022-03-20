//
// Created by galaqe on 15/03/22.
//

#ifndef TTT_VERKEERSSITUATIEPARSER_H
#define TTT_VERKEERSSITUATIEPARSER_H

#include "parser.h"
#include "../tinyxml_2_6_2/tinyxml/tinyxml.h"
#include <string>
#include "../Baan.h"
#include "../Verkeerslicht.h"
#include "../Voertuig.h"


class Verkeersparser:public parser {
private:
    std::string readElement(TiXmlElement *elem, const char* attr);
    Voertuig* voertuig;
    Baan* baan;
    Verkeerslicht* verkeerslicht;

public:
    Verkeersparser();
    virtual ~Verkeersparser();

    Voertuig* parseVoertuig(TiXmlElement *elem);

    Voertuig* getVoertuig();

    Baan* parseBaan(TiXmlElement* elem);

    Baan* getBaan();

    Verkeerslicht* parseVerkeerslicht(TiXmlElement* elem);

    Verkeerslicht* getVerkeerslicht();
};


#endif //TTT_VERKEERSSITUATIEPARSER_H
