#include "power_of_troy.h"
using namespace std;

namespace troy {
    
    void give_new_artifact(human& person, string name) {
        person.possession = make_unique<artifact>(name);
    }
    
    void exchange_artifacts(unique_ptr<artifact>& first_artifact, unique_ptr<artifact>& second_artifact) {
        swap(first_artifact, second_artifact);
    }
    
    void manifest_power(human& person, std::string new_power) {
        person.own_power = make_shared<power>(new_power);
    }

    void use_power(human& caster, human& target) {
        if(caster.own_power != nullptr) target.influenced_by = caster.own_power;
    }

    int power_intensity(const human& person) {
        return person.own_power != nullptr ? person.own_power.use_count() : 0;
    }
    
}  // namespace troy