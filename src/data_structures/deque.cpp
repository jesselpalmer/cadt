// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "deque.h"

namespace data_structures {

Deque::Deque() = default;

Deque::~Deque() {};

int Deque::back() {
  return getLast();
}

int Deque::dequeue() {
  return removeFirst();
}

int Deque::dequeueBack() {
  return removeLast();
}

int Deque::dequeueFront() {
  return removeFirst();
}

void Deque::enqueue(int value) {
  add(value);
}

void Deque::enqueueFront(int value) {
  addFront(value);
}

void Deque::enqueueBack(int value) {
  add(value);
}

int Deque::front() {
  return getFirst();
}

}