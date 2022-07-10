// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_NODE_H
#define CADT_NODE_H

class Node {
private:
  int value;

public:
  struct Node* prev;
  struct Node* next;
  Node(int value);
  int getValue();
};

#endif //CADT_NODE_H
