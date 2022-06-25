#include <chrono>
#include <iostream>

#include "data-structures/linked_list/linked_list.h"

using namespace std::chrono;

void perfTest() {
  int attempts = 1000000;
  LinkedList *linkedList = new LinkedList();
  auto start = high_resolution_clock::now();

  for (int i = 0; i < attempts; i++) {
    linkedList->addToEnd(i);
  }

  for (int i = 0; i < attempts; i++) {
    linkedList->removeFirst();
  }

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << duration.count() << std::endl;
}

int main() {
  return 0;
}
