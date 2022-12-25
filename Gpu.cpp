#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>

#include "pcStoreLib.h"

#include "Date.h"

#include "Gpu.h"

extern int ID_ITEMS;

Gpu::Gpu()
    {
        idComponent = ++ID_ITEMS;

        std::cout << "Input name of brand: ";
        std::cin >> brand;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input name of model: ";
        std::cin >> model;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input size: ";
        gpu_size = numInput();
        std::cout << "Input price: ";
        price = numInput();

        d.setCurrentDate();
        std::cout
        << "\nID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A GPU " + brand + " " + model + " " << gpu_size << " GB of memory size\n"
        << "of a price: " << price << " USD\nwas added to the store"
        << std::endl;
    }

Gpu::Gpu(const Gpu& c)
{
    model = c.model;
    brand = c.brand;
    price = c.price;
    d = c.d;
    idComponent = c.idComponent;
    gpu_size = c.gpu_size;
}

void Gpu::setSize(int gpu_size)
    {
        this->gpu_size = gpu_size;
    }

int Gpu::getSize()
    {
        return gpu_size;
    }

void Gpu::printInfo()
    {
        std::cout
        << "ID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A GPU " + brand + " " + model + " " << gpu_size << " GB of memory size\n"
        << "of a price: " << price << " USD"
        << std::endl;
    }
