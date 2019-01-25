#include <iostream>

template <bool X = true>
void myFxn(){
  std::cout << "Hello!" << std::endl;
  if (X){
    std::cout << "World!" << std::endl;
  }
}

#ifndef boolArg
#define boolArg true
#endif

int main(int argc, char** argv)
{
  myFxn<boolArg>();
  return 0;
}

