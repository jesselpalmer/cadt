// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "stack.h"

namespace data_structures {

void Stack::push(int val) {
  addFront(val);
}

int Stack::pop() {
  return removeFirst();
}

int Stack::peek() {
  return getFirst();
}

}
