
# C++ STL (Standard Template Library) Guide

The **Standard Template Library (STL)** is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, stacks, queues, lists, and more.

---

## 📚 Components of STL

STL is divided into **four** major components:

1. **Containers**
2. **Algorithms**
3. **Iterators**
4. **Function Objects (Functors)**

---

## 1️⃣ Containers

Containers store data. STL provides several types:

### 🔹 Sequence Containers

| Container | Description |
|----------|-------------|
| `vector` | Dynamic array |
| `list` | Doubly linked list |
| `deque` | Double-ended queue |
| `array` | Fixed size array (C++11) |
| `forward_list` | Singly linked list (C++11) |

### 🔹 Associative Containers

| Container | Description |
|----------|-------------|
| `set` | Collection of unique keys |
| `multiset` | Multiple keys allowed |
| `map` | Key-value pairs with unique keys |
| `multimap` | Key-value pairs with duplicate keys |

### 🔹 Unordered Associative Containers (C++11)

| Container | Description |
|----------|-------------|
| `unordered_set` | Faster lookup using hash table |
| `unordered_map` | Key-value pair with hashing |
| `unordered_multiset` | Allows duplicate keys |
| `unordered_multimap` | Allows duplicate key-value pairs |

### 🔹 Container Adapters

| Adapter | Description |
|--------|-------------|
| `stack` | LIFO |
| `queue` | FIFO |
| `priority_queue` | Elements with priority |

---

## 2️⃣ Algorithms

Used for operations on containers. Examples:

```cpp
#include <algorithm>

sort(v.begin(), v.end());        // Sort in ascending order
reverse(v.begin(), v.end());     // Reverse a container
max_element(v.begin(), v.end()); // Get max element
min_element(v.begin(), v.end()); // Get min element
accumulate(v.begin(), v.end(), 0); // Sum of elements (need <numeric>)
count(v.begin(), v.end(), x);    // Count occurrences of x
find(v.begin(), v.end(), x);     // Find element x
```

---

## 3️⃣ Iterators

Iterators are used to point at the memory addresses of STL containers.

Types:
- Input Iterator
- Output Iterator
- Forward Iterator
- Bidirectional Iterator
- Random Access Iterator

Example:
```cpp
vector<int>::iterator it;
for (it = v.begin(); it != v.end(); ++it)
    cout << *it << " ";
```

---

## 4️⃣ Function Objects (Functors)

Objects that can be treated as though they are a function or function pointer.

Example:
```cpp
struct Square {
    int operator()(int x) const { return x * x; }
};
```

---

## 🔧 STL Example Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 1, 3, 5};

    sort(v.begin(), v.end());

    for (int x : v) cout << x << " ";
}
```

---

## 📌 Tips

- Always `#include <bits/stdc++.h>` for contests (GCC only).
- Use `auto` to simplify iterator syntax.
- STL saves development time and ensures efficient implementations.

---

## 📖 Further Reading

- C++ STL Reference: https://en.cppreference.com/w/cpp/container
- GeeksforGeeks STL Guide: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/

