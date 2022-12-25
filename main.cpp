#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <limits>
#include <fstream>

#include "Gpu.h"
#include "Cpu.h"
#include "HardDrive.h"
#include "Ram.h"

#include "Order.h"

#include "Items.h"
#include "Orders.h"

#include "pcStoreLib.h"

int ID_ORDERS = 0;
int ID_ITEMS = 0;

std::string itemsFileName = "Items.txt";
std::string ordersFileName = "Orders.txt";


int main()
{
    int opt;
    Orders ord;
    Items all;

    std::fstream itemsFileStream;
    std::fstream ordersFileStream;

    itemsFileStream.open(itemsFileName);
    ordersFileStream.open(ordersFileName);

    std::cout << "Welcome!" << std::endl;
    do
    {

        std::cout << "\t\t\nMenu\n"
                  << "1. Add item to the storage\n"
                  << "2. Remove item from the storage\n"
                  << "3. View all items\n"
                  << "4. Place an order\n"
                  << "5. View all orders\n"
                  << "0. Exit\n"
                  << "Your option: ";

        opt = numInput();

        switch(opt)
        {
        case 1:
            {
                all.view_all();
                all.add_item();

            }
        break;

        case 2:
            {
                all.view_all();
                all.delete_item();
            }
        break;

        case 3:
            {
                all.view_all();
            }
        break;


        case 4:
            {
                int option, check, status;
                Order temp;
                do
                {
                    do
                    {
                        temp.setDateOfOrder();
                        temp.show_all();

                        check = 1;
                        std::cout << "\nChoose your action\n"
                                  << "1 - Add item\n"
                                  << "2 - Remove item\n"
                                  << "3 - View all items\n"
                                  << "0 - Exit\n"
                                  << "Choose your option: ";

                        option = numInput();

                        if (option < 0 || option > 4)
                        {
                            std::cout << "Unknown option. Try again: ";
                            option = numInput();
                            check = 0;
                        }
                    }
                    while(!check);

                    switch(option)
                    {
                    case 1:
                    {
                        status += temp.add_item(all);

                        break;
                    }
                    case 2:
                    {
                        status -= temp.delete_item();
                        break;
                    }
                    case 3:
                    {
                        temp.show_all();
                        break;
                    }
                    case 0:
                    {
                        if(status)
                        {
                            temp.setDateOfOrder();
                            ord.addOrder(temp);
                        }
                        break;
                    }
                    default:
                        std::cout << "Unknown option.\n" << std::endl;
                        break;
                    }
                }
                while(option);

            }
        break;

        case 5:
            {
                ord.showOrders();
            }
        break;

        case 0:

        break;

        default:
            std::cout << "Unknown option. Please, try again." << std::endl;
        break;

        }
    }
    while(opt);

    itemsFileStream.close();
    ordersFileStream.close();

    return 0;
}

