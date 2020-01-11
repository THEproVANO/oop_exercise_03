#include"figures.h"
#include<cmath>

//Методы классов
Pentagon::Pentagon() {};//Конструктор класса

Pentagon::Pentagon(std::istream& is) //Ввод вершин из потока
{
    Vertex l;
    for (int i = 0; i < 5; i++)
    {
        is >> l;
        v[i] = l;
    }
};

double Pentagon::calculateArea() const//Метод вычисления площади фигуры
{
    double Area = 0;
    for (int i = 0; i < 5; i++)
        Area += (v[i].coordinates.first) * (v[(i + 1)%5].coordinates.second)
                - (v[(i + 1)%5].coordinates.first)*(v[i].coordinates.second);
    Area *= 0.5;
    return abs(Area);
};

Vertex Pentagon::calculateCenter() const//Метод вычисления центра фигуры
{
    Vertex center;
    double xCenter = 0;
    double yCenter = 0;
    for (int i = 0; i < 5; i++)
    {
        xCenter += v[i].coordinates.first;
        yCenter += v[i].coordinates.second;
    }
    xCenter = xCenter / 5;
    yCenter = yCenter / 5;
    center.coordinates.first = xCenter;
    center.coordinates.second = yCenter;
    return center;
};

void Pentagon::printVertex(std::ostream& os) const//Вывод вершин пятиугольника
{
    os << "Pentagon:\n";
    for (int i = 0; i < 5; i++)
        os << v[i] << std::endl;
    os << '\b';
};


Hexagon::Hexagon() {};//Конструктор класса
Hexagon::Hexagon(std::istream& is) //Конструктор класса
{
    Vertex l;
    for (int i = 0; i < 6; i++) {
        is >> l;
        v[i] = l;
    }
};

double Hexagon::calculateArea() const//Метод вычисления площади шестиугольника
{
    double Area = 0;
    for (int i = 0; i < 6; i++) {
        Area += (v[i].coordinates.first) * (v[(i + 1)%6].coordinates.second)
                - (v[(i + 1)%6].coordinates.first)*(v[i].coordinates.second);
    }
    Area *= 0.5;
    return abs(Area);
};

Vertex Hexagon::calculateCenter() const//Метод вычисления центра фигуры шестиугольника
{
    Vertex center;
    double xCenter = 0;
    double yCenter = 0;
    for (int i = 0; i < 6; i++)
    {
        xCenter += v[i].coordinates.first;
        yCenter += v[i].coordinates.second;
    }
    xCenter = xCenter / 6;
    yCenter = yCenter / 6;
    center.coordinates.first = xCenter;
    center.coordinates.second = yCenter;
    return center;
};

void Hexagon::printVertex(std::ostream& os) const//Вывод вершин шестиугольника
{
    os << "Hexagon:\n";
    for (int i = 0; i < 6; i++)
        os << v[i] << std::endl;
    os << '\b';
};


Octagon::Octagon() {};
Octagon::Octagon(std::istream& is)//Ввод вершин восьмиугольника
{
    Vertex l;
    for (int i = 0; i < 8; i++) {
        is >> l;
        v[i] = l;
    }
};

double Octagon::calculateArea() const//Вычисление площади восьмиугольника
{
    double Area = 0;
    for (int i = 0; i < 8; i++)
        Area += (v[i].coordinates.first) * (v[(i + 1)%8].coordinates.second)
                - (v[(i + 1)%8].coordinates.first)*(v[i].coordinates.second);
    Area *= 0.5;
    return abs(Area);
};

Vertex Octagon::calculateCenter() const//Вычисления центра восьмиугольника
{
    Vertex center;
    double xCenter = 0;
    double yCenter = 0;
    for (int i = 0; i < 8; i++)
    {
        xCenter += v[i].coordinates.first;
        yCenter += v[i].coordinates.second;
    }
    xCenter = xCenter / 8;
    yCenter = yCenter / 8;
    center.coordinates.first = xCenter;
    center.coordinates.second = yCenter;
    return center;
};

void Octagon::printVertex(std::ostream& os) const {
    os << "Octagon:\n";
    for (int i = 0; i < 8; i++)
        os << v[i] << std::endl;
    os << '\b';
};
