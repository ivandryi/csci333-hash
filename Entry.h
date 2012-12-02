#ifndef __ENTRY_H__
#define __ENTRY_H_
#include <string>

template <typename V>
class Entry {
 private:
  std::string key;
  V value;
 public:
  Entry<V>(std::string k, V v);
  std::string getKey();
  V getValue();
  void setValue(V v);
};

#endif
