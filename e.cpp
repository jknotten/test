#include <iostream>

void sayhello(std::ostream& output)
{
  output << "Hello, world." << std::endl;
}

main()
{
  sayhello(std::cout);
}
