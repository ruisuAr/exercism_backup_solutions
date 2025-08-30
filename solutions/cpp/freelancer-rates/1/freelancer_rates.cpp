// INFO: Headers from the standard library should be inserted at the top via
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    int daily_rate{8};
    
    return daily_rate * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    double after_discount = before_discount - ( discount * (before_discount / 100) );
    
    return after_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    double calc_daily_rate{daily_rate(hourly_rate)};
    double calc_mouthly_rate{22 * calc_daily_rate};
    double calc_discount = apply_discount(calc_mouthly_rate, discount);
    
    return ceil(calc_discount);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    double calc_daily_rate{daily_rate(hourly_rate)};
    double days_of_work = budget / apply_discount(calc_daily_rate, discount);
    
    return floor(days_of_work);
}