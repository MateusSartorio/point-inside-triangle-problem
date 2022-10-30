#include <cmath>
#include <iostream>
#include "./h/triangle.h"

#define print(x) std::cout << x << std::endl

int main(int argc, char** argv) {
    triangle<double> t(point<double>(0, 0), point<double>(0.5, std::sqrt(3)/2.0), point<double>(1, 0));

    if(t.contains_point(point<double>(0.5, 0.5)))
        print("it contains the point :)");
    else
        print("it does not contain the point :(");
  
	return 0;
}
