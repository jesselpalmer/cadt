// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#ifndef CADT_TEST_DS_TEST_RUNNER_H_
#define CADT_TEST_DS_TEST_RUNNER_H_

#include <vector>
#include "../lib/testing/test_runner.h"

namespace test {

class DSTestRunner : public testing::TestRunner {
 private:
  static void addTestSuites();

 public:
  DSTestRunner();
};

} // namespace test

#endif // CADT_TEST_DS_TEST_RUNNER_H_
