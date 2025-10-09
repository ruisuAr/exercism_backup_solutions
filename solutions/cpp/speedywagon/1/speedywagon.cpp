#include "speedywagon.h"

namespace speedywagon {

bool connection_check(pillar_men_sensor* sensor) {
    return sensor != nullptr;
}
int activity_counter(pillar_men_sensor* sensors, int num_sensors) {
    int sum{0};
    for(int i = 0; i < num_sensors; i++) {
        sum += (sensors + i)->activity;
    }
    return sum;
}
bool alarm_control(pillar_men_sensor* sensor_info) {
    return connection_check(sensor_info) ? sensor_info->activity > 0 : false;
}
bool uv_alarm(pillar_men_sensor* sensor_info) {
    if(connection_check(sensor_info)) {
        int uv_level = uv_light_heuristic(&sensor_info->data);
        return uv_level > sensor_info->activity;
    }
    return false;
}
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
