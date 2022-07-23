// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node_test.h"
#include "../src/data_structures/node.h"
#include "../lib/testing/test.h"
#include "../lib/testing/test_runner.h"

namespace test {

class ConstructorTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest();
};

void ConstructorTests::executeTest() {
  std::string testName = ConstructorTests::getTestName();

  data_structures::Node newNode = data_structures::Node(5);
  int value = newNode.getValue();

  testing::Assert(5, value, testName);
}

class ValueTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest();
};

void ValueTests::executeTest() {
  std::string testName = ValueTests::getTestName();

  data_structures::Node newNode = data_structures::Node();
  newNode.setValue(50);
  int value = newNode.getValue();

  if (value == 50) {
    testing::TestRunner::testPassed(testName);
  } else {
    testing::TestRunner::testFailed(testName);
  }

  newNode.setValue(137);
  value = newNode.getValue();

  if (value == 137) {
    testing::TestRunner::testPassed(testName);
  } else {
    testing::TestRunner::testFailed(testName);
  }
}

void NodeTests::loadTests() {
  testing::Test constructorTests = test::ConstructorTests("should create object using constructor correctly");
  testing::Test valueTests = ValueTests("should set/get values correctly");
  std::vector<testing::Test> nodeTests = {constructorTests, valueTests};
  test::NodeTests::addTests(nodeTests);
}

NodeTests::NodeTests() {
  test::NodeTests::setSuiteName("Node tests");
  loadTests();
}

} // namespace test
