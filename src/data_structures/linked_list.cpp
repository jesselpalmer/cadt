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
    newNode->setPrev(LinkedList::tail);
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

void LinkedList::clear() {
  Node *node = LinkedList::head;

  while (node != nullptr) {
    Node *nextNode = node->getNext();
    delete node;
    node = nextNode;
    LinkedList::length--;
  }
}

bool LinkedList::contains(int value) {
  Node *node = LinkedList::head;

  while (node != nullptr) {
    if (node->getValue() == value) {
      return true;
    }

    node = node->getNext();
  }

  return false;
}

int LinkedList::getFirst() {
  if (LinkedList::length > 0) {
    return LinkedList::head->getValue();
  } else {
    return 0;
  }
}

int LinkedList::getLast() {
  if (LinkedList::length > 0) {
    return LinkedList::tail->getValue();
  } else {
    return 0;
  }
}

bool LinkedList::isEmpty() {
  return LinkedList::head == nullptr;
}

int LinkedList::remove(int value) {
  Node *node = LinkedList::head;

  while (node != nullptr) {
    if (node->getValue() == value && LinkedList::head == node) {
      LinkedList::head = LinkedList::head->getNext();
      delete node;
      LinkedList::length--;
      return value;
    } else if (node->getValue() == value && LinkedList::head != node) {
      Node *prevNode = node->getPrev();
      prevNode->setNext(node->getNext());
      LinkedList::length--;
      delete node;
      return value;
    }

    node = node->getNext();
  }

  return 0;
}

int LinkedList::removeFirst() {
  int value = 0;

  if (LinkedList::length > 0) {
    Node *firstNode = LinkedList::head;
    value = LinkedList::head->getValue();
    LinkedList::head = firstNode->getNext();
    delete firstNode;
    LinkedList::length--;
  }

  return value;
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
