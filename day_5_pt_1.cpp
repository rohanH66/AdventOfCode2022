#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;



int main() {
   
    
    
    

     //not important input;
    //define vectors for stacks (append later)
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

    

    for (int x = 0; x < 501; x++ ){
        cin >> move >> quantity >> from >> stack_one >> to >> stack_two; 
        cout << quantity << endl << stack_one << endl << stack_two;
        
        for (int y = 0; y < quantity; y++){
            if (stack_one == 1){
                if(stack_two == 2){
                    two.insert(two.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), one[0]);
                    one.erase(one.begin());
                    
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), one[0]);
                    one.erase(one.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), one[0]);
                    one.erase(one.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 2){
                if(stack_two == 1){
                    one.insert(one.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), two[0]);
                    two.erase(two.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), two[0]);
                    two.erase(two.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 3){
                if(stack_two == 1){
                    one.insert(one.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), three[0]);
                    three.erase(three.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), three[0]);
                    three.erase(three.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 4){
                if(stack_two == 1){
                    one.insert(one.begin(), four[0]);
                    four.erase(four.begin());
                    
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), four[0]);
                    four.erase(four.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), four[0]);
                    four.erase(four.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 5){
                if(stack_two == 1){
                    one.insert(one.begin(), five[0]);
                    five.erase(five.begin());
                    
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), five[0]);
                    five.erase(five.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), five[0]);
                    five.erase(five.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 6){
                if(stack_two == 1){
                    one.insert(one.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), six[0]);
                    six.erase(six.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), six[0]);
                    six.erase(six.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 7){
                if(stack_two == 1){
                    one.insert(one.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), seven[y]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), seven[0]);
                    seven.erase(seven.begin());
                }
                else{

                }
               
            }

            else if (stack_one == 8){
                if(stack_two == 1){
                    one.insert(one.begin(), eight[0]);
                    eight.erase(eight.begin());
                    
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else if(stack_two == 9){
                    nine.insert(nine.begin(), eight[0]);
                    eight.erase(eight.begin());
                }
                else{

                }
               
            }

            else {
                if(stack_two == 1){
                    one.insert(one.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 2){
                    two.insert(two.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 3){
                    three.insert(three.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 4){
                    four.insert(four.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 5){
                    five.insert(five.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 6){
                    six.insert(six.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 7){
                    seven.insert(seven.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                else if(stack_two == 8){
                    eight.insert(eight.begin(), nine[0]);
                    nine.erase(nine.begin());
                }
                
                else{

                }
               
            }
               
            
            
            
        }

        

    }

        

        


    string tempchar;

    for (int y = 0; y < four.size(); y++){
        cout << four[y] << endl;
         
    }

    

   
    cout << endl << one[0];
    cout << two[0];
    cout << three[0];
    cout << four[0];
    cout << five[0];
    cout << six[0];
    cout << seven[0];
    cout << eight[0];
    cout << nine[0];











    
    /*for (int j = 0; j < nine.size(); j++){
        cout << "one" << nine.at(j) << endl;
        cout << "two" << two.at(j) << endl;
        cout << "3" << three.at(j) << endl;
        cout << 4 << four.at(j) << endl;
        cout << 5 << five.at(j) << endl;
        cout << 6 << six.at(j) << endl;
        cout << 7 << seven.at(j) << endl;
        cout << 8 << eight.at(j) << endl;


    }*/










}