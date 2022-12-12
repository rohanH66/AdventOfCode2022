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
    string input_one;
    string input_two;
    string input_three;
    string compartment_one;
    string compartment_two;
    vector <char> temp_val;
    int index;
    char letter;
    int temp_sum = 0;
    int sum = 0;
    char letter_temp;
    int temp_index;
    bool check = false;
    bool check_2 = false;
    int temp_sum_two;
    int length_one;
    int length_two;


    for (int i = 0; i < 100; i++){
        cin >> input_one;
        cin >> input_two;
        cin >> input_three;

        cout << input_one << endl;
        cout << input_two << endl;
        cout << input_three << endl;

        if (input_one.length() > input_two.length()){
            length_one = input_one.length();
        }
        else{
            length_one = input_two.length();
        }

        if (input_three.length() > input_two.length()){
            length_two = input_three.length();
        }
        else{
            length_two = input_two.length();
        }

        



        for (int j = 0; j < length_one; j++){
            if (input_one.find(input_two[j]) != string::npos){

                index = input_one.find(input_two[j]);
                letter = input_one[index];
                cout << letter << " one" << endl;
                 
                //cout << endl << letter << j << "letter one";

                for (int x = 0; x < length_two; x++){
                    if(input_three.find(input_two[x]) != string::npos){
                        temp_index = input_three.find(input_two[x]);
                        letter_temp = input_three[temp_index];

                        cout << letter_temp << " three" << endl;
                        //cout << endl << letter_temp << x << "letter temp";
                       
                        if (letter == letter_temp){
                            cout << letter_temp << " two" << endl;
                            if (islower(letter)){
                                temp_sum = int(letter) - 96;
                                //cout << "we got here (1)";
                                sum += temp_sum;
                                //cout << endl << letter;
                                
                            }

                            else{
                                temp_sum_two = int(letter);
                                //cout << endl << letter;
                                //cout << temp_sum_two << endl;
                                temp_sum = temp_sum_two - 38;
                                //cout << temp_sum;
                                sum += temp_sum;
                                //cout << endl <<  "we got here (9)";
                            }
                            check = true;
                            break;
                        }
                        
                        
                            
                    }

                    else if (x == input_two.length()){
                        break;
                    }

                    

                }

                if (check){
                    //cout << "we got here (3)";
                    check_2 = true;
                    break;
                }

                
            }
                
                

            else{
                
            }
            
            check = false; 
  


        
        }

        

        

        

    }

    cout << endl << sum;
        





}