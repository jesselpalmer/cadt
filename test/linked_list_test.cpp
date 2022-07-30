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
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.add(5724);
  linkedList.add(2356);
  linkedList.add(456323);
  linkedList.add(8765);
  int firstValue = linkedList.getFirst();

  testing::Assert(5724, firstValue, "should add value to the front");
}

class AddEndTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddEndTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addEnd(193);
  linkedList.addEnd(3232);
  linkedList.addEnd(744);
  linkedList.addEnd(93546);
  int firstValue = linkedList.getFirst();

  testing::Assert(193, firstValue, "should add value to the end");
}

class AddFrontTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void AddFrontTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(193);
  linkedList.addFront(3232);
  linkedList.addFront(744);
  linkedList.addFront(93546);
  int firstValue = linkedList.getFirst();

  testing::Assert(93546, firstValue, "should add value to the front");
}

class ContainsTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void ContainsTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  testing::Assert(false, linkedList.contains(33123), "should not contain value when list is empty");

  linkedList.addFront(193);
  linkedList.addFront(3232);
  linkedList.addFront(744);
  linkedList.addFront(93546);

  testing::Assert(false, linkedList.contains(4), "should not contain value");
  testing::Assert(true, linkedList.contains(744), "should contain value");

  linkedList.removeFirst();

  testing::Assert(true, linkedList.contains(3232), "should contain value after one is removed");
}

class GetFirstTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void GetFirstTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(2423);
  linkedList.addFront(33534);
  linkedList.addFront(33245);
  int firstValue = linkedList.getFirst();

  testing::Assert(33245, firstValue, "should get the first value");
}

class GetLastTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void GetLastTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();
  testing::Assert(0, linkedList.getLast(), "should return 0 if there are no values in list");

  linkedList.addFront(13019);
  linkedList.add(942482);
  linkedList.addEnd(6534);
  linkedList.addFront(2344);
  linkedList.removeFirst();
  int lastValue = linkedList.getLast();

  testing::Assert(6534, lastValue, "should get the last value");
}

class IsEmptyTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void IsEmptyTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  testing::Assert(true, linkedList.isEmpty(), "should be empty on initialization");

  linkedList.addFront(1);
  linkedList.addFront(30);
  linkedList.addFront(23);

  testing::Assert(false, linkedList.isEmpty(), "should be false after adding values");
}

class RemoveFirstTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void RemoveFirstTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(3313);
  linkedList.addFront(3342);
  linkedList.addFront(998987);

  testing::Assert(998987, linkedList.removeFirst(), "should remove first value");
  testing::Assert(2, linkedList.size(), "should be correct value after value is removed");
  testing::Assert(false, linkedList.contains(998987), "should no longer contain first element");
  //testing::Assert(false, linkedList.isEmpty(), "should be false after adding values");
}

class RemoveTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void RemoveTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(124231);
  linkedList.addFront(3442);
  linkedList.add(44342);
  linkedList.addFront(9842421);
  linkedList.addEnd(544359);
  testing::Assert(true, linkedList.contains(9842421), "should contain value before being removed");
  testing::Assert(9842421, linkedList.remove(9842421), "should return removed value");
  testing::Assert(false, linkedList.contains(9842421), "shouldn't contain value after being removed");

  int size = linkedList.size();
  testing::Assert(4, size, "should be correct size after value removed");

  testing::Assert(true, linkedList.contains(544359), "should contain last value before being removed");

  linkedList.remove(544359);
  testing::Assert(false, linkedList.contains(544359), "shouldn't contain last value after being removed");

  size = linkedList.size();
  testing::Assert(3, size, "should be correct size after last value removed");

  testing::Assert(true, linkedList.contains(3442), "should contain first value before being removed");

  linkedList.remove(3442);
  testing::Assert(false, linkedList.contains(3442), "shouldn't contain last value after being removed");

  size = linkedList.size();
  testing::Assert(2, size, "should be correct size after last value removed");

  testing::Assert(0, linkedList.remove(3442), "should return 0 if nothing is removed");
}

class SizeTests : public testing::Test {
 public:
  using Test::Test;
  void executeTest() override;
};

void SizeTests::executeTest() {
  data_structures::LinkedList linkedList = data_structures::LinkedList();

  linkedList.addFront(1);
  linkedList.addFront(30);
  linkedList.addFront(23);
  int size = linkedList.size();

  testing::Assert(3, size, "should return size");
}

void LinkedListTest::loadTests() {
  test::AddTests *addTests = new test::AddTests("add tests");
  test::AddEndTests *addEndTests = new test::AddEndTests("addEnd tests");
  test::ContainsTests *containsTests = new test::ContainsTests("contains tests");
  test::AddFrontTests *addFrontTests = new test::AddFrontTests("addFront tests");
  test::GetFirstTests *getFirstTests = new test::GetFirstTests("getFirst tests");
  test::GetLastTests *getLastTests = new test::GetLastTests("getLast tests");
  test::IsEmptyTests *isEmptyTests = new test::IsEmptyTests("isEmpty tests");
  test::RemoveTests *removeTests = new test::RemoveTests("remove tests");
  test::RemoveFirstTests *removeFirstTests = new test::RemoveFirstTests("remove first tests");
  test::SizeTests *sizeTests = new test::SizeTests("size tests");
  std::vector<testing::Test*> linkedListTests = {addTests, addEndTests, addFrontTests, containsTests, getFirstTests,
                                                 getLastTests, isEmptyTests, removeTests, removeFirstTests, sizeTests};
  test::LinkedListTest::addTests(linkedListTests);
}

LinkedListTest::LinkedListTest() {
  test::LinkedListTest::setSuiteName("LinkedList tests");
  loadTests();
}

} // namespace test
