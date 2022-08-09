// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#ifndef CADT_LIB_TESTING_TEST_ASSERT_H_
#define CADT_LIB_TESTING_TEST_ASSERT_H_

#include "string"

namespace testing {

class Assert {
 public:
  Assert(int item1, int item2, std::string testName);
  Assert(std::string item1, std::string item2, std::string testName);

 private:
  bool compare(int item1, int item2);
  bool compare(std::string item1, std::string item2);
};

} // namespace testing

#endif // CADT_LIB_TESTING_TEST_ASSERT_H_
