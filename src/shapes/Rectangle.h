#include <string>
#include "ShapeManager.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace Shapes {

class Rectangle : public ShapeManager
{
public:

    explicit Rectangle (double length, double height, std::string color);

    virtual void draw() override;    
    virtual const double calcArea() override;
    virtual std::string& color() override;

private:
    double m_length;
    double m_height;
    std::string m_color;
};

}

#endif // RECTANGLE_H