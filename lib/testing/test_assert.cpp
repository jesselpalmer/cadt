//
// Created by Jesse Palmer on 7/21/22.
//

#include "test_assert.h"
#include "test_runner.h"
#include <iostream>

namespace testing {

Assert::Assert(int item1, int item2, std::string testName) {
  if (compare(item1, item2)) {
    testing::TestRunner::testPassed(testName);
    std::cout << "pass" << std::endl;
  } else {
    testing::TestRunner::testFailed(testName);
    std::cout << "fail" << std::endl;
  }
}

bool Assert::compare(int item1, int item2) {
  return item1 == item2;
}

}  // namespace testing
