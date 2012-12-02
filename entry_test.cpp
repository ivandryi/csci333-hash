#include "Entry.h"
#include <string>
#include <iostream>

using std::string;

int main() {
  Entry<int> entry1("hello", 5);
  Entry<double> entry2("hello1", 2.5);
  Entry<string> entry3("hello3", "bye");

  std::cout << entry1.getKey() << std::endl;
  std::cout << entry2.getKey() << std::endl;
  std::cout << entry3.getKey() << std::endl;

  std::cout << entry1.getValue() << std::endl;
  std::cout << entry2.getValue() << std::endl;
  std::cout << entry3.getValue() << std::endl;

  entry1.setValue(50);
  entry2.setValue(250.5);
  entry3.setValue("Hello, world!!!");

  std::cout << entry1.getValue() << std::endl;
  std::cout << entry2.getValue() << std::endl;
  std::cout << entry3.getValue() << std::endl;
}
