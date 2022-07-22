//
// Created by Jesse Palmer on 7/21/22.
//

#ifndef CADT_LIB_TESTING_ASSERT_H_
#define CADT_LIB_TESTING_ASSERT_H_

#include "string"

namespace testing {

class Assert {
 public:
  Assert(auto item1, auto item2, std::string testName);
};

} // namespace testing

#endif // CADT_LIB_TESTING_ASSERT_H_
