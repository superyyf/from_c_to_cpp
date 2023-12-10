#include <stdio.h>

struct Computer{
  char* host_name;
  int cpu_num;
  void (*my_print_info)(const struct Computer* computer);
};

void print_info(const struct Computer* computer){
  printf("Computer %s has %d cores.\n", computer->host_name, computer->cpu_num);
}

int main(){
  struct Computer zbook;
  zbook.host_name = "zbook";
  zbook.cpu_num = 16;
  zbook.my_print_info = print_info;
  zbook.my_print_info(&zbook);
}