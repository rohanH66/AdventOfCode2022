#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;

int end_elf_1;
int start_elf_1;
int start_elf_2;
int end_elf_2;
char slash;
char comma;
int input;
int count = 0;

int main() {
    
    for(int i = 0; i < 1000; i++){
        cin >> start_elf_1 >> slash >> end_elf_1 >> comma >> start_elf_2 >> slash >> end_elf_2;

        if(start_elf_1 <= start_elf_2 && end_elf_1 >= end_elf_2){
            count ++;
        }
        else if (start_elf_2 <= start_elf_1 && end_elf_2 >= end_elf_1){
            count ++;
        }
        else{

        }
    }
    cout << count;
}