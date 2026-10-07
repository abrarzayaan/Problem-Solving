#include <iostream>

int main(){
    int w = 0;
    std::cin >> w;

    if(w > 0 && w < 101){
        if(w%2 == 0){
            std::cout << "YES";
        }
        else{
            std::cout << "NO";
        }
    }
    else{
        std::cout << "the input number is not in between the range of w (1≤ w≤ 100)";
    }
}