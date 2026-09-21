#include <array>
#include <iostream>
#include <vector>

using namespace std;
int main(void) {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int cows, max_buckets = 0;
    cin >> cows;
    vector<array<int, 3>> milking_times(cows);
    for (int i = 0; i < cows; i++) {
        cin >> milking_times[i][0] >> milking_times[i][1] >>
            milking_times[i][2];
    }
    // Iterate through each time period (1-1000 and see at what point is the
    // most buckets needed)
    int tmp_buckets;
    for (int i = 0; i <= 1000; i++) {
        tmp_buckets = 0;
        for (int g = 0; g < cows; g++) {
            if (i >= milking_times[g][0] && i <= milking_times[g][1]) {
                tmp_buckets += milking_times[g][2];
            }
        }
        if (max_buckets < tmp_buckets) {
            max_buckets = tmp_buckets;
        }
    }
    cout << max_buckets << endl;
}