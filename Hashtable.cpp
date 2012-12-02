#include "Hashtable.h"
#include <list>
#include <string>

template <typename V>
Hashtable<V>::Hashtable(int s) {
  size = s;
  table = new std::list<Entry<V> >* [s];  
  for (int i = 0; i < s; i++) {
    table[i] = 0;
  }
}

template <typename V>
Hashtable<V>::~Hashtable() {
  for (int i = 0; i < size; i++) {
    if (table[i] != 0)
      delete table[i];
  }
  delete[] table;
}

template <typename V>
void Hashtable<V>::insert(std::string k, V v) {
  key = k;
  value = v;
}

template <typename V>
V Hashtable<V>::find(std::string k) {
  key = k;
  return value;
}

template class Hashtable<int>;
template class Hashtable<double>;
template class Hashtable<std::string>;
