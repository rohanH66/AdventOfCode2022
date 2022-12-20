#include <iostream>
#include <vector>
#include <string>
#include <string.h>



int main() {
    double calories;
    int total_calories = 0;
    int new_calories = 0;
    int max_calories = 0;
    int tempval = 0;
    std::string str;

    for (int i = 0; i < 2267; i++){
        getline(std::cin, str);

        if(str.empty()){
            if (new_calories > max_calories){
                max_calories = new_calories;
            
                new_calories = 0;
            }
            else{
                new_calories = 0;
            }
            
        }
        else{
            tempval = std::stoi(str);
           
            new_calories = new_calories + tempval;
        }
    }
    std::cout << "\nmax calories are: " << max_calories;

    return(0);
}