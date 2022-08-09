//
// Created by Jesse Palmer on 8/7/22.
//

#include "deque.h"

namespace data_structures {

Deque::Deque() = default;

Deque::~Deque() {};

int Deque::dequeue() {
  return removeFirst();
}

int Deque::dequeueFront() {
  return removeFirst();
}

void Deque::enqueue(int value) {
  add(value);
}

}