
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


##Difference Between sequences,Subarray and Subset:-

-  subset:-we return specific size of string or array or whatever in any order.
-  subarray:-continous part of array.
-  sequences:-means we take element or not take element(but in increasing order)


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
  
 ## 💻 question_3.cpp Includes(Multiple Calls): 

 - Tower of hanoi(total no. of moves=[pow(2,n-1)-1])(printing step in funtion)
 - Print Array(Same for Vector also)
 - Min. value of vector(same for array also)(same for maxinum value.only logic something change)
 - Skip a Character(i.e. remove all occurance of "a" in string)(2 methods)(we can do same things for array/vector)
 - [Leetcode 78 - Subsets](https://leetcode.com/problems/subsets/)(Do it for string as well.)
    - set:-only no.of combination not permutation so {2,1}={1,2})
    - all unique charater take.
    - like skip_char_2 in that only one of them all is used.here both the call is occuring.
    - in question_3 file something different . and 78.md has somethng different
    - 
 - Print subset of strings where duplicate value allowed.(one fun fact😁:- we can use subset without duplicate function and store string in **set** and print it .easy pisy)
 - [Leetcode 90 - Subset II](90.md)


## 🧵 SOME POINTS ABOUT RECURSION

- Each function call creates a new **stack frame** (new local variables)
- So,

    **SPACE COMPLEXITY**:  
    `O(number of function calls)`  
    + any extra memory used (e.g., arrays, etc.)



## 🎉 FUN FACT

Although **recursive** and **iterative** versions may have the same **time complexity**,

➡️ **Iterative is generally faster** than recursive due to reduced function call overhead 😉

