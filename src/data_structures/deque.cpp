// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

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