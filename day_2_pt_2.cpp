#include <iostream>
#include <vector>
#include <string>
#include <string.h>



int main() {

    std::string me; //you
    std::string you; //me

    int my_score = 0;
    int your_score = 0;
    //x is loose
    //y is tie
    //z is win


    for (int i = 0; i < 2500; i++){
        std::cin >> you >> me;

        if (you == "A"){

            your_score = your_score + 1;

            if (me == "X"){
                my_score += 3;
                your_score +=6;

            }
            else if (me == "Y"){
                my_score += 1;
                your_score += 3;
                my_score += 3;
            }
            else if (me == "Z"){
                my_score += 2;
                my_score += 6;
            }
        }


        else if (you == "B"){

            your_score = your_score + 2;

            if (me == "X"){
                my_score += 1;
                your_score +=6;

            }
            else if (me == "Y"){
                my_score += 2;
                your_score += 3;
                my_score += 3;
            }
            else if (me == "Z"){
                my_score += 3;
                my_score += 6;
            }
        }


        else if (you == "C"){

            your_score = your_score + 3;

            if (me == "X"){
                my_score += 2;
                your_score +=6;

            }
            else if (me == "Y"){
                my_score += 3;
                your_score += 3;
                my_score += 3;
            }
            else if (me == "Z"){
                my_score += 1;
                my_score += 6;
            }
        }
    }

    std::cout << "Your score is: " << your_score;
    std::cout << "\n My score is: " << my_score;

}