//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VERKEERSLICHT_H
#define UNTITLED19_VERKEERSLICHT_H


class Baan;
class Verkeerslicht{
private:
    int positie;
    int cyclus;
public:
    Verkeerslicht();
    int getPositie() const;
    void setPositie(int pos);
    int getCyclus() const;
    void setCyclus(int cycle);


    virtual ~Verkeerslicht();

};


#endif //UNTITLED19_VERKEERSLICHT_H
