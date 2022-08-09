// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "stack_test.h"
#include "../../src/data_structures/stack.h"
#include "../../lib/testing/test_assert.h"

namespace stack_test {

class PeekTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void PeekTests::executeTest() {
  data_structures::Stack stack = data_structures::Stack();

  stack.push(987654);
  stack.push(343567);
  stack.push(578493);
  stack.push(1234567);
  int firstValue = stack.peek();

  testing::Assert(1234567, firstValue, "should get first value by using peek");
  testing::Assert(true, stack.contains(1234567), "should contain value after calling peek");
}

class PopTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void PopTests::executeTest() {
  data_structures::Stack stack = data_structures::Stack();

  stack.push(786578578);
  stack.push(5343532);
  stack.push(353532);
  stack.push(9555);
  int firstValue = stack.pop();

  testing::Assert(9555, firstValue, "should get first value after being popped");
  testing::Assert(false, stack.contains(9555), "should not contain value after being popped");
}

class PushTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void PushTests::executeTest() {
  data_structures::Stack stack = data_structures::Stack();

  stack.push(131424);
  stack.push(421313);
  stack.push(4223113);
  stack.push(98765);
  int firstValue = stack.peek();

  testing::Assert(98765, firstValue, "should get first value after values are pushed");
}

void StackTests::loadTests() {
  PushTests *pushTests = new PushTests("push tests");
  PopTests *popTests = new PopTests("pop tests");
  PeekTests *peekTests = new PeekTests("peek tests");

  std::vector<testing::Test*> queueTests = {popTests, pushTests, peekTests};
  addTests(queueTests);
}

StackTests::StackTests() {
  setSuiteName("Stack tests");
  loadTests();
}

} // namespace stack_test
