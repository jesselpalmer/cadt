// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node.h"

Node::Node(int value) {
  Node::value = value;
  Node::prev = nullptr;
  Node::next = nullptr;
}

int Node::getValue() {
  return Node::value;
}

void Node::setValue(int value) {
  Node::value = value;
}

Node* Node::getPrev() {
  return Node::prev;
}

void Node::setPrev(Node* prev) {
  Node::prev = prev;
}

Node* Node::getNext() {
  return Node::next;
}

void Node::setNext(Node *next) {
  Node::next = next;
}
