#include <string>

#include "ShapeManager.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace Shapes {

class Triangle : public ShapeManager
{
public:
    explicit Triangle (double side1, double side2, double side3, std::string color);

    virtual void draw() override;    
    virtual const double calcArea() override;
    virtual std::string& color() override;

private:
    double m_side1;
    double m_side2;
    double m_side3;
    std::string m_color;
};

}

#endif //TRIANGLE_H