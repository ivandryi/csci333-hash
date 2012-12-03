#include "Hashtable.h"
#include <list>
#include <string>
#include <assert.h>

template <typename V>
Hashtable<V>::Hashtable(int s) {
  size = s;
  table = new std::list<Entry<V> >* [size];  
  for (int i = 0; i < size; i++) {
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
int Hashtable<V>::hashFunction(std::string k) {
  int hash;
  int sum = 0;
  for (int i = 0; i < (int) k.size(); i++) {
    sum = sum + (int) k[i];
  }
  hash = sum % size;
  return hash;
}

template <typename V>
void Hashtable<V>::insert(std::string k, V v) {
  int x = hashFunction(k);
  if (table[x] == 0) {
    std::list<Entry<V> > nList;
    nList.push_back(Entry<V>(k, v));
    table[x] = &nList;
  } else {
    typename std::list<Entry<V> >::iterator it;
    it = (*table[x]).begin();
    std::string key;
    while (it != (*table[x]).end()) {
      key = (*it).getKey();
      if (key.compare(k) == 0) {
	(*it).setValue(v);
	return;
      }
      it++;
    }
    (*table[x]).push_back(Entry<V>(k, v));
  }
}

template <typename V>
V Hashtable<V>::find(std::string k) {
  int x = hashFunction(k);
  assert (table[x] != 0);
  typename std::list<Entry<V> >::iterator it;
  it = (*table[x]).begin();
  std::string key;
  while (it != (*table[x]).end()) {
    key = (*it).getKey();
    if (key.compare(k) == 0)
      return (*it).getValue();
    it++;
  }
  return V();
}

template class Hashtable<int>;
template class Hashtable<double>;
template class Hashtable<std::string>;
