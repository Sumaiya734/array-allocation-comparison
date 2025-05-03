# array-allocation-comparison
Demonstration of array allocation types in C++ and Python"
## 📊 Comparison Table: Python vs C++

| Memory Category        | Python Implementation                             | C++ Implementation                                         | Key Differences |
|------------------------|----------------------------------------------------|-------------------------------------------------------------|-----------------|
| **Fixed Stack Dynamic** | `arr = [0]*5` inside a function                  | `int arr[5];` inside a function                            | Python uses dynamic lists by default; C++ uses truly fixed-size arrays on stack. |
| **Stack Dynamic**       | `arr = [int(input()) for _ in range(n)]`         | `int* arr = new int[n];` or `std::vector<int> arr(n);`     | Python dynamically allocates on heap even in functions; C++ allows stack-time dynamic allocation via `new` or `vector`. |
| **Fixed Heap Dynamic**  | `arr = [0]*n` defined globally or in class init   | `int* arr = new int[n];`                                    | Python abstracts memory; C++ requires manual memory management. |
| **Heap Dynamic**        | `arr = []` then `arr.append()` to grow           | `std::vector<int> arr; arr.push_back()`                    | Python lists grow automatically; C++ vectors grow dynamically but require more setup. |

---
