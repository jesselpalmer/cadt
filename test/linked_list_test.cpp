//
// Created by Jesse Palmer on 7/22/22.
//

#include "linked_list_test.h"
#include "../src/data_structures/linked_list.h"
#include "../lib/testing/test_assert.h"

namespace test {

class SizeTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void SizeTests::executeTest() {
  std::string testName = SizeTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addToFront(1);
  linkedList.addToFront(30);
  linkedList.addToFront(23);
  int size = linkedList.size();

  testing::Assert(3, size, testName);
}

class AddToFrontTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddToFrontTests::executeTest() {
  std::string testName = AddToFrontTests::getTestName();
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addToFront(193);
  linkedList.addToFront(3232);
  linkedList.addToFront(744);
  linkedList.addToFront(93546);
  int firstValue = linkedList.getFirst();

  testing::Assert(93546, firstValue, testName);
}

void LinkedListTest::loadTests() {
  test::SizeTests* sizeTests = new test::SizeTests("should set the size correctly");
  test::AddToFrontTests* addToFrontTests = new test::AddToFrontTests("should add to the front correctly");
  std::vector<testing::Test*> linkedListTests = {sizeTests, addToFrontTests};
  test::LinkedListTest::addTests(linkedListTests);
}

LinkedListTest::LinkedListTest() {
  test::LinkedListTest::setSuiteName("LinkedList tests");
  loadTests();
}

} // namespace test
