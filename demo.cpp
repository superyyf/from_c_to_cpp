#include <iostream>

struct Computer{
    int cpu;
    void Powerup();

};

struct Zbook : public Computer {
    int gpu;
};

int main(){
    struct Zbook my_zbook;
    std::cout << my_zbook.gpu << std::endl;
}