#pragma once
#include<iostream>
#include<cmath>
#include"Vertex.h"

//Родительский класс "Фигура", от которого наследуются другие классы
class Figure {
public:
	virtual Vertex calculateCenter() const = 0;
    virtual ~Figure(){};
	virtual double calculateArea() const = 0;
	virtual void printVertex(std::ostream&) const = 0;
};

std::ostream& operator<< (std::ostream& os, const Figure& f);
