// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_DATA_STRUCTURES_LINKED_LIST_H
#define CADT_DATA_STRUCTURES_LINKED_LIST_H

#include <iostream>

#include "node.h"

namespace data_structures {

class LinkedList {
 private:
  Node *head = nullptr;
  Node *tail = nullptr;
  int length = 0;

 public:
  LinkedList();
  void add(int value);
  void addEnd(int value);
  void addFront(int value);
  void clear();
  bool contains(int value);
  int getFirst();
  int getLast();
  bool isEmpty();
  int peek();
  int peekFirst();
  int peekLast();
  int remove(int value);

  // Removes and returns the first value in the list.
  int removeFirst();

  // Removes and returns the last value in the list.
  int removeLast();

  bool search(int value);
  int size() const;
  std::string toString();
};

} // namespace data_structures

#endif // CADT_DATA_STRUCTURES_LINKED_LIST_H
