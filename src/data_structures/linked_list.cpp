// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <iostream>

#include "linked_list.h"

namespace data_structures {

LinkedList::LinkedList() = default;

LinkedList::LinkedList(int value) {
  addToFront(value);
}

LinkedList::~LinkedList() {
  std::cout << "all done";
}

void LinkedList::addToEnd(int value) {
  Node *newNode = new Node(value);

  if (LinkedList::head == nullptr) {
    LinkedList::head = newNode;
    LinkedList::tail = newNode;
  } else {
    LinkedList::tail->setNext(newNode);
    LinkedList::tail = newNode;
  }

  LinkedList::length++;
}

void LinkedList::addToFront(int value) {
  Node *newNode = new Node(value);

  if (LinkedList::head == nullptr) {
    LinkedList::head = newNode;
    LinkedList::tail = newNode;
  } else {
    newNode->setNext(LinkedList::head);
    LinkedList::head->setPrev(newNode);
    LinkedList::head = newNode;
  }

  LinkedList::length++;
}

int LinkedList::removeFirst() {
  Node *firstNode = LinkedList::head;
  LinkedList::head = firstNode->getNext();
  LinkedList::length--;
  return firstNode->getValue();
}

int LinkedList::size() const {
  return LinkedList::length;
}

void LinkedList::toString() {
  Node *currentNode = LinkedList::head;

  while (currentNode != nullptr) {
    std::cout << currentNode->getValue() << std::endl;
    currentNode = currentNode->getNext();
  }
}

} // namespace data_structures
