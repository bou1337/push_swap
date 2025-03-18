# 🌀 Push Swap

## 📌 Project Overview

**Push Swap** is a sorting algorithm project from **42 School**, designed to sort a stack of integers using a limited set of operations. The challenge is to implement an efficient sorting algorithm that minimizes the number of moves while adhering to strict constraints.

This project enhances your understanding of sorting algorithms, stack operations, and algorithmic optimization.

---

## 🚀 Features

✅ Efficient stack-based sorting algorithm  
✅ Handles small and large sets of numbers  
✅ Uses a limited set of stack operations  
✅ Optimized for minimal move count  
✅ Error handling for invalid inputs  

---

## 🔧 Installation & Usage

### 1️⃣ Clone the Repository

git clone https://github.com/bou1337/push_swap.git
cd push_swap
2️⃣ Compile the Program
make
3️⃣ Run Push Swap
./push_swap "5 2 9 3 1"
4️⃣ Test with the Checker
ARG="5 2 9 3 1"; ./push_swap $ARG | ./checker_linux $ARG
If the output is OK, the stack is sorted correctly.
If the output is KO, the algorithm failed to sort properly.
🔍 How Push Swap Works
1️⃣ The Stack System
Push Swap operates with two stacks:

Stack A: The main stack containing the unsorted numbers.
Stack B: An auxiliary stack used for sorting.
2️⃣ Available Operations
sa (swap a) – Swap the first two elements of stack A.
sb (swap b) – Swap the first two elements of stack B.
ss (swap both) – Swap the first two elements of both stacks.
pa (push a) – Move the top element from stack B to stack A.
pb (push b) – Move the top element from stack A to stack B.
ra (rotate a) – Shift all elements of stack A up.
rb (rotate b) – Shift all elements of stack B up.
rr (rotate both) – Shift both stacks up.
rra (reverse rotate a) – Shift all elements of stack A down.
rrb (reverse rotate b) – Shift all elements of stack B down.
rrr (reverse rotate both) – Shift both stacks down.
🔗 Resources & References
42 Project Subject
Sorting Algorithm Visualizer
Understanding Sorting Algorithms
