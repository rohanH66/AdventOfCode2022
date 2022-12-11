#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;
/* logic
take input as a string (for one line at a time) - for loop the input

split string into two parts


sort through each string to see if any simmilatr occurances

add all of them to a vector

change number to letter

print sum

*/


int main() {
    string input;
    string input_2;
    string input_3;
    string compartment_one;
    string compartment_two;
    string compartment_three;
    string compartment_four;
    string compartment_five;
    string compartment_six;
    vector <char> temp_val;
    int index;
    char letter_one;
    char letter_two;
    char letter_three;
    char letter_temp;
    int temp_sum;
    int sum;
    bool check = true;
    int new_index_one;
    int new_index_two;
    int new_index_three;


    for (int i = 0; i < 300; i++){
        cin >> input;
        cin >> input_2;
        cin >> input_3;


        compartment_one = input.substr(0, input.size()/2);
        compartment_two = input.substr(input.size()/2);

        compartment_three = input_2.substr(0, input.size()/2);
        compartment_four = input_2.substr(input.size()/2);

        compartment_five = input_3.substr(0, input.size()/2);
        compartment_six = input_3.substr(input.size()/2);

        cout << compartment_one << endl;
        cout << compartment_two << endl;
        while(check){
            for (int j = 0; j < compartment_one.length(); j++){
                if (compartment_one.find(compartment_two[j + new_index_one]) != string::npos){
                    cout << "char  found" << endl;
                    index = compartment_one.find(compartment_two[j + new_index_one]);
                    new_index_one = compartment_one.find(compartment_two[j + new_index_one]);
                    letter_one = compartment_one[index];   
                    break;      

                    

                }
                else{

                }

            }

            for (int j = 0; j < compartment_three.length(); j++){
                if (compartment_three.find(compartment_four[j + new_index_two]) != string::npos){
                    cout << "char  found" << endl;
                    index = compartment_three.find(compartment_four[j + new_index_two]);
                    new_index_two = compartment_three.find(compartment_four[j + new_index_two]);
                    letter_two = compartment_three[index];   
                    break;      

                    

                }
                else{
                    
                }

            }

            for (int j = 0; j < compartment_five.length(); j++){
                if (compartment_five.find(compartment_six[j + new_index_three]) != string::npos){
                    cout << "char  found" << endl;
                    index = compartment_five.find(compartment_six[j + new_index_three]);
                    new_index_three = compartment_three.find(compartment_four[j + new_index_three]);
                    letter_three = compartment_five[index];   
                    break;      

                    

                }
                else{
                    
                }

            }

            if (letter_one == letter_two == letter_three){
                if (islower(letter_one)){
                    temp_sum = int(letter_one) - 96;

                    sum += temp_sum;
                  
                }

                else{
                        temp_sum = int(letter_one) - 38;
                        sum += temp_sum;
                   
                }
                check = false;
                new_index_one = 0;
                new_index_two = 0;
                new_index_three = 0;

            }

            else{
                letter_one = letter_temp;
            }




        

        

        }

        cout << endl << sum;
        

    }





}