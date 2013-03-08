#include <iostream>

void greet(std::ostream& output)
{
  output << "Hello, world." << std::endl;
}

main()
{
  greet(std::cout);
}
