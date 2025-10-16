#include "triangle.h"
#include <stdexcept>

namespace triangle {

flavor kind(float a, float b, float c) {
// Verification of valid triangles
    if(a + b + c > 0 && a + b >= c && a + c >= b && b + c >= a) {
        if(a == b && b == c) return flavor::equilateral;
        else if(a == b || b == c || a == c) return flavor::isosceles;
        else if(a != b && b != c) return flavor::scalene;
    }
// Exception that requires the test in case of failure of validation
    throw std::domain_error("Invalid sides for a triangle");
}
    
}  // namespace triangle
