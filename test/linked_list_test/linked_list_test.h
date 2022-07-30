// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TEST_LINKED_LIST_TEST_H_
#define CADT_TEST_LINKED_LIST_TEST_H_

#include "../../lib/testing/test_suite.h"

namespace linked_list_test {

class LinkedListTest : public testing::TestSuite {
 private:
  void loadTests();

 public:
  LinkedListTest();
  void executeTestSuite();
};

} // namespace linked_list_test

#endif //CADT_TEST_LINKED_LIST_TEST_H_
