#pragma once

#include <cmath>
#include <iostream>
#include "./point.h"

template <typename T>
struct triangle {
    private:
        point<T> p1, p2, p3;
        
        //constant for floating point comparison
        const double e = 1e-10;

        //gets the area of any triangle from its three vertices
        static double area_of_triangle(const point<T>& p1, const point<T>& p2, const point<T>& p3) {
            return std::abs( ( (p2.x - p1.x)*(p3.y - p1.y) - (p3.x - p1.x)*(p2.y - p1.y) )/2.0 );
        }

  public:
    triangle(point<T> p1, point<T> p2, point<T> p3) : p1(p1), p2(p2), p3(p3) {}

    std::string to_string() const {
      return this->p1.to_string() + " " + this->p2.to_string() + " " + this->p3.to_string();
    }

    std::string to_string() {
      return this->p1.to_string() + " " + this->p2.to_string() + " " + this->p3.to_string();
    }
    
    //returns the area of this triangle
    double area() const {
        return area_of_triangle(this->p1, this->p2, this->p3);
    }
    
    //if the sum of the three areas is equals to the area of the triangle, the point is inside the triangle
    bool contains_point(const point<T>& p) {
        double a1 = area_of_triangle(this->p1, this->p2, p);
        double a2 = area_of_triangle(this->p1, this->p3, p);
        double a3 = area_of_triangle(this->p2, this->p3, p);
        
        double diff = a1 + a2 + a3 - this->area();

        return std::abs(diff) < e;

    }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const triangle<T>& t) {
  return os << t.to_string();
}
