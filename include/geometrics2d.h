#ifdef GEOMETRICS2D_H
#define GEOMETRICS2D_H  

#include <cmath>

namespace Geometrics2D 
{
    class TriangleUtils 
    {
    public:
        static double Perimeter(double side1, double side2, double side3); 
        static double Area(double baseLength, double height); 
        static double Perimeter(double side); 
        static double FindBase(double area, double height); 
        static double FindHeight(double area, double baseLength); 
        static double FindEquilateralSide(double perimeter); 
        static double FindSide(double perimeter, double side1, double side2); 
    };

    class RectangleUtils 
    {
    public:
        static double Perimeter(double length, double width); 
        static double Area(double length, double width); 
        static double FindLength(double area, double width); 
        static double FindWidth(double area, double length); 
    };

    class SquareUtils 
    {
    public:
        static double Perimeter(double side); 
        static double Area(double side); 
        static double FindSideFromArea(double area); 
        static double FindSideFromPerimeter(double perimeter); 
    };

    class CircleUtils 
    {
    public:
        static double Circumference(double radius); 
        static double Area(double radius); 
        static double FindRadiusFromArea(double area); 
        static double FindRadiusFromCircumference(double circumference); 
    };

    class ParallelogramUtils 
    {
    public:
        static double Perimeter(double base, double side); 
        static double Area(double base, double height); 
        static double FindBase(double area, double height); 
        static double FindHeight(double area, double base); 
    };

    class TrapezoidUtils 
    {
    public:
        static double Perimeter(double a, double b, double c, double d); 
        static double Area(double a, double b, double height); 
        static double FindBase(double area, double otherBase, double height); 
    };
}

#endif // GEOMETRICS2D_H