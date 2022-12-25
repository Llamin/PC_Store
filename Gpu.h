#ifndef GPU_H
#define GPU_H

#include "Components.h"



class Gpu : public Components
{
    int gpu_size;
public:
    Gpu();
    Gpu(const Gpu& c);
    void setSize(int gpu_size);
    int getSize();
    void printInfo();
};

#endif // GPU_H
