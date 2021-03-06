// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_SRC_DATA_STRUCTURES_QUEUE_H_
#define CADT_SRC_DATA_STRUCTURES_QUEUE_H_

#include "linked_list.h"

namespace data_structures {

class Queue {
 private:
  LinkedList elements;

 public:
  Queue();
  int back();
  bool empty();
  int front();
  int pop();
  void push(int value);
  int size();
};

} // namespace data_structures

#endif //CADT_SRC_DATA_STRUCTURES_QUEUE_H_
