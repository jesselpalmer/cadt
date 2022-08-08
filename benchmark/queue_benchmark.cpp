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

void nativeQueue() {
  int attempts = 100000000;
  std::queue<int> queue;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    queue.push(i);
  }

  std::cout << queue.size() << std::endl;

//  for (int i = 0; i < attempts; i++) {
//    linkedList.removeFirst();
//  }

  while (!queue.empty()) {
    queue.pop();
  }

//  std::cout << "Size " << sizeof(linkedList) << " bytes" << std::endl;
//  std::cout << linkedList.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << duration.count() << std::endl;

}

void customMadeQueue() {
  int attempts = 100000000;
  data_structures::Queue queue;
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    queue.enqueue(i);
  }

  std::cout << queue.size() << std::endl;

//  for (int i = 0; i < attempts; i++) {
//    linkedList.removeFirst();
//  }

  while (!queue.isEmpty()) {
    queue.dequeue();
  }

//  std::cout << "Size " << sizeof(linkedList) << " bytes" << std::endl;
//  std::cout << linkedList.size() << std::endl;

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << duration.count() << std::endl;

}

void QueueBenchmark::perfTest() {
  customMadeQueue();
  nativeQueue();
}

} // benchmark test
