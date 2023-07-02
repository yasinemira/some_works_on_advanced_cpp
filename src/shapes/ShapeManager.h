#include <string>

#ifndef SHAPE_MANAGER_H
#define SHAPE_MANAGER_H

/// @brief Interface for shaping and miscellanous operations on geometrical shapes
class ShapeManager
{
public:
    virtual ~ShapeManager() = default;

protected:
    virtual void draw() = 0;
    virtual const double calcArea() = 0;
    virtual std::string& color() = 0;
};

#endif