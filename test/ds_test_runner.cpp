// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "../lib/testing/test.h"
#include "../lib/testing/test_suite.h"

#include "ds_test_runner.h"
#include "deque_test/deque_test.h"
#include "linked_list_test/linked_list_test.h"
#include "node_test/node_test.h"
#include "queue_test/queue_test.h"
#include "stack_test/stack_test.h"

namespace test {

DSTestRunner::DSTestRunner() {
  loadTestSuites();
}

void DSTestRunner::loadTestSuites() {
  testing::TestSuite dequeTest = deque_test::DequeTest();
  testing::TestSuite linkedListTest = linked_list_test::LinkedListTest();
  testing::TestSuite nodeTests = node_test::NodeTests();
  testing::TestSuite queueTests = queue_test::QueueTests();
  testing::TestSuite stackTests = stack_test::StackTests();
  std::vector<testing::TestSuite> testSuites = {dequeTest, linkedListTest, nodeTests, queueTests, stackTests};
  DSTestRunner::addTestSuites(testSuites);
}

} // namespace test
