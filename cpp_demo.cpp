#include <iostream>

class Computer {
public:
  Computer(const char* _host_name, int _cpu_num);
  ~Computer();
  void print_info();

private:
  const char* host_name_;
  int cpu_num_;
  uint8_t *data_;

};

Computer::Computer(const char* _host_name, int _cpu_num) : host_name_(_host_name), cpu_num_(_cpu_num) {
  data_ = (uint8_t*)malloc(512);
}

Computer::~Computer(){
  free(data_);
}

void Computer::print_info(){
  std::cout << "Computer " << this->host_name_ << " has " << this->cpu_num_ << " cores." << std::endl;
}

int main(){
  Computer zbook("zbook", 16);
}



