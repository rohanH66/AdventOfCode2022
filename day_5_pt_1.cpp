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
    int j;
    bool check = false;
    int failed;

    for (int i = 0; i < input.size() - 4; i++){
        checkedline = input.substr(i,i+4);


        for (int j = 0; j < checkedline.size(); j ++){
            if (checkedline[j] == checkedline[j+1]){
                
                count++;
                counter ++;
    

            }
            else if (checkedline[j] == checkedline[j+2]){
                
                count++;
                counter ++;
    

            }
            else if (checkedline[j] == checkedline[j+3]){
                
                count++;
                counter ++;
    

            }
            else if (checkedline[j] == checkedline[j+4]){
                
                count++;
                counter ++;
    

            }
            else{
                pog = checkedline[j];
                check = true;
                break;

            }
        }

        failed = 0; 

        counter = 0;

        if (check){
            break;
        }

    }

    cout << checkedline << endl;
    cout << j << endl;
    cout << count;


}