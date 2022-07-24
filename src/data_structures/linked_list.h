// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

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
  LinkedList(int value);
  void addToEnd(int value);
  void addToFront(int value);
  int getFirst();
  int getLast();
  int removeFirst();
  int size() const;
  void toString();
};

} // namespace data_structures

#endif // CADT_DATA_STRUCTURES_LINKED_LIST_H
