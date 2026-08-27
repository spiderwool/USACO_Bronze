#include <iostream>
using namespace std;
int main(void){
    int watermelon_weight;
    std::cin >> watermelon_weight;
    if(watermelon_weight % 2 == 0 && watermelon_weight > 2){
        std::cout << "YES" << endl;
    } else{
        std::cout << "NO" << endl;
    }
}