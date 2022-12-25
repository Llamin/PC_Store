#ifndef CPU_H
#define CPU_H

#include "Components.h"


class Cpu : public Components
{
    int frequency;
public:
    Cpu();
    int getFrequency();
    void setFrequency(int frequency);
    void printInfo();
};

#endif // CPU_H
