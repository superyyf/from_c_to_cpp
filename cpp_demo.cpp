#include <iostream>
#include <vector>

class Animal
{
public :
    virtual void shout() = 0;
};
class Dog :public Animal
{
public:
    virtual void shout(){ std::cout << "wang wang"<< std::endl; }
};
class Cat :public Animal
{
public:
    virtual void shout(){ std::cout << "miao miao"<< std::endl; }
};
class Bird : public Animal
{
public:
    virtual void shout(){ std::cout << "ge ge"<< std::endl; }
};

int main()
{
    std::vector<Animal*>anims;
 
    Animal * anim1 = new Dog;
    Animal * anim2 = new Cat;
    Animal * anim3 = new Bird;
 
    //处理异质类集合
    anims.push_back(anim1);
    anims.push_back(anim2);
    anims.push_back(anim3);
 
    for (auto & i : anims)
    {
        i->shout();
    }
    delete anim1;
    delete anim2;
    delete anim3;

    return 0;
}