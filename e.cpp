#include <iostream>

void dogreet(std::ostream& output)
{
  output << "Hello, world." << std::endl;
}

main()
{
  dogreet(std::cout);
}
