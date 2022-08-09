// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include <chrono>

#include "linked_list_benchmark.h"
#include "../src/data_structures/linked_list.h"

using namespace std::chrono;

namespace benchmark {

LinkedListBenchmark::LinkedListBenchmark() {}

void LinkedListBenchmark::perfTest() {
  int attempts = 10000;
  data_structures::LinkedList linkedList;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    linkedList.addFront(i);
  }

  std::cout << linkedList.size() << std::endl;

  for (int i = 0; i < attempts; i++) {
    linkedList.removeFirst();
  }

  std::cout << "Size " << sizeof(linkedList) << " bytes" << std::endl;
  std::cout << linkedList.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

  std::cout << duration.count() << std::endl;
}

} // benchmark test
