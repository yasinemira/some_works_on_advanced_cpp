#include <iostream>
#include <cmath>

#include "Triangle.h"

namespace Shapes {

 Triangle::Triangle (double side1, double side2, double side3, std::string color)
    : m_side1{side1}
    , m_side2{side2}
    , m_side3{side3}
    , m_color {std::move(color)}
    {}

void Triangle::draw() {
    std::cout << "Drawing a Triangle\n";
}

const double Triangle::calcArea() {
    const auto semiPerimeter = (m_side1+m_side2+m_side3) / 2;
    const auto surface = std::sqrt(semiPerimeter*(semiPerimeter - m_side1) * (semiPerimeter - m_side2) * (semiPerimeter - m_side3));
    return surface;
}

std::string& Triangle::color() {
    return m_color;
}

}