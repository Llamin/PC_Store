#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>

#include "pcStoreLib.h"

#include "Date.h"

#include "Ram.h"

extern int ID_ITEMS;

Ram::Ram()
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
        std::cout << "Input size: ";
        ram_size = numInput();
        std::cout << "Input price: ";
        price = numInput();

        d.setCurrentDate();
        std::cout
        << "\nID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A RAM " + brand + " " + model + " " << frequency << " MHz of frequency and " << ram_size << " GB of memory size\n"
        << "of a price: " << price << " USD\nwas added to the store"
        << std::endl;
    }

Ram::Ram(const Ram& c)
{
    model = c.model;
    brand = c.brand;
    price = c.price;
    d = c.d;
    idComponent = c.idComponent;
    ram_size = c.ram_size;
    frequency = c.frequency;
}

void Ram::setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

int Ram::getFrequency()
    {
        return frequency;
    }

void Ram::setSize(int ram_size)
    {
        this->ram_size = ram_size;
    }

int Ram::getSize()
    {
        return ram_size;
    }

void Ram::printInfo()
    {
        std::cout
        << "ID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A RAM " + brand + " " + model + " " << frequency << " MHz of frequency and " << ram_size << " GB of memory size\n"
        << "of a price: " << price << " USD"
        << std::endl;
    }
