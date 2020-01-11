#include "figure.h"
#include "figures.h"
#include <stdio.h>
#include <vector>
#include <iostream>

//Функция вывода главного меню
void printMenu()
{
    std::cout << "\nCommands:" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "1. Add figure" << std::endl;
    std::cout << "2. Function call for all elements" << std::endl;
    std::cout << "3. Delete figure by index" << std::endl;
}

int main()
{
    Figure* s;
    std::vector<Figure*> v1;
    while (true)
    {
        printMenu();
        std::cout << "Input number of chosen function: ";
        int k;
        std::cin >> k;
        std::vector<Figure*> next;//создание динамического массива фигур с помощью std::vector
        switch (k)
        {
        case 0:
            //Удаление всех фигур из массива
            for (size_t i = 0; i < v1.size(); i++)
                delete v1[i];
            return 0;
        case 1:
            std::cout << "1. Input the pentagon" << std::endl;
            std::cout << "2. Input the hexagon" << std::endl;
            std::cout << "3. Input the octagon" << std::endl;
            std::cout << "Input the number of chosen figure: ";
            int a;
            bool flag;
            flag = true;
            std::cin >> a;
            switch (a)
            {
                case 1:
                    std::cout << "Input coordinates of vertexes of pentagon: \n";
                    s = new Pentagon(std::cin);
                    break;
                case 2:
                    std::cout << "Input coordinates of vertexes of hexagon: \n";
                    s = new Hexagon(std::cin);
                    break;
                case 3:
                    std::cout << "Input coordinates of vertexes of octagon: \n";
                    s = new Octagon(std::cin);
                    break;
                default:
                    std::cout << "No figure with such number" << std::endl;
                    flag = false;
                    break;
            }
            if (flag)
                v1.push_back(s);//добавление элемента в массив
            break;

        case 2:
            if (v1.size() == 0)
            {
                std::cout << "There are no elements in array\n";
                break;
            }
            std::cout << "1. Count the area of figures" << std::endl;
            std::cout << "2. Count the center of figures" << std::endl;
            std::cout << "3. Print coordinates of figures" << std::endl;
            std::cout << "Input the number of chosen function: ";
            int b;
            std::cin >> b;
            switch (b) {
            case 1:
                //Вывод площади всех фигур
                std::cout << "Area of figure:" << std::endl;
                for (int i = 0; i < v1.size(); i++)
                {
                    std::cout << "The area of " << i+1 << " figure.\n";
                    std::cout << v1[i]->calculateArea() << std::endl;
                }
                break;

            case 2:
                //Вывод координат центров всех фигур
                std::cout << "The center of figure:" << std::endl;
                for (int i = 0; i < v1.size(); i++)
                {
                    std::cout << "The center of " << i+1 << " figure.\n";
                    std::cout << v1[i]->calculateCenter() << std::endl;
                }
                break;

            case 3:
                //Вывод координат x,y всех фигур
                for (int i = 0; i < v1.size(); i++)
                {
                    std::cout << "The coordinates of " << i+1 << " figure.\n";
                    v1[i]->printVertex(std::cout);
                    std::cout << std::endl;
                }
                break;

            default:
                std::cout << "No function with such number" << std::endl;
                break;
            }
            break;

        case 3:
            std::cout << "Input the index of figure for deleting: \n";
            size_t id;
            std::cin >> id;
            if (id < 0 || id >= v1.size())
            {
                std::cout << "The index is out of bounds" << std::endl;
                break;
            }
            else
            {
                delete v1[id];
                v1.erase(v1.begin() + id);
                break;
            }
        default:
            std::cout << "No function with such number.\n";
            break;
        }
    }
}

