#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;



int main() {
    string input_1;
    string input_2;
    string input_3;
    string input_4;
    string input_5;
    string input_6;
    string input_7;
    string input_8;
    string temp_letter;
    string one;
    




    getline(cin, input_1);
    getline(cin, input_2);
    getline(cin, input_3);
    getline(cin, input_4);
    getline(cin, input_5);
    getline(cin, input_6);
    getline(cin, input_7);
    getline(cin, input_8);

    

    cout << input_1 << endl;
    cout << input_2 << endl;
    cout << input_3 << endl;
    cout << input_4 << endl;
    cout << input_5 << endl;
    cout << input_6 << endl;
    cout << input_7 << endl;
    cout << input_8 << endl;


    for(int i =0; i < input_1.length(); i++){
        temp_letter = input_1[i];
        if (temp_letter == " "){
            

        }

        else if (temp_letter == "[" || temp_letter == "]" ){

        }

        else{
            /*if (i == 1){
                one.append(input_1[i]);
            }*/
            cout << input_1[i] << endl;
        }
        
    }
    










}