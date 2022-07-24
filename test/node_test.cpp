// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node_test.h"
#include "../src/data_structures/node.h"
#include "../lib/testing/test_assert.h"

namespace test {

class ConstructorTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
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
  void executeTest() override;
};

void ValueTests::executeTest() {
  std::string testName = ValueTests::getTestName();
  data_structures::Node newNode = data_structures::Node();

  newNode.setValue(50);
  int value = newNode.getValue();
  testing::Assert(50, value, testName);

  newNode.setValue(137);
  value = newNode.getValue();
  testing::Assert(137, value, testName);
}

void NodeTests::loadTests() {
  test::ConstructorTests* constructorTests = new test::ConstructorTests("should create object using constructor correctly");
  test::ValueTests* valueTests = new ValueTests("should set/get values correctly");
  std::vector<testing::Test*> nodeTests = {constructorTests, valueTests};
  test::NodeTests::addTests(nodeTests);
}

NodeTests::NodeTests() {
  test::NodeTests::setSuiteName("Node tests");
  loadTests();
}

} // namespace test
