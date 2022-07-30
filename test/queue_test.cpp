// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "queue_test.h"
#include "../src/data_structures/queue.h"
#include "../lib/testing/test_assert.h"

namespace queue_test {

class BackTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void BackTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.push(131424);
  queue.pop();
  queue.push(421313);
  queue.push(4223113);
  queue.push(98765);
  queue.pop();
  int lastValue = queue.back();

  testing::Assert(98765, lastValue, "should get last value");
}

class EmptyTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void EmptyTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  testing::Assert(true, queue.empty(), "should be empty on initialization");

  queue.push(1);
  queue.push(30);
  queue.push(23);

  testing::Assert(false, queue.empty(), "should be false after adding values");
}

class FrontTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void FrontTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.push(131424);
  queue.pop();
  queue.push(421313);
  queue.push(4223113);
  queue.pop();
  int firstValue = queue.front();

  testing::Assert(4223113, firstValue, "should get first value");
}

class PopTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void PopTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.push(5724);
  queue.push(2356);
  queue.push(456323);
  queue.push(8765);
  int firstValue = queue.pop();

  testing::Assert(5724, firstValue, "should remove and return the first value");
  testing::Assert(3, queue.size(), "should have correct size after first value is popped");
}

class PushTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void PushTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.push(5724);
  queue.push(2356);
  queue.push(456323);
  queue.push(8765);
  int firstValue = queue.front();

  testing::Assert(5724, firstValue, "should add value to the front");
}

class SizeTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void SizeTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.push(1212313);
  queue.push(53534);
  queue.push(99999);
  queue.pop();
  queue.push(241313);
  queue.pop();
  int size = queue.size();

  testing::Assert(2, size, "should return size");
}

void QueueTests::loadTests() {
  queue_test::BackTests *backTests = new queue_test::BackTests("back tests");
  queue_test::EmptyTests *emptyTests = new queue_test::EmptyTests("empty tests");
  queue_test::FrontTests *frontTests = new queue_test::FrontTests("front tests");
  queue_test::PopTests *popTests = new queue_test::PopTests("pop tests");
  queue_test::PushTests *pushTests = new queue_test::PushTests("push tests");
  queue_test::SizeTests *sizeTests = new queue_test::SizeTests("size tests");
  std::vector<testing::Test*> queueTests = {backTests, emptyTests, frontTests, popTests, pushTests, sizeTests};
  queue_test::QueueTests::addTests(queueTests);
}

QueueTests::QueueTests() {
  queue_test::QueueTests::setSuiteName("Queue tests");
  loadTests();
}

} // queue_test namespace
