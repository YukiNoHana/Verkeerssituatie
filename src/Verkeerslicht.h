//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VERKEERSLICHT_H
#define UNTITLED19_VERKEERSLICHT_H


class Verkeerslicht{
private:
    std::string baan;
    int positie;
    int cyclus;
public:
    Verkeerslicht();
    int getPositie() const;
    void setPositie(int pos);
    int getCyclus() const;
    void setCyclus(int cycle);

    const std::string &getBaan() const;

    void setBaan(const std::string &baan);


    virtual ~Verkeerslicht();

};


#endif //UNTITLED19_VERKEERSLICHT_H
