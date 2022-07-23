// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <iostream>
#include <string>

#include "test_suite.h"

namespace testing {

TestSuite::TestSuite() = default;

TestSuite::TestSuite(std::string suiteName) {
  TestSuite::suiteName = suiteName;
}

TestSuite::TestSuite(std::string suiteName, std::vector<Test*> tests) {
  TestSuite::suiteName = suiteName;
  TestSuite::tests = tests;
}

void TestSuite::executeTestSuite() {
  std::cout << "\n" << TestSuite::suiteName << std::endl;
  std::cout << "---------------" << std::endl;

  for (auto test : TestSuite::tests) {
    test->executeTest();
  }

  std::cout << "\n";
}

void TestSuite::addTests(std::vector<Test*> tests) {
  TestSuite::tests = tests;
};

void TestSuite::setSuiteName(std::string suiteName) {
  TestSuite::suiteName = suiteName;
}

} // namespace testing
