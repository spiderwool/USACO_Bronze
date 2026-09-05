#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cstdio>
using namespace std;

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int lines, length, dilation;
    std:: cin >> lines >> length >> dilation; 
    vector<vector<char>> line_number(lines, vector<char>(length));
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < length; j++){
            std:: cin >> line_number[i][j];
        }
    }
        for(int i = 0; i < lines; i++){
            for(int d = 0; d < dilation; d++){
                for(int j = 0; j < length; j++){
                    for(int g = 0; g < dilation; g++){
                        std:: cout << line_number[i][j];
                    }
                }
                std:: cout << "\n";
            }
        }
}