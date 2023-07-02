#include <iostream>
#include <memory>
#include <string>

#include "src/shapes/Rectangle.h"
#include "src/shapes/Triangle.h"
#include "src/common/calculations.h"

int main()
{
    Shapes::Rectangle rect1 {5, 6, "blue"};
    Shapes::Triangle triangle1 {9, 10 , 11, "green"};

    Common::Calculations::findGreatestSurfaceArea(rect1, triangle1);

}