//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VOERTUIG_H
#define UNTITLED19_VOERTUIG_H
#include <iostream>
#include "Baan.h"


class Voertuig {
private:
    int positie;
public:
    Voertuig();
    int getPositie() const;
    void setPositie(int pos);

    virtual ~Voertuig();

    const std::string voiture() const;
};


#endif //UNTITLED19_VOERTUIG_H
