/*
Name:Odhiambo Geofrey Odiwuor 
RegNo:PA106/G/28771/25
Description:Hotel management system using arrays
*/
#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h>   // for seeding random numbers

int main() {
    
    // 1️⃣ 1D ARRAY – WEEKLY REVENUE TRACKER
    

    float revenue[7];   // Array to store revenue for 7 days
    float total = 0, average;
    int i;

    printf("=== WEEKLY REVENUE TRACKER ===\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n\n", average);

    
    // 2️⃣ 2D ARRAY – ROOM OCCUPANCY (ONE BRANCH)
    

    int occupancy[5][10];  // 5 floors, 10 rooms per floor
    int occupied, vacant;

    // Seed random number generator
    srand(time(0));

    printf("=== ROOM OCCUPANCY (ONE BRANCH) ===\n");

    // Generate random occupancy (1 = occupied, 0 = vacant)
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        // Display results per floor
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");

    
    // 3️⃣ 3D ARRAY – MULTIPLE BRANCHES
    

    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms
    int totalOccupied = 0;

    printf("=== MULTIPLE BRANCHES OCCUPANCY ===\n");

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    // Display total occupied rooms across all branches
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}