// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include "test/ds_test_runner.h"
#include "benchmark/linked_list_benchmark.h"

int main(int argc, char *argv[]) {
  std::string firstArg = "";

  if (argc > 1) {
    firstArg = argv[1];
  }

  if (firstArg == "--test") {
    test::DSTestRunner().execute();
  } else {
    benchmark::LinkedListBenchmark *linkedListBenchmark = new benchmark::LinkedListBenchmark();
    linkedListBenchmark->perfTest();
  }

  return 0;
}
