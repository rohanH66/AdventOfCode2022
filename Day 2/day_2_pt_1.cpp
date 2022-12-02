#include <iostream>
#include <vector>
#include <string>
#include <string.h>

//note - my score and your score is reversed but corrected at the end

int main() {

    std::string me;
    std::string you;

    int my_score = 0;
    int your_score = 0;


    for (int i = 0; i < 2500; i++){
        std::cin >> me >> you;

        if (me == "A"){

            my_score = my_score + 1;

            if (you == "X"){
                your_score = your_score + 1;
                my_score = my_score + 3; //tie
                your_score = your_score + 3; //tie
            }
            else if (you == "Y"){
                your_score = your_score + 2;
                your_score = your_score + 6; //loss

            }
            else if (you == "Z"){
                your_score = your_score + 3;
                my_score = my_score + 6; // win
            }
        }


        else if (me == "B"){

            my_score = my_score + 2;

            if (you == "X"){
                your_score = your_score + 1;
                my_score = my_score + 6; //win
            }
            else if (you == "Y"){
                your_score = your_score + 2; 
                my_score = my_score + 3; //tie
                your_score = your_score + 3; //tie
            }
            else if (you == "Z"){
                your_score = your_score + 3;
                your_score = your_score + 6; //loss
            }
        }


        else if (me == "C"){

            my_score = my_score + 3;

            if (you == "X"){
                your_score = your_score + 1;
                your_score = your_score + 6; //loss
            }
            else if (you == "Y"){
                your_score = your_score + 2;
                my_score = my_score + 6; //win
            }
            else if (you == "Z"){
                your_score = your_score + 3;
                my_score = my_score + 3; //tie
                your_score = your_score + 3; //loss
            }
        }
    }

    std::cout << "Your score is: " << my_score;
    std::cout << "\n My score is: " << your_score;

}