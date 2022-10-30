#pragma once

#include <iostream>
#include "./point.h"

template <typename T>
struct triangle {
  private:
      point<T> p1, p2, p3;

  public:
    triangle(point<T> p1, point<T> p2, point<T> p3) : p1(p1), p2(p2), p3(p3) {}

    std::string to_string() const {
      return this->p1.to_string() + " " + this->p2.to_string() + " " + this->p3.to_string();
    }

    std::string to_string() {
      return this->p1.to_string() + " " + this->p2.to_string() + " " + this->p3.to_string();
    }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const triangle<T>& t) {
  return os << t.to_string();
}
