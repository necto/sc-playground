#include <iostream>
#include "header.h"

using namespace std;

int top(int *ptr) {
  foo(&ptr);
  return *ptr;
}

void foo2(int **ptr) {
  *ptr = nullptr;
}

int top2(int *ptr) {
  foo2(&ptr);
  return *ptr;
}

int main(int argc, char* argv[]) {
  int num = argc - 1;

  if (num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
  }
  if (argv != 0) {
    cout << "argv not null\n";; // intentional extra-semicolon
  }
  if (argv == nullptr) {
    return **argv; // intentional nullptr dereference
  }

  return 0;
}

