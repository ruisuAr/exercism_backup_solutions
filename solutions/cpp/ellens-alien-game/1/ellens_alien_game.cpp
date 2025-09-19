namespace targets {
    class Alien {
        private:
            int health{3};
        public:
            Alien(int x_new, int y_new) {
                x_coordinate = x_new;
                y_coordinate = y_new;
            }
            int x_coordinate;
            int y_coordinate;
            int get_health() {
                return health;
            }
            bool hit() {
                if(health > 0) {
                    health--;
                    return true;
                } else { return false; }
            }
            bool is_alive() {
                return health > 0;
            }
            bool teleport(int x_new, int y_new) {
                x_coordinate = x_new;
                y_coordinate = y_new;
                return true;
            }
            bool collision_detection(Alien alien) {
                return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
            }
    };
}  // namespace targets
