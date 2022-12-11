#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;



int main() {
    string input;
    int count = 0;;
    string checkedline;
    cin >> input;
    string pog;
    int counter = 0;
    int j=0;
    bool check = false;
    int failed;
    int size;

    for (int i = 0; i < input.size(); i++){
        checkedline = input.substr(i, 14);

        
        if (checkedline[j] == checkedline[j+1] || checkedline[j] == checkedline[j+2] || checkedline[j] == checkedline[j+3] || checkedline[j] == checkedline[j+4] || checkedline[j] == checkedline[j+5] || checkedline[j] == checkedline[j+6] || checkedline[j] == checkedline[j+7] || checkedline[j] == checkedline[j+8] || checkedline[j] == checkedline[j+9] || checkedline[j] == checkedline[j+10] || checkedline[j] == checkedline[j+11] || checkedline[j] == checkedline[j+12] || checkedline[j] == checkedline[j+13]){
            
            count++; 
            counter = 1;   

        }
        
        else if (checkedline[j+1] == checkedline[j+2] || checkedline[j+1] == checkedline[j+3] || checkedline[j+1] == checkedline[j+4] || checkedline[j+1] == checkedline[j+5] || checkedline[j+1] == checkedline[j+6] || checkedline[j+1] == checkedline[j+7] || checkedline[j+1] == checkedline[j+8] || checkedline[j+1] == checkedline[j+9] || checkedline[j+1] == checkedline[j+10] || checkedline[j+1] == checkedline[j+11] || checkedline[j+1] == checkedline[j+12] || checkedline[j+1] == checkedline[j+13]){
            
            count++; 
            counter = 2;   

        }

        else if (checkedline[j+2] == checkedline[j+3] || checkedline[j+2] == checkedline[j+4] || checkedline[j+2] == checkedline[j+5] || checkedline[j+2] == checkedline[j+6] || checkedline[j+2] == checkedline[j+7] || checkedline[j+2] == checkedline[j+8] || checkedline[j+2] == checkedline[j+9] || checkedline[j+2] == checkedline[j+10] || checkedline[j+2] == checkedline[j+11] || checkedline[j+2] == checkedline[j+12] || checkedline[j+2] == checkedline[j+13]){
            
            count++; 
            counter = 3;   

        }
        else if (checkedline[j+3] == checkedline[j+4] || checkedline[j+3] == checkedline[j+5] || checkedline[j+3] == checkedline[j+6] || checkedline[j+3] == checkedline[j+7] || checkedline[j+3] == checkedline[j+8] || checkedline[j+3] == checkedline[j+9] || checkedline[j+3] == checkedline[j+10] || checkedline[j+3] == checkedline[j+11] || checkedline[j+3] == checkedline[j+12] || checkedline[j+3] == checkedline[j+13]){
            
            count++; 
            counter = 4;   

        }
        else if (checkedline[j+4] == checkedline[j+5] || checkedline[j+4] == checkedline[j+6] || checkedline[j+4] == checkedline[j+7] || checkedline[j+4] == checkedline[j+8] || checkedline[j+4] == checkedline[j+9] || checkedline[j+4] == checkedline[j+10] || checkedline[j+4] == checkedline[j+11] || checkedline[j+4] == checkedline[j+12] || checkedline[j+4] == checkedline[j+13]){
            
            count++; 
            counter = 5;   

        }
        else if (checkedline[j+5] == checkedline[j+6] || checkedline[j+5] == checkedline[j+7] || checkedline[j+5] == checkedline[j+8] || checkedline[j+5] == checkedline[j+9] || checkedline[j+5] == checkedline[j+10] || checkedline[j+5] == checkedline[j+11] || checkedline[j+5] == checkedline[j+12] || checkedline[j+5] == checkedline[j+13]){
            
            count++; 
            counter = 6;   

        }
        else if (checkedline[j+6] == checkedline[j+7] || checkedline[j+6] == checkedline[j+8] || checkedline[j+6] == checkedline[j+9] || checkedline[j+6] == checkedline[j+10] || checkedline[j+6] == checkedline[j+11] || checkedline[j+6] == checkedline[j+12] || checkedline[j+6] == checkedline[j+13]){
            
            count++; 
            counter = 7;   

        }
        else if (checkedline[j+7] == checkedline[j+8] || checkedline[j+7] == checkedline[j+9] || checkedline[j+7] == checkedline[j+10] || checkedline[j+7] == checkedline[j+11] || checkedline[j+7] == checkedline[j+12] || checkedline[j+7] == checkedline[j+13]){
            
            count++; 
            counter = 8;   

        }
        else if (checkedline[j+8] == checkedline[j+9] || checkedline[j+8] == checkedline[j+10] || checkedline[j+8] == checkedline[j+11] || checkedline[j+8] == checkedline[j+12] || checkedline[j+8] == checkedline[j+13]){
            
            count++; 
            counter = 9;   

        }
        else if (checkedline[j+9] == checkedline[j+10] || checkedline[j+9] == checkedline[j+11] || checkedline[j+9] == checkedline[j+12] || checkedline[j+9] == checkedline[j+13]){
            
            count++; 
            counter = 10;   

        }
        else if (checkedline[j+10] == checkedline[j+11] || checkedline[j+10] == checkedline[j+12] || checkedline[j+10] == checkedline[j+13]){
            
            count++; 
            counter = 11;   

        }
        else if (checkedline[j+11] == checkedline[j+12] || checkedline[j+11] == checkedline[j+13]){
            
            count++; 
            counter = 12;   

        }
        else if (checkedline[j+12] == checkedline[j+13]){
            
            count++; 
            counter = 13;   

        }
        
        
        else{
            count += 14;
            break;
        }
        
        
        failed = 0; 

        counter = 0;

    

    }

    cout << checkedline << endl;
    std::cout << count;


}