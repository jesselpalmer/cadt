// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "queue.h"

namespace data_structures {

Queue::Queue() = default;

Queue::~Queue() {}

int Queue::back() {
  return getLast();
}

int Queue::dequeue() {
  return removeFirst();
}

void Queue::enqueue(int value) {
  addEnd(value);
}

int Queue::front() {
  return getFirst();
}

} // namespace data_structures

