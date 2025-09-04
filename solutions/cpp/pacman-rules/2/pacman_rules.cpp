bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {    
    if(power_pellet_active && touching_ghost) { return true; }
    else { return false; }
}

bool scored(bool touching_power_pellet, bool touching_dot) {
    if(touching_power_pellet || touching_dot) { return true; } 
    else { return false; }
}

bool lost(bool power_pellet_active, bool touching_ghost) {
    if(!power_pellet_active && touching_ghost) { return true; }
    else { return false; }
}

bool won(bool has_eaten_all_dots, bool power_pellet_active, bool touching_ghost) {
    if(has_eaten_all_dots && !lost(power_pellet_active, touching_ghost)) {
        return true;
    } else { return false; }
}