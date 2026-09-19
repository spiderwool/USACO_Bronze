#include <iostream>
#include <vector>
int main(void) {
    int road_segments, bessy_segments, last_bessy_segment = 0,
                                       exeeded_speed_limit = 0;
    std::cin >> road_segments >> bessy_segments;
    // Create two vectors, one for each road semgent and one for each bessy
    // segment
    std::vector<std::pair<int, int>> segment_limit(road_segments);
    std::vector<std::pair<int, int>> bessy_speed(bessy_segments);

    for (int i = 0; i < road_segments; i++) {
        std::cin >> segment_limit[i].first >> segment_limit[i].second;
    }
    for (int i = 0; i < bessy_segments; i++) {
        std::cin >> bessy_speed[i].first >> bessy_speed[i].second;
    }
    for (int i = 0; i < road_segments; i++) {
        // For each road segment, check if bessy's segments fall within it
        for (int j = 0; j < bessy_segments; j++) {
            if (segment_limit[i].first < last_bessy_segment) {
                if ((segment_limit[i].second - bessy_speed[j].second) >
                    exeeded_speed_limit) {
                    exeeded_speed_limit =
                        segment_limit[i].second - bessy_speed[j].second;
                }
            }
            last_bessy_segment = bessy_speed[j].first;
        }
        
        std::cout << exeeded_speed_limit;
    }