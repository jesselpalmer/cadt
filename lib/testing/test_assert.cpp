// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "test_assert.h"
#include "test_runner.h"

namespace testing {

Assert::Assert(int item1, int item2, std::string testName) {
  if (compare(item1, item2)) {
    TestRunner::testPassed(testName);
  } else {
    TestRunner::testFailed(testName);
  }
}

bool Assert::compare(int item1, int item2) {
  return item1 == item2;
}

}  // namespace testing
