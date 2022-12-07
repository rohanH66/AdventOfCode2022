#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;



int main() {
    std::vector<char> compartment;
    std::string temp_rucksack;
    std::string temp_val;
    std::string first_half;
    std::string second_half;
    
    

    for (int i = 0; i < 300; i++){
        std::cin >> temp_rucksack;
        first_half = temp_rucksack.substr(0, temp_rucksack.size() / 2);
        second_half = temp_rucksack.substr(0, temp_rucksack.size() / 2);

        std::string alreadyadded;
        for (int a = 0; a < first_half.length(); a++){
            if (second_half.find(first_half.substr(a, a+1))){
                
                temp_val = second_half.find(first_half.substr(a, a+1));
                if (alreadyadded.find(temp_val)){
                    //compartment.push_back(temp_val);
                    alreadyadded.append(temp_val);
                }
                
            }
        }
    }
    int sum = 0;

    for (int i = 0; i < compartment.size(); i++){
        char currentchar;
        currentchar = compartment[i];

        if (islower(currentchar))
            sum = sum + int(currentchar) - 96;


        else (islower(currentchar));
            sum = sum + int(currentchar) - 64 + 26;


    }

    std::cout << sum;



}