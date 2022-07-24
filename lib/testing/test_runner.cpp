// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <chrono>
#include <iostream>
#include <iomanip>

#include "test_runner.h"
#include "test.h"

namespace testing {

int TestRunner::numFailingTests = 0;
int TestRunner::numSuccessfulTests = 0;
std::vector<TestSuite> TestRunner::testSuites = {};

TestRunner::TestRunner() = default;

void TestRunner::addTestSuites(std::vector<TestSuite> testSuites) {
  TestRunner::testSuites = testSuites;
}

void TestRunner::addTestSuite(TestSuite testSuite) {
  TestRunner::testSuites.push_back(testSuite);
}

void TestRunner::completeMsg(double elapsedTime) {
  int totalTests = TestRunner::numFailingTests + TestRunner::numSuccessfulTests;

  std::string testsSuitesPassedStr = std::to_string(TestRunner::numSuccessfulTests) + " passed";
  std::string testsSuitesPassedGreenStr = TestRunner::getColoredText(testsSuitesPassedStr, "green");
  std::cout << "\nTest Suites: " << testsSuitesPassedGreenStr << ", ";
  std::cout << totalTests << " total" << std::endl;

  std::string testsPassedStr = std::to_string(TestRunner::numSuccessfulTests) + " passed";
  std::string testsPassedGreenStr = TestRunner::getColoredText(testsPassedStr, "green");
  std::cout << "Tests:       " << testsPassedGreenStr << ", ";
  std::cout << totalTests << " total" << std::endl;

  std::cout << std::fixed << std::setprecision(7);
  std::cout << "Time:        " << elapsedTime<< " s" << std::endl;
  //std::cout << TestRunner::numFailingTests << " Test(s) failed" << std::endl;
}

void TestRunner::execute() {
  TestRunner::startMsg();
  auto start = std::chrono::high_resolution_clock::now();
  TestRunner::executeTestSuites();
  auto stop = std::chrono::high_resolution_clock::now();
  auto time_passed = duration_cast<std::chrono::microseconds>(stop - start);
  //std::cout << "\nTest(s) completed in " << (double) time_passed.count() / 1000000 << " seconds!\n" << std::endl;
  completeMsg((double) time_passed.count() / 1000000);
}

void TestRunner::executeTestSuites() {
  for (auto testSuite : TestRunner::testSuites) {
    testSuite.executeTestSuite();
  }
}

void TestRunner::incrementFailingTests() {
  TestRunner::numFailingTests++;
}

void TestRunner::incrementPassingTests() {
  TestRunner::numSuccessfulTests++;
}

std::string TestRunner::getColoredText(std::string text, std::string color) {
  std::string stringStr = "";

  if (color == "green") {
    stringStr =  "\x1b[32m" + text + "\x1b[0m";;
  } else if (color == "red") {
    stringStr = "\x1b[31m" + text + "\x1b[0m";
  } else if (color == "gray") {
    stringStr = "\x1b[90m" + text + "\x1b[0m";
  } else {
    stringStr = text;
  }

  return stringStr;
}

void TestRunner::startMsg() {
  std::cout << "Executing tests..." << std::endl;
}

void TestRunner::testFailed(std::string testName) {
  TestRunner::incrementFailingTests();
  std::string redCheckmark = TestRunner::getColoredText("✓", "red");
  std::string grayTestName = TestRunner::getColoredText(testName, "gray");
  std::cout << "\t\t" << redCheckmark << " " << grayTestName << std::endl;
}

void TestRunner::testPassed(std::string testName) {
  TestRunner::incrementPassingTests();
  std::string greenCheckmark = TestRunner::getColoredText("✓", "green");
  std::string grayTestName = TestRunner::getColoredText(testName, "gray");
  std::cout << "\t\t" << greenCheckmark << " " << grayTestName << " " << std::endl;
}

} // namespace testing
