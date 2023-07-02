#include <iostream>
#include <algorithm>
#include <type_traits>


#include "ShapeManager.h"

namespace Common {
    namespace Details{
        template <typename T>
        using remove_cvref_t = std::remove_reference_t<std::remove_cv_t<T>>;
    }

namespace Calculations {

template <typename... Shapes>
const double findGreatestSurfaceArea(Shapes&&... shapes)
{   
    static_assert(std::conjunction_v<std::is_base_of<ShapeManager, Common::Details::remove_cvref_t<Shapes>>...>, "Class doesn't inherit from ShapeManager!");
    const auto maxSurfaceArea = std::max({(std::forward<Shapes>(shapes).calcArea())...});
    std::cout << "Max surface area is: " << maxSurfaceArea << "\n";
    return maxSurfaceArea;
}

} // namespace Common::Calculations

}