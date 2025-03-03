#ifdef GEOMETRICS3D_H
#define GEOMETRICS3D_H  

#include <cmath>

namespace Geometrics3D 
{
    class SphereUtils 
    {
    public:
        static double Volume(double radius); 
        static double SurfaceArea(double radius); 
        static double FindRadiusFromVolume(double volume); 
        static double FindRadiusFromSurfaceArea(double surfaceArea); 
    };

    class CubeUtils 
    {
    public:
        static double Volume(double side); 
        static double SurfaceArea(double side); 
        static double FindSideFromVolume(double volume); 
        static double FindSideFromSurfaceArea(double surfaceArea); 
    };

    class RectangularPrismUtils 
    {
    public:
        static double Volume(double length, double width, double height); 
        static double SurfaceArea(double length, double width, double height); 
        static double FindLengthFromVolume(double volume, double width, double height); 
        static double FindWidthFromVolume(double volume, double length, double height); 
        static double FindHeightFromVolume(double volume, double length, double width); 
    };

    class CylinderUtils 
    {
    public:
        static double Volume(double radius, double height); 
        static double SurfaceArea(double radius, double height); 
        static double FindRadiusFromVolume(double volume, double height); 
        static double FindRadiusFromSurfaceArea(double surfaceArea, double height); 
        static double FindHeightFromVolume(double volume, double radius); 
        static double FindHeightFromSurfaceArea(double surfaceArea, double radius); 
    };

    class ConeUtils
    {
    public:
        static double Volume(double radius, double height); 
        static double SurfaceArea(double radius, double height); 
        static double FindRadiusFromVolume(double volume, double height); 
        static double FindRadiusFromSurfaceArea(double surfaceArea, double height); 
        static double FindHeightFromVolume(double volume, double radius); 
        static double FindHeightFromSurfaceArea(double surfaceArea, double radius); 
    };

    class PyramidUtils
    {
    public:
        static double Volume(double baseArea, double height); 
        static double SurfaceArea(double basePerimeter, double baseArea, double slantHeight); 
        static double FindBaseAreaFromVolume(double volume, double height); 
        static double FindHeightFromVolume(double volume, double baseArea); 
        static double FindSlantHeightFromSurfaceArea(double surfaceArea, double basePerimeter, double baseArea); 
    };

    class Torus
    {
    public:
        static double Volume(double majorRadius, double minorRadius); 
        static double SurfaceArea(double majorRadius, double minorRadius); 
        static double FindMajorRadiusFromVolume(double volume, double minorRadius); 
        static double FindMajorRadiusFromSurfaceArea(double surfaceArea, double minorRadius); 
        static double FindMinorRadiusFromVolume(double volume, double majorRadius); 
        static double FindMinorRadiusFromSurfaceArea(double surfaceArea, double majorRadius); 
    };

    class EllipsoidUtils
    {
    public:
        static double Volume(double a, double b, double c); 
        static double SurfaceArea(double a, double b, double c); 
        static double FindAFromVolume(double volume, double b, double c); 
        static double FindBFromVolume(double volume, double a, double c); 
        static double FindCFromVolume(double volume, double a, double b); 
    };

    class HemisphereUtils
    {
    public:
        static double Volume(double radius); 
        static double SurfaceArea(double radius); 
        static double FindRadiusFromVolume(double volume); 
        static double FindRadiusFromSurfaceArea(double surfaceArea); 
    };
}

#endif // GEOMETRICS3D_H