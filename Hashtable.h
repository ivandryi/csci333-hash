#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__

#include "Entry.h"
#include <string>
#include <list>

template <typename V>
class Hashtable {
 private:
  <std::list<Entry<V>>>** table;
  int size;
 public:
  Hashtable<V>(int s);
  ~Hashtable<V>();
  void insert(std::string k, V v);
  V find(std::string k);
};

#endif
