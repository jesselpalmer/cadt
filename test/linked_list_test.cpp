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
  testing::Assert(2, size, testName);
}

void LinkedListTest::loadTests() {
  test::SizeTests* sizeTests = new test::SizeTests("should set the size correctly");
  std::vector<testing::Test*> linkedListTests = {sizeTests};
  test::LinkedListTest::addTests(linkedListTests);
}

LinkedListTest::LinkedListTest() {
  test::LinkedListTest::setSuiteName("LinkedList tests");
  loadTests();
}

} // namespace test
