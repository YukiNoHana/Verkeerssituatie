//
// Created by galaqe on 15/03/22.
//

#ifndef TTT_PARSER_H
#define TTT_PARSER_H

#include "../tinyxml_2_6_2/tinyxml/tinyxml.h"
#include <string>
#include <iostream>

class parser {
private:
    TiXmlElement *root;
    TiXmlDocument Doc;


public:
    parser();


    TiXmlElement *getElem() const;

    void setElem(TiXmlElement *element);

    parser(const TiXmlDocument &doc);

    virtual ~parser();
    bool loadFile(std::string lol);

    parser(TiXmlElement *elem);

    const TiXmlDocument &getDoc() const;

    void setDoc(const TiXmlDocument &doc);

};


#endif //TTT_PARSER_H
