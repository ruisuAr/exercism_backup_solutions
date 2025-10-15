#pragma once

namespace space_age {

class space_age {
private:
    long seconds_;
    double seconds_per_year{31557600.0};
// Equation to calculate the Earth-years according to the seconds
    double earth_year = seconds_ / seconds_per_year;
// Orbital period in Earth Years
    double mercury_year{0.2408467};
    double venus_year{0.61519726};
    double mars_year{1.8808158};
    double jupiter_year{11.862615};
    double saturn_year{29.447498};
    double uranus_year{84.016846};
    double neptune_year{164.79132};

public:
// Constructor
    space_age(long seconds);
// Methods
    long seconds() const;
    double on_earth() const;
    double on_mercury() const;
    double on_venus() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
};

}  // namespace space_age
