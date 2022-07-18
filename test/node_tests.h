// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TEST_NODE_TESTS_H
#define CADT_TEST_NODE_TESTS_H

#include <iostream>

#include "../lib/testing/test.h"

namespace test {

class NodeTests : public testing::Test {
 private:
  static void setConstructorTests();
  static void setValueTests();

 public:
  static void executeTest();
};

} // namespace test

#endif // CADT_TEST_NODE_TESTS_H
