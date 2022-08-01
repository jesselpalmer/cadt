// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "queue.h"

namespace data_structures {

int Queue::back() {
  return Queue::getLast();
}

int Queue::front() {
  return Queue::getFirst();
}

int Queue::pop() {
  return Queue::removeFirst();
}

void Queue::push(int value) {
  Queue::addEnd(value);
}

} // namespace data_structures

