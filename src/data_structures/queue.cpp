// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "queue.h"

namespace data_structures {

int Queue::back() {
  return Queue::getLast();
}

int Queue::dequeue() {
  return Queue::removeFirst();
}

void Queue::enqueue(int value) {
  Queue::addEnd(value);
}

int Queue::front() {
  return Queue::getFirst();
}

} // namespace data_structures

