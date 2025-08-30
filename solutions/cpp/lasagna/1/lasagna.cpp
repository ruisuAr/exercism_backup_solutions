// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    int minutesOnOven = 40;
    return minutesOnOven;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    int timeBake = ovenTime();
    return timeBake - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    int timePerLayer = 2;
    return numberOfLayers * timePerLayer;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    int totalTimeSpent = preparationTime(numberOfLayers) + actualMinutesInOven;
    return totalTimeSpent;
}
