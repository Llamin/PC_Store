#ifndef RAM_H
#define RAM_H

#include "Components.h"

class Ram : public Components
{
    int ram_size;
    int frequency;
public:
    Ram();
    Ram(const Ram& c);
    void setFrequency(int frequency);
    int getFrequency();
    void setSize(int ram_size);
    int getSize();
    void printInfo();
};

#endif // RAM_H
