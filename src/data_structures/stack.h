// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_DATA_STRUCTURES_STACK_H
#define CADT_DATA_STRUCTURES_STACK_H

#include "linked_list.h"

namespace data_structures {

class Stack : public data_structures::LinkedList {
 public:
  Stack();
  ~Stack();
  void push(int val);
  int pop();
  int peek();
};

} // namespace data_structures

#endif // CADT_DATA_STRUCTURES_STACK_H
