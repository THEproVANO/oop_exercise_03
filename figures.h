#pragma once
#include<stdio.h>
#include"figure.h"

//Класс пятиугольника
class Pentagon : public Figure {
private:
	Vertex v[5];
public:
	Pentagon();
    virtual ~Pentagon() override {}
	Pentagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};

//Класс шестиугольника
class Hexagon : public Figure {
private:
	Vertex v[6];
public:
	Hexagon();
    virtual ~Hexagon() override {}
	Hexagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};

//Класс восьмиугольника
class Octagon : public Figure {
private:
	Vertex v[8];
public:
	Octagon();
    virtual ~Octagon() override {}
	Octagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};
