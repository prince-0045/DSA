
# 💻 C++ STL (Standard Template Library) Complete Syntax & Functions Guide

This guide covers **all major STL containers** and their **syntax**, **member functions**, and **usage examples**.

---

## ✅ 1. VECTOR
**Header:** `<vector>`

### 🔹 Declaration
```cpp
vector<int> v;
vector<int> v(n, 0);  // size n, all values 0
```

### 🔹 Common Functions
```cpp
v.push_back(x);      // Add element at end
v.pop_back();        // Remove last element
v.size();            // Number of elements
v.empty();           // Check if empty
v.front();           // First element
v.back();            // Last element
v.begin();           // Iterator to first
v.end();             // Iterator to after last
v.insert(it, x);     // Insert x at iterator it
v.erase(it);         // Remove element at iterator
v.clear();           // Remove all elements
sort(v.begin(), v.end());  // Sort vector
```

---

## ✅ 2. LIST (Doubly Linked List)
**Header:** `<list>`

```cpp
list<int> l;
l.push_back(x);
l.push_front(x);
l.pop_back();
l.pop_front();
l.sort();            // Sorts the list
l.reverse();         // Reverses the list
l.remove(x);         // Removes all x
```

---

## ✅ 3. DEQUE (Double-Ended Queue)
**Header:** `<deque>`

```cpp
deque<int> dq;
dq.push_back(x);
dq.push_front(x);
dq.pop_back();
dq.pop_front();
dq.front();
dq.back();
dq.size();
dq.clear();
```

---

## ✅ 4. STACK
**Header:** `<stack>`

```cpp
stack<int> st;
st.push(x);
st.pop();
st.top();
st.empty();
```

---

## ✅ 5. QUEUE
**Header:** `<queue>`

```cpp
queue<int> q;
q.push(x);
q.pop();
q.front();
q.back();
q.empty();
```

---

## ✅ 6. PRIORITY_QUEUE (Max Heap by default)
**Header:** `<queue>`

```cpp
priority_queue<int> pq; // Max heap
priority_queue<int, vector<int>, greater<int>> min_pq; // Min heap
pq.push(x);
pq.pop();
pq.top();
pq.empty();
```

---

## ✅ 7. SET (Unique sorted elements)
**Header:** `<set>`

```cpp
set<int> s;
s.insert(x);
s.erase(x);
s.count(x);         // 1 if exists, else 0
s.find(x);          // Iterator to x or s.end()
s.lower_bound(x);   // >= x
s.upper_bound(x);   // > x
```

---

## ✅ 8. MULTISET (Sorted, allows duplicates)
**Header:** `<set>`

```cpp
multiset<int> ms;
ms.insert(x);
ms.erase(ms.find(x)); // Erase one instance
ms.count(x);         // Count occurrences
```

---

## ✅ 9. MAP (Key-Value Pairs, sorted by key)
**Header:** `<map>`

```cpp
map<int, string> m;
m[key] = value;
m.at(key);          // throws if key doesn't exist
m.find(key);        // Returns iterator
m.count(key);       // 0 or 1
```

---

## ✅ 10. MULTIMAP (Duplicate keys allowed)
**Header:** `<map>`

```cpp
multimap<int, string> mm;
mm.insert({key, value});
mm.find(key);       // Returns first occurrence
```

---

## ✅ 11. UNORDERED_SET / UNORDERED_MAP
**Header:** `<unordered_set>` / `<unordered_map>`

```cpp
unordered_set<int> uset;
unordered_map<int, string> umap;
uset.insert(x);
umap[key] = value;
```

---

## ✅ 12. ALGORITHMS (from `<algorithm>`)

```cpp
sort(a.begin(), a.end());
reverse(a.begin(), a.end());
count(a.begin(), a.end(), x);
find(a.begin(), a.end(), x);
accumulate(a.begin(), a.end(), 0); // <numeric>
max_element(a.begin(), a.end());
min_element(a.begin(), a.end());
binary_search(a.begin(), a.end(), x);
```

---

## ✅ 13. ITERATORS

```cpp
vector<int>::iterator it;
for (it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
}
auto it = v.begin(); // auto keyword
```

---

## 📚 Useful Headers

```cpp
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>  // for accumulate
#include <iterator>
```

---

## 🔍 Quick Tips

- Use `auto` to simplify iterator declarations.
- `#include <bits/stdc++.h>` (for contests only) includes all common STL headers.

