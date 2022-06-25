//
// Created by Jesse Palmer on 6/22/22.
//

#ifndef CADT_NODE_H
#define CADT_NODE_H

struct Node {
  int value;
  struct Node* prev;
  struct Node* next;
};

#endif //CADT_NODE_H
