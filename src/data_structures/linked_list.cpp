// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include <iostream>

#include "linked_list.h"

namespace data_structures {

LinkedList::LinkedList() = default;

LinkedList::~LinkedList() {}

void LinkedList::add(int value) {
  addEnd(value);
}

void LinkedList::addEnd(int value) {
  Node *newNode = new Node(value);

  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->setPrev(tail);
    tail->setNext(newNode);
    tail = newNode;
  }

  length++;
}

void LinkedList::addFront(int value) {
  Node *newNode = new Node(value);

  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->setNext(head);
    head->setPrev(newNode);
    head = newNode;
  }

  length++;
}

void LinkedList::clear() {
  Node *node = head;

  while (node != nullptr) {
    Node *nextNode = node->getNext();
    delete node;
    node = nextNode;
    length--;
  }
}

bool LinkedList::contains(int value) {
  Node *node = head;

  while (node != nullptr) {
    if (node->getValue() == value) {
      return true;
    }

    node = node->getNext();
  }

  return false;
}

int LinkedList::getFirst() {
  if (length > 0) {
    return head->getValue();
  } else {
    return 0;
  }
}

int LinkedList::getLast() {
  if (length > 0) {
    return tail->getValue();
  } else {
    return 0;
  }
}

bool LinkedList::isEmpty() {
  return head == nullptr;
}

int LinkedList::peek() {
  return getFirst();
}

int LinkedList::peekFirst() {
  return getFirst();
}

int LinkedList::peekLast() {
  return getLast();
}

int LinkedList::remove(int value) {
  Node *node = head;

  while (node != nullptr) {
    if (node->getValue() == value && head == node) {
      head = head->getNext();
      delete node;
      length--;
      return value;
    } else if (node->getValue() == value && head != node) {
      Node *prevNode = node->getPrev();
      prevNode->setNext(node->getNext());
      length--;
      delete node;
      return value;
    }

    node = node->getNext();
  }

  return 0;
}

int LinkedList::removeFirst() {
  int value = 0;

  if (length > 0) {
    Node *firstNode = head;
    value = head->getValue();
    head = firstNode->getNext();
    delete firstNode;
    length--;
  }

  return value;
}

int LinkedList::removeLast() {
  int value = 0;

  if (length > 0) {
    Node *lastNode = tail;
    value = lastNode->getValue();
    tail = lastNode->getPrev();
    tail->setNext(nullptr);
    delete lastNode;
    length--;
  }

  return value;
}

int LinkedList::size() const {
  return length;
}

std::string LinkedList::toString() {
  std::string resultStr = "[";
  Node *currentNode = head;

  while (currentNode != nullptr) {
    resultStr += std::to_string(currentNode->getValue());
    currentNode = currentNode->getNext();

    if (currentNode != nullptr) {
      resultStr += ", ";
    }
  }

  resultStr += "]";

  return resultStr;
}

} // namespace data_structures
