#include "triangle.h"
#include <stdexcept>

namespace triangle {

flavor kind(float a, float b, float c) {
// Verification of valid triangles
    bool sides_length = a + b + c > 0;
    bool sides_sum = a + b >= c && a + c >= b && b + c >= a;

    if(sides_length && sides_sum) {
        return a == b && b == c ? flavor::equilateral :
               a == b || b == c || a == c ? flavor::isosceles : flavor::scalene;
    }

// Exception that requires the test in case of failure of validation
    throw std::domain_error("Invalid sides for a triangle");
}
    
}  // namespace triangle
