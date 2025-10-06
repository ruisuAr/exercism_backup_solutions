#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
} //namesace star_map

namespace heaven {
    class Vessel {
    public:
    // constructor
        Vessel(std::string name, int gen, star_map::System sys = star_map::System::Sol);
    // attributes
        star_map::System current_system;
        int generation;
        int busters{0};
    // methods
        Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();
    // Getter
        std::string get_name() const {
            return name_;
        }
    private:
    // attributes
        std::string name_;
    };
    
// Functions
    std::string get_older_bob(Vessel& sys1, Vessel& sys2);
    bool in_the_same_system(Vessel& sys1, Vessel& sys2);
} // namespace heaven