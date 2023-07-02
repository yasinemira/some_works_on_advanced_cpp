#include <iostream>
#include <cmath>

#include "Rectangle.h"

namespace Shapes {

 Rectangle::Rectangle (double length, double height, std::string color)
    : m_length{length}
    , m_height{height}
    , m_color{std::move(color)}
{
}

void Rectangle::draw() {
    std::cout << "Drawing a Rectangle\n";
}

const double Rectangle::calcArea() {
    return m_length*m_height;
}
std::string& Rectangle::color() {
    return m_color;
}

}