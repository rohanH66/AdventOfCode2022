#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;


int main() {

    
    int cycles = 0;
    int cpu_register = 1;
    string input;
    int integer = 0;
    int sum;
    char space;
    string temp_val;
    string temp_string;
    int running_strength = 0;
    int modifier = 0;
    string gridmap;
    

    for (int i = 0; i < 140; i++){
        cin >> input;

        if (input == "noop"){
            
            cycles += 1;


            if (cycles % 40 == 0){
                modifier += 40;
            }

            if (abs((cycles-1) - modifier) < 2){
                gridmap[cycles-1].append("#");
            }
            else{
               gridmap[cycles-1] = "."; 
            }

           
        }

        

        if (input != "noop") {
            
            cin >> integer;
        }
        
        
        if (input == "addx"){
            cycles += 1;

            if (cycles % 40 == 0){
                modifier += 40;
            }

            if (abs((cycles-1) - modifier) < 2){
                gridmap[cycles-1] = "#";
            }
            else{
               gridmap[cycles-1] = "."; 
            }
           
            cycles += 1;

            if (cycles % 40 == 0){
                modifier += 40;
            }

            if (abs((cycles-1) - modifier) < 2){
                gridmap[cycles-1] = "#";
            }
            else{
               gridmap[cycles-1] = "."; 
            } 
           
            cpu_register += integer;

            
        }

        for(int i = 0; i < gridmap.length(); i ++) {
            if(i % 40 == 0 && i != 0) {
                cout << i;
            }
            cout << gridmap[i];
        }


    }










}