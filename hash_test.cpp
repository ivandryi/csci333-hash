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
  table->remove("helo");
  table->find("byd");
  delete table;
  Hashtable<std::string>* table1 = new Hashtable<std::string>(1);
  table1->insert("hello", "hello");
  table1->insert("hello", "bye");
  table1->remove("hello");
  table1->find("hello");
  table1->find("bye");
  delete table1;
  Hashtable<double>* table2 = new Hashtable<double>(5);
  table2->insert("helo", 2.2);
  table2->insert("hello", 5.5);
  table2->find("hello");
  table2->remove("hello");
}
