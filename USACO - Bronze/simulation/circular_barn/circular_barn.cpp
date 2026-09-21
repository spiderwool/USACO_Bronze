#include <array>
#include <climits>
#include <iostream>
#include <vector>

int main(void) {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int rooms, minimum_steps = INT_MAX, total_cows = 0;
    std::cin >> rooms;

    std::vector<int> room_sizes(rooms);

    for (int i = 0; i < rooms; i++) {
        std::cin >> room_sizes[i];
        total_cows += room_sizes[i];
    }
    int tmp_walked, cows_left;
    for (int i = 0; i < rooms; i++) {
        // For each of the rooms
        // Pretend that you started on that room
        // See which room gives the least travel
        tmp_walked = 0;
        cows_left = total_cows - room_sizes[i];
        int f = (i + 1) % rooms;
        for (int g = 1; g < rooms; g++) {
            tmp_walked += cows_left;
            cows_left = cows_left - room_sizes[f];
            if (f == (rooms - 1)) {
                f = 0;
            } else {
                f++;
            }
        }
        if (tmp_walked < minimum_steps) {
            minimum_steps = tmp_walked;
        }
    }
    std::cout << minimum_steps << std::endl;
}