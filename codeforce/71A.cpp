#include <iostream>
#include <string>

int main(){
    int count{};
    std::cin >> count;
    for (int i{}; i < count; i++){
        std::string word{};
        std::cin >> word;
        int length{static_cast<int>(word.length())};
        if (length > 10){
            std::cout << word[0] << length-2 << word[length-1] << '\n';
        }
        else{
            std::cout << word << '\n';
        }
    }
}