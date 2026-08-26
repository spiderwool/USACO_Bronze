#include <cstdio>
#include <iostream>

int main(){
    int hints[7];
    int lowest[3];
    std:: cin >> hints[0] >> hints[1] >> hints[2] >> hints[3] >> hints[4] >> hints[5] >> hints[6];
    lowest[0] = hints[0];
    // Does this three times for each lowest number
    for(int a = 0; a < 3; a++){
        for(int i = 0; i < 6; i++){
            if(hints[i] <= lowest[a] && hints[i] != lowest[0] && hints[i] != lowest[1] && hints[i] != lowest[2])
                lowest[a] = hints[i];
        }
    }
    std:: cout << hints[0] << hints[1] << hints[2] << std:: endl;
}