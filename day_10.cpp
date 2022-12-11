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
    

    for (int i = 0; i < 140; i++){
        cin >> input;

        if (input == "noop"){
            
            cycles += 1;

            if (cycles == 20){
            running_strength += cpu_register * 20;
            }

            if (cycles == 60){
                running_strength += cpu_register * 60;
            }

            if (cycles == 100){
                running_strength += cpu_register * 100;
            }

            if (cycles == 140){
                running_strength += cpu_register * 140;
            }

            if (cycles == 180){
                running_strength += cpu_register * 180;
            }

            if (cycles == 220){
                running_strength += cpu_register * 220;
            }

            else{
                
            }
            
        }

        

        if (input != "noop") {
            
            cin >> integer;
        }
        
        
        

        

        

        if (input == "addx"){
            cycles += 1;

            if (cycles == 20){
            running_strength += cpu_register * 20;
            }

            if (cycles == 60){
                running_strength += cpu_register * 60;
            }

            if (cycles == 100){
                running_strength += cpu_register * 100;
            }

            if (cycles == 140){
                running_strength += cpu_register * 140;
            }

            if (cycles == 180){
                running_strength += cpu_register * 180;
            }

            if (cycles == 220){
                running_strength += cpu_register * 220;
            }

            else{
                
            }
            

            cycles += 1; 

            
            if (cycles == 20){
            running_strength += cpu_register * 20;
            }

            if (cycles == 60){
                running_strength += cpu_register * 60;
            }

            if (cycles == 100){
                running_strength += cpu_register * 100;
            }

            if (cycles == 140){
                running_strength += cpu_register * 140;
            }

            if (cycles == 180){
                running_strength += cpu_register * 180;
            }

            if (cycles == 220){
                running_strength += cpu_register * 220;
            }

            else{
                
            }

            cpu_register += integer;

            
        }


    }

    cout << running_strength;











}