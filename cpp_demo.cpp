class Computer{
public:
  Mouse m;
  virtual void play(){
    m.click();
  }
};

class Zbook : public Computer{
public:
  KeyBoard k;
  virtual void play(){
      m.click();
      k.hit();
  }
};



