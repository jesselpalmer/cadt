// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TESTRUNNER_H
#define CADT_TESTRUNNER_H

#include <iostream>

class TestRunner {
private:
  static int numSuccessfulTests;
  static int numFailingTests;

public:
  TestRunner();
  static void completeSuite();
  static void executeTest();
  static void incrementPassingTests();
  static void incrementFailingTests();
  static void testFailed(std::string functionName, std::string errorMsg);
  static void testPassed(std::string functionName);
  static void testSuite(std::string functionName);
};

#endif //CADT_TESTRUNNER_H
