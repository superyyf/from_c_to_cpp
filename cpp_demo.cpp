class Mouse{
public:
  void click(){
    /* do some thing */
  }
};

class Zbook{
  Mouse *m;
  void play(){
    if(m != nullptr){
      m->click();
    }
  }
};



