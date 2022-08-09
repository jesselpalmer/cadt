//
// Created by Jesse Palmer on 8/7/22.
//

#include "deque.h"

namespace data_structures {

Deque::Deque() = default;

Deque::~Deque() {};

int Deque::dequeue() {
  return Deque::removeFirst();
}

int Deque::dequeueBack() {
  return Deque::removeLast();
}

int Deque::dequeueFront() {
  return Deque::removeFirst();
}

}