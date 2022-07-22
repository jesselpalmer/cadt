// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TESTING_TEST_RUNNER_H
#define CADT_TESTING_TEST_RUNNER_H

#include "test.h"
#include "test_suite.h"

namespace testing {

class TestRunner {
 private:
  static std::vector<TestSuite> testSuites;
  static int numSuccessfulTests;
  static int numFailingTests;
  static void executeTestSuites();

 public:
  TestRunner();
  static void addTestSuites(std::vector<TestSuite> testSuite);
  static void addTestSuite(TestSuite testSuite);
  static void completeMsg();
  static void execute();
  static void incrementPassingTests();
  static void incrementFailingTests();
  static void startMsg(std::string functionName);
  static void testFailed(std::string functionName);
  static void testPassed(std::string functionName);
};

} // namespace testing

#endif // CADT_TESTING_TEST_RUNNER_H
