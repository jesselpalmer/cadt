// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include "deque_test.h"
#include "../../src/data_structures/deque.h"
#include "../../lib/testing/test_assert.h"

namespace deque_test {

class BackTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void BackTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueue(4224303);
  deque.enqueue(938343442);
  deque.enqueue(-45555555);

  int backValue = deque.back();

  testing::Assert(-45555555, backValue, "should have the last added value at the back");
  testing::Assert(true, deque.contains(-45555555), "should still contain value after calling back");
}

class DequeueTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void DequeueTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueue(445903);
  deque.enqueue(-35324);
  deque.enqueue(958353);

  testing::Assert(true, deque.contains(445903), "should contain value before dequeue");

  int dequeueValue = deque.dequeue();

  testing::Assert(445903, dequeueValue, "should dequeue the first added value");
  testing::Assert(false, deque.contains(445903), "should not contain value after dequeue");
}

class DequeueBackTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void DequeueBackTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueueBack(423133);
  deque.enqueueBack(-9942424);
  deque.enqueueBack(442443343);

  testing::Assert(true, deque.contains(442443343), "should contain value before dequeueback");

  int dequeueValue = deque.dequeueBack();

  testing::Assert(442443343, dequeueValue, "should dequeue the last added value");
  testing::Assert(false, deque.contains(442443343), "should not contain value after dequeueback");
}

class DequeueFrontTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void DequeueFrontTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueueFront(-35242419);
  deque.enqueueBack(95883421);
  deque.enqueueFront(12133359);

  testing::Assert(true, deque.contains(12133359), "should contain value before dequeuefront");

  int dequeueValue = deque.dequeueFront();

  testing::Assert(12133359, dequeueValue, "should dequeue the front value");
  testing::Assert(false, deque.contains(12133359), "should not contain value after dequeuefront");
}

class EnqueueTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void EnqueueTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueue(2356);
  deque.enqueue(456323);
  deque.enqueue(8765);

  int frontValue = deque.front();
  int lastValue = deque.back();

  testing::Assert(2356, frontValue, "should have the first added value at the front");
  testing::Assert(8765, lastValue, "should have the last added value at the back");
}

class EnqueueBackTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void EnqueueBackTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueueBack(40933);
  deque.enqueueFront(902232);
  deque.enqueueBack(-424444);
  deque.enqueueFront(24242342);
  deque.enqueueBack(-2255222);

  int backValue = deque.dequeueBack();

  testing::Assert(-2255222, backValue, "should have the last value added at the back");
  testing::Assert(4, deque.size(), "should have the correct size");
}

class EnqueueFrontTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void EnqueueFrontTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueueFront(40933);
  deque.enqueueFront(902232);
  deque.enqueueFront(5534242);
  deque.enqueueFront(-55342);

  int frontValue = deque.dequeueFront();

  testing::Assert(-55342, frontValue, "should have the last value added at the front");
  testing::Assert(3, deque.size(), "should have the correct size");
}

class FrontTest : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void FrontTest::executeTest() {
  data_structures::Deque deque = data_structures::Deque();

  deque.enqueue(6489530);
  deque.enqueue(54035434);
  deque.enqueue(234546535);

  int frontValue = deque.front();

  testing::Assert(6489530, frontValue, "should have the first added value at the front");
  testing::Assert(true, deque.contains(6489530), "should still contain value after calling front");
}

void DequeTest::loadTests() {
  BackTest *backTests = new BackTest("back tests");
  DequeueTest *dequeueTests = new DequeueTest("dequeue tests");
  DequeueBackTest *dequeueBackTests = new DequeueBackTest("dequeueback tests");
  DequeueFrontTest *dequeueFrontTests = new DequeueFrontTest("dequeuefront tests");
  EnqueueTest *enqueueTests = new EnqueueTest("enqueue tests");
  EnqueueBackTest *enqueueBackTests = new EnqueueBackTest("enqueueback tests");
  EnqueueFrontTest *enqueueFrontTests = new EnqueueFrontTest("enqueuefront tests");
  FrontTest *frontTests = new FrontTest("front tests");

  std::vector<testing::Test*> dequeTests = {backTests, dequeueTests, dequeueBackTests, dequeueFrontTests, enqueueTests,
                                            enqueueBackTests, enqueueFrontTests, frontTests};
  DequeTest::addTests(dequeTests);
}

DequeTest::DequeTest() {
  setSuiteName("Deque tests");
  loadTests();
}

} // namespace deque_test
