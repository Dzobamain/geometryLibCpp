#include "geometrics2d.h"

#include <cmath>

namespace Geometrics2D 
{
    class TriangleUtils 
    {
    public:
        static double Perimeter(double side1, double side2, double side3) { return side1 + side2 + side3; }
        static double Area(double baseLength, double height) { return 0.5 * baseLength * height; }
        static double Perimeter(double side) { return 3 * side; }
        static double FindBase(double area, double height) { return (2 * area) / height; }
        static double FindHeight(double area, double baseLength) { return (2 * area) / baseLength; }
        static double FindEquilateralSide(double perimeter) { return perimeter / 3; }
        static double FindSide(double perimeter, double side1, double side2) { return perimeter - (side1 + side2); }
    };

    class RectangleUtils 
    {
    public:
        static double Perimeter(double length, double width) { return 2 * (length + width); }
        static double Area(double length, double width) { return length * width; }
        static double FindLength(double area, double width) { return area / width; }
        static double FindWidth(double area, double length) { return area / length; }
    };

    class SquareUtils 
    {
    public:
        static double Perimeter(double side) { return 4 * side; }
        static double Area(double side) { return side * side; }
        static double FindSideFromArea(double area) { return std::sqrt(area); }
        static double FindSideFromPerimeter(double perimeter) { return perimeter / 4; }
    };

    class CircleUtils 
    {
    public:
        static double Circumference(double radius) { return 2 * M_PI * radius; }
        static double Area(double radius) { return M_PI * radius * radius; }
        static double FindRadiusFromArea(double area) { return std::sqrt(area / M_PI); }
        static double FindRadiusFromCircumference(double circumference) { return circumference / (2 * M_PI); }
    };

    class ParallelogramUtils 
    {
    public:
        static double Perimeter(double base, double side) { return 2 * (base + side); }
        static double Area(double base, double height) { return base * height; }
        static double FindBase(double area, double height) { return area / height; }
        static double FindHeight(double area, double base) { return area / base; }
    };

    class TrapezoidUtils 
    {
    public:
        static double Perimeter(double a, double b, double c, double d) { return a + b + c + d; }
        static double Area(double a, double b, double height) { return 0.5 * (a + b) * height; }
        static double FindBase(double area, double otherBase, double height) { return (2 * area / height) - otherBase; }
    };
}