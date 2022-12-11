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
    string compartment_one;
    string compartment_two;
    vector <char> temp_val;
    int index;
    char letter;
    int temp_sum;
    int sum;


    for (int i = 0; i < 300; i++){
        cin >> input;

        compartment_one = input.substr(0, input.size()/2);
        compartment_two = input.substr(input.size()/2);

        cout << compartment_one << endl;
        cout << compartment_two << endl;

        for (int j = 0; j < compartment_one.length(); j++){
            if (compartment_one.find(compartment_two[j]) != string::npos){
                cout << "char  found" << endl;
                index = compartment_one.find(compartment_two[j]);
                letter = compartment_one[index];
                cout << letter;
                if (islower(letter)){
                    temp_sum = int(letter) - 96;

                    sum += temp_sum;
                }

                else{
                    temp_sum = int(letter) - 38;
                    sum += temp_sum;
                }
                

                
                break;

            }

            else{
                
            }   

        }

        cout << endl << sum;
        

    }





}