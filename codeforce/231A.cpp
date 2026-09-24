#include <iostream>

int main(){
    int count{};
    std::cin >> count;
    int cum{};
    for (int i{}; i<count; i++){
        int p1{};
        int p2{};
        int p3{};
        std::cin >> p1 >> p2 >>p3;
        if (p1+p2+p3 > 1){
            cum++;
        }
    }
    std::cout << cum << '\n';
}