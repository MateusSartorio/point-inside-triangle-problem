#pragma once

#include <iostream>
#include <ostream>
#include <string>

template<typename T>
struct point {
  private:
    T x, y;

  public:
    point(T x, T y) : x(x), y(y) {}
    point() : x(0), y(0) {}
    
    std::string to_string() const {
      return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
    }
  
    std::string to_string() {
      return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
    }

};

template<typename T>
std::ostream& operator<<(std::ostream& os, const point<T>& p) {
  return os << p.to_string();
}
