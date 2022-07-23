//
// Created by Jesse Palmer on 7/22/22.
//

#ifndef CADT_TEST_LINKED_LIST_TEST_H_
#define CADT_TEST_LINKED_LIST_TEST_H_

#include "../lib/testing/test_suite.h"

namespace test {

class LinkedListTest : public testing::TestSuite {
 private:
  void loadTests();

 public:
  LinkedListTest();
  void executeTestSuite();
};

}

#endif //CADT_TEST_LINKED_LIST_TEST_H_
