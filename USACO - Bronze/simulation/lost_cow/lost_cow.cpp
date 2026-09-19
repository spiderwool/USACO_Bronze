#include <iostream>
#include <ostream>

int main(void){
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int farmer_john, bessy, steps = 0;
    // Steps signifies the steps that farmer john had to take to find bessy
    std:: cin >> farmer_john >> bessy;
    int zig = 1;
    if(farmer_john == bessy){
        std:: cout << "0";
        return 0;
    }
    // Farmer john and bessy represent their positions as farmer john tries to find bessy
    while(true){
        for (int i = 0; i < zig; i++){
            farmer_john++;
            steps++;
            if(farmer_john == bessy){
                std:: cout << steps << std:: endl;
                return 0;
            }

        }
        
        zig = zig * 2;
        if(zig == 2){
            zig = 3;
        }

        for(int i = 0; i < zig; i++){
            if(steps != 0){
                farmer_john--;
                steps++;
            }
            if(farmer_john == bessy){
                std:: cout << steps << std::endl;
                return 0;
            }
        }
        zig = zig * 2;
    }
}