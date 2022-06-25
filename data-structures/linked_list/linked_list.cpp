//
// Created by Jesse Palmer on 6/22/22.
//
#include "linked_list.h"

void LinkedList::addToEnd(int value) {
  Node* newNode = new Node();
  newNode->value = value;
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

int LinkedList::removeFirst() {
  Node* firstNode = LinkedList::head;
  LinkedList::head = firstNode->next;
  LinkedList::length--;
  return firstNode->value;
}

int LinkedList::size() const {
  return LinkedList::length;
}

void LinkedList::toString() {
  Node* currentNode = LinkedList::head;

 while(currentNode != nullptr) {
    std::cout << currentNode->value << std::endl;
    currentNode = currentNode->next;
 }
}
