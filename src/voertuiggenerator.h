//
// Created by misak on 10/03/2022.
//

#ifndef UNTITLED19_VOERTUIGGENERATOR_H
#define UNTITLED19_VOERTUIGGENERATOR_H


class voertuiggenerator {
private:
    int frequentie;
public:
    voertuiggenerator();
    int getFrequentie() const;
    void setFrequentie(std::int freq);

    virtual ~voertuiggenerator();

};


#endif //UNTITLED19_VOERTUIGGENERATOR_H
