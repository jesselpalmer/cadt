// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node_test.h"
#include "../../src/data_structures/node.h"
#include "../../lib/testing/test_assert.h"

namespace node_test {

class ConstructorTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void ConstructorTests::executeTest() {
  data_structures::Node newNode = data_structures::Node(5);
  int value = newNode.getValue();

  testing::Assert(5, value, "should set value when using constructor");
}

class ValueTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void ValueTests::executeTest() {
  data_structures::Node newNode = data_structures::Node();

  newNode.setValue(50);
  int value = newNode.getValue();
  testing::Assert(50, value, "should set/get value");

  newNode.setValue(137);
  value = newNode.getValue();
  testing::Assert(137, value, "should change existing value using set/get");
}

void NodeTests::loadTests() {
  ConstructorTests* constructorTests = new ConstructorTests("constructor tests");
  ValueTests* valueTests = new ValueTests("value tests");
  std::vector<testing::Test*> nodeTests = {constructorTests, valueTests};
  addTests(nodeTests);
}

NodeTests::NodeTests() {
  setSuiteName("Node tests");
  loadTests();
}

} // namespace node_test
