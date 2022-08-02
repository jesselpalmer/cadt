// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_DATA_STRUCTURES_NODE_H
#define CADT_DATA_STRUCTURES_NODE_H

namespace data_structures {

class Node {
private:
  int value;
  struct Node* prev;
  struct Node* next;

public:
  Node();
  ~Node();
  Node(int value);
  int getValue();
  void setValue(int value);
  Node* getPrev();
  void setPrev(Node* prev);
  Node* getNext();
  void setNext(Node* next);
};

} // namespace data_structures

#endif // CADT_DATA_STRUCTURES_NODE_H
