#include "vehicle_purchase.h"
using namespace std;

namespace vehicle_purchase {
    bool needs_license(string kind) {
        bool can_drive = kind == "truck" || kind == "car";
        return can_drive;
    }

    string choose_vehicle(string option1, string option2) {
        string answer{" is clearly the better choice."};
        if (option1 < option2) {
            return option1 + answer;
        } else {
            return option2 + answer;
        }
    }
    
    double calculate_resell_price(double original_price, double age) {
        if (age < 3) return (80.0/100) * original_price;
        else if (age < 10) return (70.0/100) * original_price;
        else if (age >= 10) return (50.0/100) * original_price;
        return 0;
    }
}  // namespace vehicle_purchase
