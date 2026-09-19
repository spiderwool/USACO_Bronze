#include <iostream>
#include <vector>

int main(void) {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int number_of_cows;
    std::cin >> number_of_cows;

    std::vector<int> cows(number_of_cows);
    std::vector<int> cow_ids(number_of_cows);

    for (int i = 0; i < number_of_cows; i++) {
        std::cin >> cows[i];
    }

    for (int i = 0; i < number_of_cows; i++) {
        std::cin >> cow_ids[i];
    }

    for (int i = 0; i < number_of_cows; i++) {
        int spot = i;
        for (int s = 0; s < 3; s++) {  // follow the cow through 3 shuffles
            spot = cows[spot] - 1;
        }
        std::cout << cow_ids[spot] << std::endl;
    }
}
