// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TESTING_TESTSUITE_H
#define CADT_TESTING_TESTSUITE_H

#include <string>
#include <vector>

#include "test.h"

namespace testing {

class TestSuite {
 private:
  std::string suiteName;
  std::vector<Test> tests;

 public:
  TestSuite();
  TestSuite(std::string suiteName);
  TestSuite(std::string suiteName, std::vector<Test> tests);
  void executeTestSuite();
  void executeTestSuite(std::vector<Test> tests);
  std::string getSuiteName();
  void setSuiteName(std::string suiteName);
  std::vector<Test> getTests();
  void addTests(std::vector<Test> tests);
};

} // namespace testing

#endif // CADT_TESTING_TESTSUITE_H
