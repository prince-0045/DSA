## INTRODUCTION
- working on data bits.
- may be  u learn logical operators but syntax is different.

## Basic bitwise operations
- AND 
- OR
- NOT
- XOR
   
| Operator Type | Operator | Name                    | Syntax Example        | Description                              | Code Output Example (C++)              |
|---------------|----------|-------------------------|------------------------|------------------------------------------|-----------------------------------------|
| Logical       | `&&`     | Logical AND             | `if (a && b)`         | True if both `a` and `b` are true         | `1 && 0 → 0`                             |
| Bitwise       | `&`      | Bitwise AND             | `c = a & b;`           | ANDs each bit of `a` and `b`              | `5 & 3 → 1` (0101 & 0011 = 0001)         |
| Logical       | `||`     | Logical OR              | `if (a || b)`         | True if either `a` or `b` is true         | `0 || 1 → 1`                             |
| Bitwise       | `|`      | Bitwise OR              | `c = a | b;`           | ORs each bit of `a` and `b`               | `5 | 3 → 7` (0101 | 0011 = 0111)         |
| Logical       | `!`      | Logical NOT             | `if (!a)`             | True if `a` is false                      | `!0 → 1`, `!1 → 0`                       |
| Bitwise       | `~`      | Bitwise NOT             | `c = ~a;`              | Inverts all bits                          | `~5 → -6` (in 2's complement)            |
| Bitwise       | `^`      | Bitwise XOR             | `c = a ^ b;`           | XORs each bit of `a` and `b`              | `5 ^ 3 → 6` (0101 ^ 0011 = 0110)         |

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    // Logical Operators
    cout << "Logical AND (a && b): " << (a && b) << endl;
    cout << "Logical OR (a || b): " << (a || b) << endl;
    cout << "Logical NOT (!a): " << (!a) << endl;

    // Bitwise Operators
    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    cout << "Bitwise NOT (~a): " << (~a) << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;

    return 0;
}
```
## output
```java
Logical AND (a && b): 1
Logical OR (a || b): 1
Logical NOT (!a): 0
Bitwise AND (a & b): 1
Bitwise OR (a | b): 7
Bitwise NOT (~a): -6
Bitwise XOR (a ^ b): 6
```
