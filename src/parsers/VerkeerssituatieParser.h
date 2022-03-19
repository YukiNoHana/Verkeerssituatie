//
// Created by misak on 19/03/2022.
//

#ifndef MAAKTNIETUIT_VERKEERSSITUATIEPARSER_H
#define MAAKTNIETUIT_VERKEERSSITUATIEPARSER_H
#include <string>
#include "parser.h"
#include "Verkeersparser.h"
#include <string>
#include <vector>



class VerkeerssituatieParser {
private:
    std::vector<Baan*>* banen;
    std::vector<Voertuig*>* voertuigen;
    std::vector<Verkeerslicht*>* verkeerslichten;
public:
    VerkeerssituatieParser();

    virtual ~VerkeerssituatieParser();

    std::vector<Baan*>* getBanen();

    std::vector<Baan*> * parseBanen(TiXmlElement* elem);

    std::vector<Voertuig*>* getVoertuigen();

    std::vector<Voertuig*>* parseVoertuigen(TiXmlElement* elem);

    std::vector<Verkeerslicht*>* getVerkeerslichten();

    std::vector<Verkeerslicht*>* parseVerkeerslichten(TiXmlElement* elem);
};


#endif //MAAKTNIETUIT_VERKEERSSITUATIEPARSER_H
