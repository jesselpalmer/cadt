// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <iostream>

#include "linked_list.h"

namespace data_structures {

LinkedList::LinkedList() = default;

void LinkedList::add(int value) {
  LinkedList::addEnd(value);
}

void LinkedList::addEnd(int value) {
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

void LinkedList::addFront(int value) {
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

int LinkedList::getFirst() {
  return LinkedList::head->getValue();
}

int LinkedList::getLast() {
  return LinkedList::head->getValue();
}

bool LinkedList::isEmpty() {
  return LinkedList::length == 0;
}

void LinkedList::removeFirst() {
  if (LinkedList::length > 0) {
    Node *firstNode = LinkedList::head;
    LinkedList::head = firstNode->getNext();
    delete firstNode;
    LinkedList::length--;
  }
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
