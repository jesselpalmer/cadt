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
  int removeFirst();
  void addToEnd(int value);
  int size() const;
  void toString();
};

#endif //CADT_LINKED_LIST_H
