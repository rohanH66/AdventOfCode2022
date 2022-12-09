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
        checkedline = input.substr(i, 4);

        
        if (checkedline[j] == checkedline[j+1] || checkedline[j] == checkedline[j+2] || checkedline[j] == checkedline[j+3]){
            
            count++; 
            counter = 1;   

        }
        
        else if(checkedline[j+1] == checkedline[j+2] || checkedline[j+1] == checkedline[j+3]){
            if(counter != 1){
                count++;
                counter = 2;
            }
        }
        
        else if(checkedline[j+2] == checkedline[j+3]){
            if(counter != 1 || counter != 2){
                count++;
                counter = 3;
            }
        }
        else{
            count += 4;
            break;
        }
        
        
        failed = 0; 

        counter = 0;

    

    }

    cout << checkedline << endl;
    std::cout << count;


}