// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "test.h"

namespace testing {

Test::Test() = default;

Test::Test(std::string testName) {
  Test::testName = testName;
}

void Test::executeTest() {}

std::string Test::getTestName() {
  return Test::testName;
}

void Test::setTestName(std::string testName) {
  Test::testName = testName;
}

} // namespace testing
