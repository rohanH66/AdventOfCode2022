#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <bits/stdc++.h>



int main() {
    double calories;
    int total_calories = 0;
    int new_calories = 0;
    int max_calories = 0;
    int tempval = 0;
    std::string str;
    std::vector<int> totals = {};

    for (int i = 0; i < 2267; i++){
        getline(std::cin, str);

        if(str.empty()){
            totals.push_back(new_calories);
            new_calories = 0;
            
        }
        else {
            tempval = std::stoi(str);
           
            new_calories = new_calories + tempval;
        }
    }

    sort(totals.begin(), totals.end());
    int v = totals.size();
    int one = totals[v-1];
    int two = totals[v-2];
    int three = totals[v-3];

    std::cout << "\nTOTAL OF TOP THREE IS " << one + two + three;
}