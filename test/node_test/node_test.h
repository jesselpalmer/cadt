// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TEST_NODE_TESTS_H
#define CADT_TEST_NODE_TESTS_H

#include <iostream>

#include "../../lib/testing/test_suite.h"

namespace node_test {

class NodeTests : public testing::TestSuite {
 private:
  void loadTests();

 public:
  NodeTests();
  void executeTestSuite();
};

} // namespace node_test

#endif // CADT_TEST_NODE_TESTS_H
