#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>

#include "Components.h"

extern int ID_ITEMS;

std::string Components::getBrand()
    {
        return brand;
    }

void Components::setBrand(std::string brand)
    {
        this->brand = brand;
    }

std::string Components::getModel()
    {
        return model;
    }

void Components::setModel(std::string model)
    {
        this->model = model;
    }

int Components::getPrice()
    {
        return price;
    }

void Components::setPrice(int price)
    {
        this->price = price;
    }

int Components::getID()
    {
        return idComponent;
    }

void Components::setID(int idCompontent)
    {
        this->idComponent = idCompontent;
    }
