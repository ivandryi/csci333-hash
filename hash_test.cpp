#include "Hashtable.h"
#include <string>

int main() {

  Hashtable<int>* table = new Hashtable<int>(1);
  table->insert("hello", 5);
  table->insert("hello", 8);
  table->insert("bye", 13);
  table->find("hello");
  table->find("bye");
  table->insert("hola", 200);
  table->insert("helo", 26);
  table->find("byd");
  delete table;
  Hashtable<std::string>* table1 = new Hashtable<std::string>(1);
  table1->insert("hello", "hello");
  table1->insert("hello", "bye");
  table1->find("bye");
}
