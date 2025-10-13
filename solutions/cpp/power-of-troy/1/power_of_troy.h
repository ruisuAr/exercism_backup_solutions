#pragma once
#include <memory>
#include <string>

namespace troy {

struct artifact {
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {
    human() = default;
    human(const artifact& artifacts, const power& powers)
        : possession(std::make_unique<artifact>(artifacts))
        , own_power(std::make_shared<power>(powers))
        , influenced_by(std::make_shared<power>(powers))
    {}
    std::unique_ptr<artifact> possession{nullptr};
    std::shared_ptr<power> own_power{nullptr};
    std::shared_ptr<power> influenced_by{nullptr};
};
    
// Bring artifacts into troy
void give_new_artifact(human& person, std::string name);
    
// Make items tradeable
void exchange_artifacts(std::unique_ptr<artifact>& first_artifact, std::unique_ptr<artifact>& second_artifact);
    
// Give power to the people
void manifest_power(human& person, std::string new_power);

// Use the power
void use_power(human& caster, human& target);

// Keep watch on the power's intensity
int power_intensity(const human& person);

}  // namespace troy
