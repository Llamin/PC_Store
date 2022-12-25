#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>

#include "pcStoreLib.h"

#include "Date.h"

#include "Cpu.h"

extern int ID_ITEMS;

Cpu::Cpu()
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
        std::cout << "Input frequency: ";
        frequency = numInput();
        std::cout << "Input price: ";
        price = numInput();

        d.setCurrentDate();
        std::cout
        << "\nID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A processor " + brand + " " + model + " " << frequency << " MHz of frequency\n"
        << "of a price: " << price << " USD\nwas added to the store"
        << std::endl;
    }

Cpu::Cpu(const Cpu& c)
{
    model = c.model;
    brand = c.brand;
    price = c.price;
    d = c.d;
    idComponent = c.idComponent;
    frequency = c.frequency;
}

int Cpu::getFrequency()
    {
        return frequency;
    }

void Cpu::setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

void Cpu::printInfo()
    {
        std::cout
        << "ID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A GPU " + brand + " " + model + " " << frequency << " MHz of frequency\n"
        << "of a price: " << price << " USD"
        << std::endl;
    }
