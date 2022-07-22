// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "../lib/testing/test.h"
#include "../lib/testing/test_suite.h"

#include "ds_test_runner.h"
#include "node_test.h"

namespace test {

DSTestRunner::DSTestRunner() {
  addTestSuites();
}

void DSTestRunner::addTestSuites() {
  testing::TestSuite nodeTests = test::NodeTests();
  DSTestRunner::addTestSuite(nodeTests);
}

} // namespace test
