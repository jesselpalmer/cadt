// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "queue_test.h"
#include "../../src/data_structures/queue.h"
#include "../../lib/testing/test_assert.h"

namespace queue_test {

class BackTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void BackTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.enqueue(131424);
  queue.dequeue();
  queue.enqueue(421313);
  queue.enqueue(4223113);
  queue.enqueue(98765);
  queue.dequeue();
  int lastValue = queue.back();

  testing::Assert(98765, lastValue, "should get last value");
}

class DequeueTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void DequeueTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.enqueue(5724);
  queue.enqueue(2356);
  queue.enqueue(456323);
  queue.enqueue(8765);
  int firstValue = queue.dequeue();

  testing::Assert(5724, firstValue, "should remove and return the first value");
  testing::Assert(3, queue.size(), "should have correct size after first value is popped");
}

class EnqueueTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void EnqueueTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.enqueue(5724);
  queue.enqueue(2356);
  queue.enqueue(456323);
  queue.enqueue(8765);
  int firstValue = queue.front();

  testing::Assert(5724, firstValue, "should add value to the front");
}

class FrontTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void FrontTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.enqueue(131424);
  queue.dequeue();
  queue.enqueue(421313);
  queue.enqueue(4223113);
  queue.dequeue();
  int firstValue = queue.front();

  testing::Assert(4223113, firstValue, "should get first value");
}

class SizeTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void SizeTests::executeTest() {
  data_structures::Queue queue = data_structures::Queue();

  queue.enqueue(1212313);
  queue.enqueue(53534);
  queue.enqueue(99999);
  queue.dequeue();
  queue.enqueue(241313);
  queue.dequeue();
  int size = queue.size();

  testing::Assert(2, size, "should return size");
}

void QueueTests::loadTests() {
  BackTests *backTests = new BackTests("back tests");
  DequeueTests *dequeueTests = new DequeueTests("dequeue tests");
  EnqueueTests *enqueueTests = new EnqueueTests("enqueue tests");
  FrontTests *frontTests = new FrontTests("front tests");
  SizeTests *sizeTests = new SizeTests("size tests");

  std::vector<testing::Test*> queueTests = {backTests, frontTests, dequeueTests, enqueueTests, sizeTests};
  addTests(queueTests);
}

QueueTests::QueueTests() {
  setSuiteName("Queue tests");
  loadTests();
}

} // namespace queue_test
