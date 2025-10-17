#include "grains.h"
#include <cmath>

namespace grains {

u_long64 square(int n) {
    return pow(2, n-1);
}
    
u_long64 total() {
    u_long64 sum{0};
    for (int i{1}; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}

}  // namespace grains
