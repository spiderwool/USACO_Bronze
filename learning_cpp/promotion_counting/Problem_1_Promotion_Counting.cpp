#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int bronze[2], silver[2], gold[2], platinum[2];
    int bronze_silver = 0, silver_gold = 0, gold_platinum = 0;
    std:: cin >> bronze[0] >> bronze[1] >> silver[0] >> silver[1] >> gold[0] >> gold[1] >> platinum[0] >> platinum[1];
    gold_platinum = platinum[1] - platinum[0];
    silver_gold = (gold[1] - gold[0]) + gold_platinum;
    bronze_silver = (silver[1] - silver[0]) + silver_gold;
    std:: cout << bronze_silver << "\n" << silver_gold << "\n" << gold_platinum << "\n";
}