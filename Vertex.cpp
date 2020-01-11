#include"Vertex.h"

std::istream& operator>> (std::istream& is, Vertex& vertex) //���� ��������� �� ������
{
    std::cout << "Input the coordinate 'x': ";
    is >> vertex.coordinates.first;
    std::cout << "Input the coordinate 'y': ";
    is >> vertex.coordinates.second;
    std::cout << "\n";
    return is;
};

std::ostream& operator<< (std::ostream& os, const Vertex& vertex)
{
    return os << "Coordinate 'x': " <<vertex.coordinates.first << ";  Coordinate 'y': " << vertex.coordinates.second;
};
