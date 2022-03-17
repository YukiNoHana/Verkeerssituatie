//
// Created by galaqe on 15/03/22.
//

#include "parser.h"


parser::~parser() {}

bool parser::loadFile(std::string lol) {
    if (!Doc.LoadFile("Verkeerssituatie.xml")) {
        std::cerr << Doc.ErrorDesc() << std::endl;
        return false;
    }

    root = Doc.FirstChildElement();
    if (root == NULL) {
        Doc.Clear();
        std::cerr << Doc.ErrorDesc() << std::endl;
        return false;
    }

    //TiXmlElement *elem = root->FirstChildElement(); elem
    for (TiXmlElement *elem = root->FirstChildElement(); elem != NULL;
        elem = elem->NextSiblingElement()){
        std::string elemName = elem->Value();
    }
    return true;
}

parser::parser(const TiXmlDocument &doc) : Doc(doc) {}


const TiXmlDocument &parser::getDoc() const {
    return Doc;
}

void parser::setDoc(const TiXmlDocument &doc) {
    Doc = doc;
}

parser::parser(TiXmlElement *elem) : root(elem) {}

TiXmlElement *parser::getElem() const {
    return root;
}

void parser::setElem(TiXmlElement *element) {
    parser::root = element;
}

parser::parser() {}
