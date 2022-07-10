//
// Created by Jesse Palmer on 6/22/22.
//

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
  int removeFirst();
  int size() const;
  void toString();
};

#endif //CADT_LINKED_LIST_H
