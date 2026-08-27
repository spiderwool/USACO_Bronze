#include <iostream>
using namespace std;
int main(){
    int first_banana_cost, initial_money, wanted_bananas;
    int borrowed = 0;
    std:: cin >> first_banana_cost >> initial_money >> wanted_bananas;
    int i = 2;
    borrowed = first_banana_cost - initial_money;
    while(i <= wanted_bananas) {
        borrowed += (first_banana_cost * i);
        i++;
    }
    if(borrowed < 0){
        std:: cout << "0";
        return 0;
    }
    std:: cout << borrowed; 
}