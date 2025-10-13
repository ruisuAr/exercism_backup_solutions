#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
    int activity{};
    std::string location{};
    std::vector<int> data{};
};
// Check sensor connection
bool connection_check(speedywagon::pillar_men_sensor* sensor);

// Count activity of sensors
int activity_counter(speedywagon::pillar_men_sensor* sensors, int num_sensors);

// Alarm control
bool alarm_control(pillar_men_sensor* sensor_info);

// Checking the data for anomalies
bool uv_alarm(pillar_men_sensor* sensor_info);

// level UV function
int uv_light_heuristic(std::vector<int>* data_array);

}  // namespace speedywagon
