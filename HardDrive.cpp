#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>

#include "pcStoreLib.h"

#include "Date.h"

#include "HardDrive.h"

extern int ID_ITEMS;

HardDrive::HardDrive()
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
        hd_size = numInput();
        std::cout << "Input price: ";
        price = numInput();

        d.setCurrentDate();
        std::cout
        << "\nID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A Hard Drive " + brand + " " << hd_size << " GB of memory size\n"
        << "of a price: " << price << " USD\nwas added to the store"
        << std::endl;
    }

int HardDrive::getSize()
    {
        return hd_size;
    }

void HardDrive::setSize(int hd_size)
    {
        this->hd_size = hd_size;
    }

void HardDrive::printInfo()
    {
        std::cout
        << "ID of item: " << idComponent << std::endl;
        d.showDate();
        std::cout
        << "A Hard Drive " + brand + " " << hd_size << " GB of memory size\n"
        << "of a price: " << price << " USD"
        << std::endl;
    }
