//
// Created by misak on 19/03/2022.
//

#ifndef MAAKTNIETUIT_PARSEBANEN_H
#define MAAKTNIETUIT_PARSEBANEN_H
#include <string>
#include "parser.h"
#include "Verkeersparser.h"
#include <string>
#include <vector>

class parseBanen {
private:
    std::vector<Baan*>* banen;

public:
    parseBanen();

    virtual ~parseBanen();

    std::vector<Baan*>* getBanen();

    void parseBaantje(TiXmlElement* elem);








};


#endif //MAAKTNIETUIT_PARSEBANEN_H
