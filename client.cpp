#include <iostream>
#include "./h/triangle.h"

#define print(x) std::cout << x << std::endl

int main(int argc, char** argv) {
  triangle<int> t(point<int>(0,0), point<int>(3,0), point<int>(3,4));
  std::cout << t << std::endl;

	return 0;
}
