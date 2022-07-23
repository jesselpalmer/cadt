// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <string>

#include "test_suite.h"

namespace testing {

TestSuite::TestSuite() = default;

TestSuite::TestSuite(std::string suiteName) {
  TestSuite::suiteName = suiteName;
}

TestSuite::TestSuite(std::string suiteName, std::vector<Test> tests) {
  TestSuite::suiteName = suiteName;
  TestSuite::tests = tests;
}

void TestSuite::executeTestSuite() {
  for (auto &test : TestSuite::tests) {
    test.executeTest();
  }
}

void TestSuite::addTests(std::vector<Test> tests) {
  TestSuite::tests = tests;
};

} // namespace testing
