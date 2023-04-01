#include <iostream>
#include <string.h>
#include <string>
int main() {
	int test_cases;
	std::string test; 
	std::cin >> test_cases;
	for (int i = 0; i < test_cases; i++){
		getline(std::cin, test);
		for (int j = 0; j < test.length(); j++){
            int index = test.find(test[j]);
            if (index != j+1 || index != j-1){
                test.replace(j, 1, test[index]);
            }


        }
	}
}