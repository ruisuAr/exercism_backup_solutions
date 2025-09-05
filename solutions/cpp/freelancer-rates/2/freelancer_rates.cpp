#include <cmath>

double daily_rate(double hourly_rate) {
    int daily_rate{8};
    return daily_rate * hourly_rate;
}

double apply_discount(double before_discount, double discount) {
    double after_discount = before_discount - ( discount * (before_discount / 100) );
    return after_discount;
}

int monthly_rate(double hourly_rate, double discount) {
    int billable_rate{22};
    double calc_daily_rate = daily_rate(hourly_rate);
    double calc_mouthly_rate = billable_rate * calc_daily_rate;
    double calc_discount = apply_discount(calc_mouthly_rate, discount);
    return ceil(calc_discount);
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    double calc_daily_rate{daily_rate(hourly_rate)};
    double days_of_work = budget / apply_discount(calc_daily_rate, discount);
    // cmath function
    return floor(days_of_work);
}