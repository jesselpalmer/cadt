// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_SRC_DATA_STRUCTURES_QUEUE_H_
#define CADT_SRC_DATA_STRUCTURES_QUEUE_H_

#include "linked_list.h"

namespace data_structures {

// Implementation of a queue data structure using a linked list.
class Queue : public data_structures::LinkedList {
 public:
  Queue();
  ~Queue();

  // Returns, but doesn't remove, the last value in the queue.
  int back();

  // Removes and returns the first value in the queue.
  int dequeue();

  // Adds a value to the back of the queue.
  void enqueue(int value);

  // Returns, but doesn't remove, the first value in the queue.
  int front();
};

} // namespace data_structures

#endif //CADT_SRC_DATA_STRUCTURES_QUEUE_H_
