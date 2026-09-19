#include <iostream>
#include <vector>
int main(void) {
    // SPOT 1 (optional): if you're submitting to USACO, freopen goes here

    int number_of_cows;
    std::cin >> number_of_cows;

    std::vector<int> cows(number_of_cows);  // this holds the a values
    std::vector<int> cow_ids(number_of_cows);

    for (int i = 0; i < number_of_cows; i++) {
        std::cin >> cows[i];
    }

    for (int i = 0; i < number_of_cows; i++) {
        std::cin >> cow_ids[i];
    }

    // SPOT 2: wrap everything below in a loop that runs 3 times

    // SPOT 3: declare a new vector (size number_of_cows) to hold the "before"
    // lineup

    for (int i = 0; i < number_of_cows; i++) {
        for (int g = 0; g < number_of_cows; g++) {
            if (cows[g] == (i + 1)) {
                // SPOT 4: replace this print. Instead of printing,
                // store cow_ids[i] into the new vector at index g
            }
        }
    }

    // SPOT 5: at the end of each round, make cow_ids equal the new vector,
    // so the next round undoes the shuffle from this lineup

    // SPOT 6: after all 3 rounds, print cow_ids, one ID per line, in a separate
    // loop
}