// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "node.h"
#include <iostream>

namespace data_structures {

Node::Node() {
  value = NULL;
  next = nullptr;
  prev = nullptr;
}

Node::~Node() {
  value = NULL;
  next = nullptr;
  prev = nullptr;
}

Node::Node(int val) {
  value = val;
  next = nullptr;
  prev = nullptr;
}

int Node::getValue() {
  return value;
}

void Node::setValue(int val) {
  value = val;
}

Node *Node::getPrev() {
  return prev;
}

void Node::setPrev(Node *prevNode) {
  prev = prevNode;
}

Node *Node::getNext() {
  return next;
}

void Node::setNext(Node *nextNode) {
  next = nextNode;
}

} // namespace data_structures
