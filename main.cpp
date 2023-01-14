// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/blob/main/LICENSE

#include <iostream>

#include "test/ds_test_runner.h"
#include "benchmark/linked_list_benchmark.h"
#include "benchmark/queue_benchmark.h"

int main(int argc, char *argv[]) {
  std::string firstArg = "";

  if (argc > 1) {
    firstArg = argv[1];
  }

  if (firstArg == "--test") {
    test::DSTestRunner().execute();
  } else if (firstArg == "--benchmark") {
    benchmark::LinkedListBenchmark *linkedListBenchmark = new benchmark::LinkedListBenchmark();
    linkedListBenchmark->perfTest();
    benchmark::QueueBenchmark *queueBenchmark = new benchmark::QueueBenchmark();
    queueBenchmark->perfTest();
  } else {
    std::cout << "Nothing to see here!" << std::endl;
  }

  return 0;
}
