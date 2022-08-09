//
// Created by Jesse Palmer on 8/7/22.
//

#include "queue_benchmark.h"

// Copyright Jesse Palmer All Rights Reserved.
//
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file at https://github.com/jesselpalmer/cadt/LICENSE

#include <chrono>
#include <queue>

#include "queue_benchmark.h"
#include "../src/data_structures/queue.h"

using namespace std::chrono;

namespace benchmark {

QueueBenchmark::QueueBenchmark() {}

const int attempts = 10000000;

void customMadeQueue() {
  std::cout << "Custom made queue benchmark tests:" << std::endl;
  data_structures::Queue queue;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    queue.enqueue(i);
  }

  std::cout << "\tpre-dequeue operations size: " << queue.size() << std::endl;
  std::cout << "\tpre-dequeue operations memory size: " << sizeof(queue) << " bytes" << std::endl;

  while (!queue.isEmpty()) {
    queue.dequeue();
  }

  std::cout << "\tpost-dequeue operations size: " << queue.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "\ttime: " << duration.count() << " ms\n" << std::endl;
}

void nativeQueue() {
  std::cout << "Native queue benchmark tests:" << std::endl;
  std::queue<int> queue;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    queue.push(i);
  }

  std::cout << "\tpre-dequeue operations size: " << queue.size() << std::endl;
  std::cout << "\tpre-dequeue operations memory size: " << sizeof(queue) << " bytes" << std::endl;

  while (!queue.empty()) {
    queue.pop();
  }

  std::cout << "\tpost-dequeue operations size: " << queue.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "\ttime: " << duration.count() << " ms\n" << std::endl;
}

void QueueBenchmark::perfTest() {
  customMadeQueue();
  nativeQueue();
}

} // benchmark test
