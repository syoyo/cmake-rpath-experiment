#include <iostream>

#include "mylib.hh"

int main(int argc, char **argv)
{
  (void)argv;

  float ret = myadd(float(argc), float(argc) + 1.2f);

  std::cout << "ret = " << ret << "\n";

  return 0;
}
