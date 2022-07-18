// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

/*
NodeTest t1 = new Test("should do whatever");
NodeTest t2 = new Test("should do whatever again");

vector<Test> tests = {t1, t2};

Suite s = new Suite("node tests", tests);
s.executeTestSuite();


int executeTestSuite(int length, arr[] array) {
  for (int i = 0; i < length; i++) {
    Test t = new Test(tests[i]);
    t.executeTest();
  }
}

vector<TestSuite> testSuites = {s};

TestRunner tr = new TestRunner(testSuites);
tr.executeTests();
*/

#include "node_tests.h"
#include "../src/data_structures/node.h"
#include "../lib/testing/test_runner.h"

namespace test {

void NodeTests::setConstructorTests() {
  std::string functionName = "value tests";

  data_structures::Node *newNode = new data_structures::Node(5);
  int value = newNode->getValue();

  if (value == 5) {
    testing::TestRunner::testPassed(functionName);
  } else {
    testing::TestRunner::testFailed(functionName, "value not set correctly");
  }

  newNode = new data_structures::Node();
  if (newNode->getValue()) {
    testing::TestRunner::testFailed(functionName, "value not set correctly");
  } else {
    testing::TestRunner::testPassed(functionName);
  }
}

void NodeTests::executeTest() {
  testing::TestRunner::testSuite("NodeTests");
  setConstructorTests();
}

} // namespace test
