#pragma once
#include<iostream>

//����� "�������"
struct Vertex
{
    using m_vertex = std::pair<int,int>;
    m_vertex coordinates;
};

std::istream& operator>> (std::istream&, Vertex&);
std::ostream& operator<< (std::ostream&, const Vertex&);
