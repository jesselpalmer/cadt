// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TEST_NODE_TESTS_H
#define CADT_TEST_NODE_TESTS_H

#include <iostream>

#include "../lib/testing/test_suite.h"
#include "../lib/testing/assert.h"

namespace test {

class NodeTests : public testing::TestSuite {
 private:
  void setConstructorTests();
  void setValueTests();

 public:
  NodeTests();
  void loadTests();
  void executeTestSuite();
};

} // namespace test

#endif // CADT_TEST_NODE_TESTS_H
