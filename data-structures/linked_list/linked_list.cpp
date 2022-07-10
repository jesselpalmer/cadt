//
// Created by Jesse Palmer on 6/22/22.
//
#include "linked_list.h"

#include <iostream>

LinkedList::LinkedList() {}

LinkedList::LinkedList(int value) {
  addToFront(value);
}

LinkedList::~LinkedList() {
  std::cout << "all done";
}

void LinkedList::addToEnd(int value) {
  Node* newNode = new Node(value);
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (LinkedList::head == nullptr) {
    LinkedList::head = newNode;
    LinkedList::tail = newNode;
  } else {
    LinkedList::tail->next = newNode;
    LinkedList::tail = newNode;
  }

  LinkedList::length++;
}

void LinkedList::addToFront(int value) {
  Node* newNode = new Node(value);
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (LinkedList::head == nullptr) {
    LinkedList::head = newNode;
    LinkedList::tail = newNode;
  } else {
    newNode->next = LinkedList::head;
    LinkedList::head->prev = newNode;
    LinkedList::head = newNode;
  }

  LinkedList::length++;
}

int LinkedList::removeFirst() {
  Node* firstNode = LinkedList::head;
  LinkedList::head = firstNode->next;
  LinkedList::length--;
  return firstNode->getValue();
}

int LinkedList::size() const {
  return LinkedList::length;
}

void LinkedList::toString() {
  Node* currentNode = LinkedList::head;

 while(currentNode != nullptr) {
    std::cout << currentNode->getValue() << std::endl;
    currentNode = currentNode->next;
 }
}
