// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "queue.h"
#include "linked_list.h"

namespace data_structures {

Queue::Queue() {
  Queue::elements = data_structures::LinkedList();
};

int Queue::back() {
  return Queue::elements.getLast();
}

bool Queue::empty() {
  return Queue::elements.isEmpty();
}

int Queue::front() {
  return Queue::elements.getFirst();
}

int Queue::pop() {
  return Queue::elements.removeFirst();
}

void Queue::push(int value) {
  Queue::elements.addEnd(value);
}

int Queue::size() {
  return Queue::elements.size();
}

} // namespace data_structures

