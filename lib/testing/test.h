// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_TESTING_TEST_H
#define CADT_TESTING_TEST_H

#include <string>

namespace testing {

class Test {
 private:
  std::string name;

 public:
  Test();
  ~Test();
  Test(std::string testName);
  virtual void executeTest();
  std::string getTestName();
  void setTestName(std::string testName);
};

} // namespace testing

#endif // CADT_TESTING_TEST_H
