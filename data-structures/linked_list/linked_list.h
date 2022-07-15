// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_LINKED_LIST_H
#define CADT_LINKED_LIST_H

#include <iostream>

#include "../node/node.h"

class LinkedList {
private:
  Node* head = nullptr;
  Node* tail = nullptr;
  int length = 0;

public:
  LinkedList();
  LinkedList(int value);
  ~LinkedList();
  void addToEnd(int value);
  void addToFront(int value);
  Node* getFirst();
  Node* getLast();
  int removeFirst();
  int size() const;
  void toString();
};

#endif //CADT_LINKED_LIST_H
