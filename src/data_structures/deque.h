//
// Created by Jesse Palmer on 8/7/22.
//

#ifndef CADT_SRC_DATA_STRUCTURES_DEQUE_H_
#define CADT_SRC_DATA_STRUCTURES_DEQUE_H_

#include "linked_list.h"

namespace data_structures {

class Deque : public data_structures::LinkedList {
 public:
  Deque();
  ~Deque();

  // Removes and returns the first value in the deque.
  int dequeue();
  int dequeueBack();
  int dequeueFront();

  // Adds a value to the back of the deque.
  void enqueue(int value);
  void enqueueBack(int value);
  void enqueueFront(int value);

  // Returns, but doesn't remove, the first value in the deque.
  int front();
};

}

#endif //CADT_SRC_DATA_STRUCTURES_DEQUE_H_
