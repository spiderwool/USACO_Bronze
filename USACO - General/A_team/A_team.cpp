#include <iostream>
using namespace std;

int main(){
    int number_of_problems;
    int agreed_problems = 0;
    int first, second, third;
    std::cin >> number_of_problems;
    while(number_of_problems > 0){
    std:: cin >> first >> second >> third;
    if((first + second + third) > 1){
        agreed_problems++;
    }
    number_of_problems--;
    }

    std:: cout << agreed_problems << "\n";
    
}