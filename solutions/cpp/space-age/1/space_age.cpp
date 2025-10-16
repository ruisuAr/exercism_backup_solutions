#include "space_age.h"

namespace space_age {

// Constructor
    space_age::space_age(long seconds) : seconds_(seconds) {}
// Methods
    long space_age::seconds() const {
        return seconds_;
    }
    double space_age::on_earth() const {
        return earth_year;
    }
    double space_age::on_mercury() const {
        return earth_year / mercury_year;
    }
    double space_age::on_venus() const {
        return earth_year / venus_year;
    }
    double space_age::on_mars() const {
        return earth_year / mars_year;
    }
    double space_age::on_jupiter() const {
        return earth_year / jupiter_year;
    }
    double space_age::on_saturn() const {
        return earth_year / saturn_year;
    }
    double space_age::on_uranus() const {
        return earth_year / uranus_year;
    }
    double space_age::on_neptune() const {
        return earth_year / neptune_year;
    }
    
}  // namespace space_age
