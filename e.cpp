#include <iostream>

void dosayhello(std::ostream& output)
{
  output << "Hello, world." << std::endl;
}

main()
{
  dosayhello(std::cout);
}
