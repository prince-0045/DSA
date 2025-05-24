
## 🤔 WHAT AND WHY?

- Loop replacement using recursion
- Problem = something + subproblem
- Function calling itself to break down the problem

 
## 🌌 RECURSION KI DUNIYA (FORMAT)

- We can have **multiple recursive calls** in one code

### 🔁 Format:

1. **Base Case** (when to stop)
2. **Kaam** – work before recursive call (optional)
3. **Recursive Call**
4. **Kaam** – work after recursive call (optional, for backtracking)
5. **Return** – if function returns something

Example:
```cpp
    int ans = n * fact(n - 1);
    return ans;
```


## 🧠 IMPORTANT THINGS ABOUT RECURSION

- Must have a **base condition**
- Without base condition → function calls itself forever → **SEGMENTATION FAULT**



## 💻 question_1.cpp Includes:

- Factorial
- Print `n` to `1`
- Print `1` to `n` (using extra parameter)
- Print `1` to `n` (without extra parameter, after-call → backtracking style)
- Sum from `1` to `n` (returning from function)
- Power function (`a^b` using recursion)

 ## 💻 question_2.cpp Includes(Multiple Calls):

 - Fibonacci nth Term
 - Power Function(logarithmic)(TC:-reduce more than normal power_recursive)
 - Stair Path(Fibonnaci Type Pattern)
 - Maze Path(no.of ways in (m*n) == no.of ways in(n*m))(4 variables)
 - Print all possible Maze path
 - Maze Path 2(2 variables)
 - **Pre In Post(better understanding see in image folder)(VVIMP)(Binary tree,Stack very useful)**
    - kaam-->`PRE`
    - call 1
    - kaam-->`IN`
    - call 2
    - kaam-->`POST`
   
## MULTIPLE CALLS
- firstly ,don't get confused ,first call whole excutes then other call is excutes
suppose,
```cpp
    return fib(n-1)+fib(n-2);
```
- here first of all fib(n-1) whole execute then fib(n-2) excecutes.

## 🧵 SOME POINTS ABOUT RECURSION

- Each function call creates a new **stack frame** (new local variables)
- So,

    **SPACE COMPLEXITY**:  
    `O(number of function calls)`  
    + any extra memory used (e.g., arrays, etc.)



## 🎉 FUN FACT

Although **recursive** and **iterative** versions may have the same **time complexity**,

➡️ **Iterative is generally faster** than recursive due to reduced function call overhead 😉

