#include <iostream>

int main(){
    int inputNumber = 0;
    std::cin >> inputNumber;

    if (inputNumber > 0 && inputNumber < 10)
    {
        if(inputNumber == 1){
            std::cout << "one";
        }
        else if(inputNumber == 2){
            std::cout << "two";
        }
        else if(inputNumber == 3){
             std::cout << "three";
        }
        else if(inputNumber == 4){
             std::cout << "four";
        }
        else if(inputNumber == 5){
             std::cout << "five";
        }
        else if(inputNumber == 6){
             std::cout << "six";
        }
        else if(inputNumber == 7){
             std::cout << "seven";
        }
        else if(inputNumber == 8){
             std::cout << "eight";
        }
        else if(inputNumber == 9){
             std::cout << "nine";
        }
    }
    else {
        std::cout << "Greater than 9";
    }
    return 0;
    
}