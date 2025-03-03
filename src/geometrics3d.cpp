#include "geometrics3d.h"
#include <cmath>

namespace Geometrics3D 
{
    class SphereUtils 
    {
    public:
        static double Volume(double radius) { return (4.0 / 3.0) * M_PI * std::pow(radius, 3); }
        static double SurfaceArea(double radius) { return 4 * M_PI * std::pow(radius, 2); }
        static double FindRadiusFromVolume(double volume) { return std::cbrt((3 * volume) / (4 * M_PI)); }
        static double FindRadiusFromSurfaceArea(double surfaceArea) { return std::sqrt(surfaceArea / (4 * M_PI)); }
    };
    class CubeUtils 
    {
    public:
        static double Volume(double side) { return std::pow(side, 3); }
        static double SurfaceArea(double side) { return 6 * std::pow(side, 2); }
        static double FindSideFromVolume(double volume) { return std::cbrt(volume); }
        static double FindSideFromSurfaceArea(double surfaceArea) { return std::sqrt(surfaceArea / 6); }
    }; 
    class RectangularPrismUtils 
    {    
    public:
        static double Volume(double length, double width, double height) { return length * width * height; }
        static double SurfaceArea(double length, double width, double height) { return 2 * (length * width + length * height + width * height); }
        static double FindLengthFromVolume(double volume, double width, double height) { return volume / (width * height); }
        static double FindWidthFromVolume(double volume, double length, double height) { return volume / (length * height); }
        static double FindHeightFromVolume(double volume, double length, double width) { return volume / (length * width); }
    };
    class CylinderUtils 
    {
    public:
        static double Volume(double radius, double height) { return M_PI * std::pow(radius, 2) * height; }
        static double SurfaceArea(double radius, double height) { return 2 * M_PI * radius * (radius + height); }
        static double FindRadiusFromVolume(double volume, double height) { return std::sqrt(volume / (M_PI * height)); }
        static double FindRadiusFromSurfaceArea(double surfaceArea, double height) { return surfaceArea / (2 * M_PI * (height + 1)); }
        static double FindHeightFromVolume(double volume, double radius) { return volume / (M_PI * std::pow(radius, 2)); }
        static double FindHeightFromSurfaceArea(double surfaceArea, double radius) { return surfaceArea / (2 * M_PI * radius) - radius; }
    };
    class ConeUtils
    {
    public:
        static double Volume(double radius, double height) { return (1.0 / 3.0) * M_PI * std::pow(radius, 2) * height; }
        static double SurfaceArea(double radius, double height) { return M_PI * radius * (radius + std::sqrt(std::pow(height, 2) + std::pow(radius, 2))); }
        static double FindRadiusFromVolume(double volume, double height) { return std::sqrt((3 * volume) / (M_PI * std::pow(height, 2))); }
        static double FindRadiusFromSurfaceArea(double surfaceArea, double height) { return surfaceArea / (M_PI * (height + std::sqrt(std::pow(height, 2) + std::pow(surfaceArea / M_PI, 2)))); }
        static double FindHeightFromVolume(double volume, double radius) { return 3 * volume / (M_PI * std::pow(radius, 2)); }
        static double FindHeightFromSurfaceArea(double surfaceArea, double radius) { return std::sqrt(std::pow(surfaceArea / M_PI, 2) - std::pow(radius, 2)); }
    };
    class PyramidUtils
    {
    public:
        static double Volume(double baseArea, double height) { return (1.0 / 3.0) * baseArea * height; }
        static double SurfaceArea(double basePerimeter, double baseArea, double slantHeight) { return (0.5 * basePerimeter * slantHeight) + baseArea; }
        static double FindBaseAreaFromVolume(double volume, double height) { return 3 * volume / height; }
        static double FindHeightFromVolume(double volume, double baseArea) { return 3 * volume / baseArea; }
        static double FindSlantHeightFromSurfaceArea(double surfaceArea, double basePerimeter, double baseArea) { return (surfaceArea - baseArea) / (0.5 * basePerimeter); }
    };
    class Torus
    {
    public:
        static double Volume(double majorRadius, double minorRadius) { return 2 * M_PI * M_PI * majorRadius * std::pow(minorRadius, 2); }
        static double SurfaceArea(double majorRadius, double minorRadius) { return 4 * M_PI * M_PI * majorRadius * minorRadius; }
        static double FindMajorRadiusFromVolume(double volume, double minorRadius) { return volume / (2 * M_PI * M_PI * std::pow(minorRadius, 2)); }
        static double FindMajorRadiusFromSurfaceArea(double surfaceArea, double minorRadius) { return surfaceArea / (4 * M_PI * M_PI * minorRadius); }
        static double FindMinorRadiusFromVolume(double volume, double majorRadius) { return std::sqrt(volume / (2 * M_PI * M_PI * majorRadius)); }
        static double FindMinorRadiusFromSurfaceArea(double surfaceArea, double majorRadius) { return surfaceArea / (4 * M_PI * M_PI * majorRadius); }
    };
    class EllipsoidUtils
    {
    public:
        static double Volume(double a, double b, double c) { return (4.0 / 3.0) * M_PI * a * b * c; }
        static double SurfaceArea(double a, double b, double c) { return 4 * M_PI * std::pow((std::pow(a * b, 1.6) + std::pow(a * c, 1.6) + std::pow(b * c, 1.6)) / 3, 1.0 / 1.6); }
        static double FindAFromVolume(double volume, double b, double c) { return volume / (4.0 / 3.0) * M_PI * b * c; }
        static double FindBFromVolume(double volume, double a, double c) { return volume / (4.0 / 3.0) * M_PI * a * c; }
        static double FindCFromVolume(double volume, double a, double b) { return volume / (4.0 / 3.0) * M_PI * a * b; }
    };
    class HemisphereUtils
    {
    public:
        static double Volume(double radius) { return (2.0 / 3.0) * M_PI * std::pow(radius, 3); }
        static double SurfaceArea(double radius) { return 3 * M_PI * std::pow(radius, 2); }
        static double FindRadiusFromVolume(double volume) { return std::cbrt((3 * volume) / (2 * M_PI)); }
        static double FindRadiusFromSurfaceArea(double surfaceArea) { return std::sqrt(surfaceArea / (3 * M_PI)); }
    };
}