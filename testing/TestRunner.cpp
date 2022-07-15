// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <chrono>
#include <iostream>

#include "TestRunner.h"
#include "../data-structures/node/node_tests.h"

int TestRunner::numFailingTests = 0;
int TestRunner::numSuccessfulTests = 0;

void TestRunner::completeSuite() {
  int totalTests = TestRunner::numFailingTests + TestRunner::numSuccessfulTests;
  std::cout << totalTests << " test(s) executed" << std::endl;
  std::cout << TestRunner::numSuccessfulTests << " test(s) passed" << std::endl;
  std::cout << TestRunner::numFailingTests << " test(s) failed" << std::endl;
}

void TestRunner::executeTest() {
  auto start = std::chrono::high_resolution_clock::now();
  NodeTests::executeTest();
  auto stop = std::chrono::high_resolution_clock::now();
  auto time_passed = duration_cast<std::chrono::microseconds>(stop - start);
  std::cout << "Test(s) completed in " << (double) time_passed.count() / 1000000 << " seconds!\n" << std::endl;
  std::cout << "Summary" << std::endl;
  std::cout << "-------" << std::endl;
  completeSuite();
}

void TestRunner::incrementFailingTests() {
  TestRunner::numFailingTests++;
}

void TestRunner::incrementPassingTests() {
  TestRunner::numSuccessfulTests++;
}

void TestRunner::testFailed(std::string functionName, std::string errorMsg) {
  TestRunner::incrementFailingTests();
  std::cout << "Test Failed: " << functionName << " - " << errorMsg << std::endl;
}

void TestRunner::testPassed(std::string functionName) {
  TestRunner::incrementPassingTests();
  std::cout << "Test Passed: " << functionName << std::endl;
}

void TestRunner::testSuite(std::string testSuiteName) {
  std::cout << "Executing " << testSuiteName << "..." << std::endl;
}
