// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <chrono>
#include <iostream>

#include "data-structures/linked_list/linked_list.h"
#include "testing/TestRunner.h"

using namespace std::chrono;

void perfTest() {
  int attempts = 10000;
  LinkedList linkedList;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    linkedList.addToFront(i);
  }

  std::cout << linkedList.size() << std::endl;

  for (int i = 0; i < attempts; i++) {
    linkedList.removeFirst();
  }

  std::cout << linkedList.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

  std::cout << duration.count() << std::endl;
}

int main(int argc, char *argv[]) {
  // perfTest();
  std::string firstArg = argv[1];

  if (firstArg == "--test") {
    TestRunner::executeTest();
  }

  return 0;
}
