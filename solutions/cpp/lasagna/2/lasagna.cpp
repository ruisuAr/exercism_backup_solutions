int ovenTime() { return 40; }

int remainingOvenTime(int actualMinutesInOven) {
    int timeBake{ovenTime()};
    return timeBake - actualMinutesInOven;
}

int preparationTime(int numberOfLayers) {
    int timePerLayer{2};
    return numberOfLayers * timePerLayer;
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}
