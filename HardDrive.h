#ifndef HARDDRIVE_H
#define HARDDRIVE_H

#include "Components.h"

class HardDrive : public Components
{
    int hd_size;
public:
    HardDrive();
    HardDrive(const HardDrive& c);
    int getSize();
    void setSize(int hd_size);
    void printInfo();
};

#endif // HARDDRIVE_H
