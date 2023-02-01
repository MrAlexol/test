#include <iostream>

int main(int argc, char** argv) {
  if (argc > 1)
    std::cout << "Bonjour, " << argv[1] << "!" << std::endl;
  else
    std::cout << "Bonjour, le Monde!" << std::endl;
}
