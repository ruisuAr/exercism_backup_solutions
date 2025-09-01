#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    bool can_drive = kind == "truck" || kind == "car";
    return can_drive;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    bool best_option{option1 < option2};
    std::string answer{" is clearly the better choice."};
    
    if (best_option) {
        return option1 + answer;
    } else {
        return option2 + answer;
    }
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    if (age < 3) {
        return (80.0/100) * original_price;
    } else if (age >= 10) {
        return (50.0/100) * original_price;
    } else if (age >= 3 && age < 10) {
        return (70.0/100) * original_price;
    } else {
        return 0;
    }
}

}  // namespace vehicle_purchase
