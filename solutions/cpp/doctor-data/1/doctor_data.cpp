#include "doctor_data.h"

namespace heaven {
// constructor
    Vessel::Vessel(std::string name, int gen, star_map::System sys) {
        name_ = name;
        generation = gen;
        current_system = sys;
    }
// methods
    Vessel Vessel::replicate(std::string name) {
        return Vessel(name, generation + 1, current_system);
    }
    void Vessel::make_buster() {
        busters++;
    }
    bool Vessel::shoot_buster() {
        if (busters == 0) return false;
        busters--;
        return true; 
    }
// Funtions
    std::string get_older_bob(Vessel& sys1, Vessel& sys2) {
        return sys1.generation < sys2.generation ? sys1.get_name() : sys2.get_name();
    }
    bool in_the_same_system(Vessel& sys1, Vessel& sys2) {
        return sys1.current_system == sys2.current_system;
    }
} // namespace heaven