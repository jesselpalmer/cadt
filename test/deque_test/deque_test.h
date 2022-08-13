// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_TEST_DEQUE_TEST_H_
#define CADT_TEST_DEQUE_TEST_H_

#include "../../lib/testing/test_suite.h"

namespace deque_test {

class DequeTest : public testing::TestSuite {
 private:
  void loadTests();

 public:
  DequeTest();
  void executeTestSuite();
};

} // namespace deque_test

#endif // CADT_TEST_DEQUE_TEST_H_
