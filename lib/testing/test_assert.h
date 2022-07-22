//
// Created by Jesse Palmer on 7/21/22.
//

#ifndef CADT_LIB_TESTING_TEST_ASSERT_H_
#define CADT_LIB_TESTING_TEST_ASSERT_H_

#include "string"

namespace testing {

class Assert {
 public:
  Assert(int item1, int item2, std::string testName);

 private:
  bool compare(int item1, int item2);
};

} // namespace testing

#endif // CADT_LIB_TESTING_TEST_ASSERT_H_
