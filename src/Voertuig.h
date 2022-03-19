//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VOERTUIG_H
#define UNTITLED19_VOERTUIG_H
#include <iostream>


class Voertuig {
private:
    std::string baan;
    int positie;
public:
    Voertuig();
    int getPositie() const;
    void setPositie(int pos);

    const std::string &getBaan() const;

    void setBaan(const std::string &baan);

    virtual ~Voertuig();

};


#endif //UNTITLED19_VOERTUIG_H
