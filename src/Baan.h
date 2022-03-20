//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_BAAN_H
#define UNTITLED19_BAAN_H

#include <iostream>
#include <string>



class Baan {
private:
    std::string naam;
    int lengte;
public:
    Baan();
    const std::string& getNaam() const;
    void setNaam(const std::string& lol);
    int getLengte() const;
    void setLengte(int lol2);

    std::string getInfo();


    virtual ~Baan();

};


#endif //UNTITLED19_BAAN_H
