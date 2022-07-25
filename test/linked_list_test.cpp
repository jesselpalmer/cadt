// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "linked_list_test.h"
#include "../src/data_structures/linked_list.h"
#include "../lib/testing/test_assert.h"

namespace test {

class AddTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddTests::executeTest() {
  std::string testName = AddTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.add(5724);
  linkedList.add(2356);
  linkedList.add(456323);
  linkedList.add(8765);
  int firstValue = linkedList.getFirst();

  testing::Assert(5724, firstValue, testName);
}

class AddEndTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddEndTests::executeTest() {
  std::string testName = AddEndTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addEnd(193);
  linkedList.addEnd(3232);
  linkedList.addEnd(744);
  linkedList.addEnd(93546);
  int firstValue = linkedList.getFirst();

  testing::Assert(193, firstValue, testName);
}

class AddFrontTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddFrontTests::executeTest() {
  std::string testName = AddFrontTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(193);
  linkedList.addFront(3232);
  linkedList.addFront(744);
  linkedList.addFront(93546);
  int firstValue = linkedList.getFirst();

  testing::Assert(93546, firstValue, testName);
}

class GetFirstTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void GetFirstTests::executeTest() {
  std::string testName = GetFirstTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(2423);
  linkedList.addFront(33534);
  linkedList.addFront(33245);
  int firstValue = linkedList.getFirst();

  testing::Assert(33245, firstValue, testName);
}

class SizeTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void SizeTests::executeTest() {
  std::string testName = SizeTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(1);
  linkedList.addFront(30);
  linkedList.addFront(23);
  int size = linkedList.size();

  testing::Assert(3, size, testName);
}

void LinkedListTest::loadTests() {
  test::AddTests* addTests = new test::AddTests("should add to the end correctly");
  test::AddEndTests* addEndTests = new test::AddEndTests("should add to the end correctly");
  test::AddFrontTests* addFrontTests = new test::AddFrontTests("should add to the front correctly");
  test::GetFirstTests* getFirstTests = new test::GetFirstTests("should get the first value");
  test::SizeTests* sizeTests = new test::SizeTests("should set the size correctly");
  std::vector<testing::Test*> linkedListTests = {addTests, addEndTests, addFrontTests, getFirstTests, sizeTests};
  test::LinkedListTest::addTests(linkedListTests);
}

LinkedListTest::LinkedListTest() {
  test::LinkedListTest::setSuiteName("LinkedList tests");
  loadTests();
}

} // namespace test
