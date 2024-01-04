#include <iostream>
#include <string>

class Computer{
private:
  int screen;

protected:
  char* type;
  
public:
  virtual void power_up(){
    screen = 1;
    type = "computer";
    std::cout << std::string(type) << " power up with screen " << screen << std::endl;
  }
};

class Zbook : public Computer{
private:
  int camera;

public:
  virtual void power_up(){
    // screen = 1;
    camera = 1;
    type = "notebook";
    std::cout << std::string(type) << " power up with camera " << camera << std::endl;
  }
};

int main(){
  Computer a;
  // a.screen = 2;
  // a.type = "iphone";
  a.power_up();
  Zbook z;
  // z.camera = 2;
  // z.type = "iphone";
  z.power_up();
}