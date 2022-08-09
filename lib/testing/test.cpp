// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "test.h"

namespace testing {

Test::Test(std::string testName) {
  name = testName;
}

void Test::executeTest() {}

std::string Test::getTestName() {
  return name;
}

void Test::setTestName(std::string testName) {
  name = testName;
}

} // namespace testing
