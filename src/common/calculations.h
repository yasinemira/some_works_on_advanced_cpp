#include <iostream>
#include <algorithm>
#include <type_traits>

#include "../shapes/ShapeManager.h"

namespace Common {

namespace Calculations {

template <typename... Shapes>
const double findGreatestSurfaceArea(Shapes&&... shapes)
{   
    static_assert(std::conjunction_v<std::is_base_of<ShapeManager, Shapes>...>, "Class doesn't inherit from ShapeManager!");
    const auto maxSurfaceArea = std::max({shapes.calcArea()...});
    std::cout << "Max surface area is: " << maxSurfaceArea << "\n";
    return maxSurfaceArea;
}

} // namespace Common::Calculations

}