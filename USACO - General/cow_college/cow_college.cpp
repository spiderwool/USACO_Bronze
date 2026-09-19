#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int interested_cows;
    std:: cin >> interested_cows;
    std::vector<int> cow_tolerance(interested_cows);

    for(int i = 0; i < interested_cows; i++){
        std::cin >> cow_tolerance[i];
    }

    int most_money = 0;
    int tmp_money = 0;
    // Find the maximum tolerance of the cows and run simulations from that down
    for(int i = *std::max_element(cow_tolerance.begin(), cow_tolerance.end()); i > 0; i--){
        tmp_money = 0;
        for(int g = 0; g < interested_cows; g++){
            if(cow_tolerance[g] >= i){
                tmp_money += cow_tolerance[g];
            }
        }
        if(tmp_money > most_money){
            most_money = tmp_money;
        }
    }
    std:: cout << most_money;





    
}