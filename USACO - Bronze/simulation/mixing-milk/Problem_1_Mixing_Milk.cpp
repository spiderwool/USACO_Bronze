#include <vector>
#include <iostream>

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int capacity_1, amount_1, capacity_2, amount_2, capacity_3, amount_3;
    std:: cin >> capacity_1 >> amount_1 >> capacity_2 >> amount_2 >> capacity_3 >> amount_3;
    int space_remaining, swaps = 0;
    while(swaps < 100){
        // Pour 1 to 2
        space_remaining = capacity_2 - amount_2;
        if(space_remaining < amount_1){
            amount_2 += space_remaining;
            amount_1 -= space_remaining;
        } else{
            amount_2 += amount_1;
            amount_1 = 0;
        }
        swaps++;
        if(swaps == 100){
            break;
        }
        // Pour 2 to 3
        space_remaining = capacity_3 - amount_3;
        if(space_remaining < amount_2){
            amount_3 += space_remaining;
            amount_2 -= space_remaining;
        } else{
            amount_3 += amount_2;
            amount_2 = 0;
        }
        swaps++;
        if(swaps == 100){
            break;
        }
        //pour 3 to 1
        space_remaining = capacity_1 - amount_1;
        if(space_remaining < amount_3){
            amount_1 += space_remaining;
            amount_3 -= space_remaining;
        } else{
            amount_1 += amount_3;
            amount_3 = 0;
        }
        swaps++;
        if(swaps == 100){
            break;
        }
    }
    std:: cout << amount_1 << "\n" << amount_2 << "\n" << amount_3 << "\n";
}