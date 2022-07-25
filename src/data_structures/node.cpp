// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node.h"
#include <iostream>

namespace data_structures {

Node::Node() {}

Node::Node(int value) {
  Node::value = value;
  Node::next = nullptr;
  Node::prev = nullptr;
}

Node::~Node() {
  Node::value = NULL;
  Node::next = nullptr;
  Node::prev = nullptr;
}

int Node::getValue() {
  return Node::value;
}

void Node::setValue(int value) {
  Node::value = value;
}

Node *Node::getPrev() {
  return Node::prev;
}

void Node::setPrev(Node *prev) {
  Node::prev = prev;
}

Node *Node::getNext() {
  return Node::next;
}

void Node::setNext(Node *next) {
  Node::next = next;
}

} // namespace data_structures
