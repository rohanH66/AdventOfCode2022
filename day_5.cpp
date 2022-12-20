#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;



int main() {
   
    
    
    

     //not important input;
    
    vector<char> one;
    vector<char> two;
    vector<char> three;
    vector<char> four;
    vector<char> five;
    vector<char> six;
    vector<char> seven;
    vector<char> eight;
    vector<char> nine;
    
    string to;
    string from;
    string numbers;
    string temp_letter;
    string temp_input;
    string blank;
    string move;
    int quantity;
    int stack_one;
    int stack_two;




    
    

    

    


    for(int j = 0; j < 8; j++){
        getline(cin, temp_input);

        for(int i = 0; i < temp_input.size(); i++){
            temp_letter = temp_input[i];
            if (temp_letter == " "){
                

            }

            else if (temp_letter == "[" || temp_letter == "]" ){

            }

            else{
                /*if (i == 1){
                    one.append(input_1[i]);
                }*/
                
                if (i == 1){
                    one.push_back(temp_input[i]);
                }
                else if (i == 5){
                    two.push_back(temp_input[i]);
                }
                else if (i == 9){
                    three.push_back(temp_input[i]);
                }
                else if (i == 13){
                    four.push_back(temp_input[i]);
                }
                else if (i == 17){
                    five.push_back(temp_input[i]);
                }
                else if (i == 21){
                    six.push_back(temp_input[i]);
                }
                else if (i == 25){
                    seven.push_back(temp_input[i]);
                }
                else if (i == 29){
                    eight.push_back(temp_input[i]);
                }
                else if (i == 33){
                    nine.push_back(temp_input[i]);
                }
                else{

                }

            }
        }


        
    }

    

    getline(cin, numbers);

    for (int j = 0; j < 501; j++){
        cin >> move >> quantity >> from >> stack_one >> to >> stack_two;

        for (int x = 0; x < quantity; x++){
            
        }
    }

}