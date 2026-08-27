#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int hints[7];
    std:: cin >> hints[0] >> hints[1] >> hints[2] >> hints[3] >> hints[4] >> hints[5] >> hints[6];
    std:: sort(hints, hints + 7);
    std:: cout << hints[0] << " " << hints[1] << " " << hints[2];
}