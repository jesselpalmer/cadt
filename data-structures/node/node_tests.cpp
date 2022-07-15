// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "node_tests.h"
#include "node.h"
#include "../../testing/TestRunner.h"

void NodeTests::setValueTests() {
  std::string functionName = "value tests";

  Node* newNode = new Node(5);
  int value = newNode->getValue();

  if (value == 5) {
    TestRunner::testPassed(functionName);
  } else {
    TestRunner::testFailed(functionName, "value not set correctly");
  }
}

void NodeTests::executeTest() {
  TestRunner::testSuite("NodeTests");
  setValueTests();
}