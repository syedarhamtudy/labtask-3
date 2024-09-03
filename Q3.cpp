#include <stdio.h>

int main() {
    float fuelEfficiency, totalFuelCost, fuelConsumed;
    float distance_to_x = 850.0;
    float x_to_y = 420.0;
    float FuelX = 115.0;
    float FuelY = 120.0;

    printf("Enter the car's fuel efficiency :- ");
    scanf("%f", &fuelEfficiency);

    float fuel_consumed_x = distance_to_x / fuelEfficiency;
    float fuel_consumed_y = x_to_y / fuelEfficiency;

    fuelConsumed = fuel_consumed_x + fuel_consumed_y;
    totalFuelCost = (fuel_consumed_x * FuelX) + (fuel_consumed_y * FuelY);

    printf("Total fuel consumed: %f litress \n", fuelConsumed);
    printf("Total fuel cost: %f Rs", totalFuelCost);

    return 0;
}
