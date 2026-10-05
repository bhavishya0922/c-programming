# ⚡ C Programming — Core Systems & Algorithmic Foundations

<div align="center">

  [![Language](https://img.shields.io/badge/Language-C99_/_C11-blue?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
  [![Compiler](https://img.shields.io/badge/Compiler-GCC_/_Clang-success?style=for-the-badge&logo=gnu)](https://gcc.gnu.org/)
  [![Code Quality](https://img.shields.io/badge/Standards-Wall_Wextra-orange?style=for-the-badge)](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
  [![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

  <br/>

  **A structured, verified repository of core C programming implementations covering foundational syntax, pointer arithmetic, manual heap management, file streams, and fundamental searching and sorting algorithms.**

  <br/>

  [Directory Structure](#-repository-structure) • [How to Compile](#-compilation--execution) • [Author](#-author)

</div>

---

## 📌 Repository Overview

This repository documents my academic and self-directed coursework in the **C Programming Language** as a 3rd-semester Computer Science & Engineering undergraduate. 

Every program is written with strict memory hygiene, explicit types, compiler warnings enabled (`-Wall -Wextra`), and thorough inline commentary explaining pointer arithmetic, stack vs. heap dynamics, and algorithmic time complexity.

---

## 📂 Repository Structure

| Module | Title | Key Concepts Covered | Program Count |
|:---|:---|:---|:---:|
| **[`01-basics`](./01-basics)** | Foundational Syntax | `printf`, `scanf`, `sizeof`, primitive types, explicit type casting | 5 |
| **[`02-conditionals`](./02-conditionals)** | Decision Control | Branching (`if-else`), logic operators, leap year validation, `switch-case` | 4 |
| **[`03-loops`](./03-loops)** | Iteration & Patterns | `for`, `while`, `do-while`, Armstrong numbers, numeric & star patterns | 4 |
| **[`04-functions`](./04-functions)** | Modular Design | Prototypes, pass-by-value, prime checking, recursive call trees | 3 |
| **[`05-arrays`](./05-arrays)** | 1D & 2D Arrays | Extrema calculation, two-pointer in-place reversal, matrix multiplication | 3 |
| **[`06-strings`](./06-strings)** | Character Arrays | Manual string functions (`strlen`, `strcpy`), case-insensitive palindrome | 2 |
| **[`07-pointers`](./07-pointers)** | Pointers & Memory | Address inspection (`&`), dereferencing (`*`), call-by-reference swap, pointer arithmetic | 3 |
| **[`08-structures`](./08-structures)** | User Data Types | Heterogeneous struct definitions, `typedef`, array of records, pointer access (`->`) | 2 |
| **[`09-dynamic-memory`](./09-dynamic-memory)** | Dynamic Memory Allocation | Heap allocation with `malloc`, `calloc`, buffer resizing with `realloc`, `free` | 2 |
| **[`10-file-handling`](./10-file-handling)** | File Streams | Disk persistence, `fopen`, `fprintf`, `fgets`, stream validation, `fclose` | 1 |
| **[`11-searching`](./11-searching)** | Searching Algorithms | Linear Search $O(n)$, Binary Search $O(\log n)$ | 2 |
| **[`12-sorting`](./12-sorting)** | Sorting Algorithms | Bubble Sort (optimized), Selection Sort, Insertion Sort $O(n^2)$ | 3 |

---

## ⚙️ Compilation & Execution

All source code adheres to modern ISO C standards (C99 / C11) and can be compiled using GCC or Clang on Linux, macOS, or Windows (MinGW / MSYS2).

### Single File Compilation
```bash
# Standard compilation with strict warnings
gcc -Wall -Wextra -std=c11 01-basics/01_hello_world.c -o hello

# Run executable
./hello
```

### Testing Memory with Valgrind (Linux / WSL)
```bash
valgrind --leak-check=full --show-leak-kinds=all ./dynamic_demo
```

---

## 🎯 Learning Outcomes

- Mastery over low-level memory layout: understanding stack frames, register allocation, and the heap.
- Deep comprehension of pointer arithmetic and reference passing.
- Discipline in freeing dynamically allocated memory to avoid memory leaks.
- Foundations for advancing into Data Structures & Algorithms (DSA) and C++.

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Bhavishya Dewangan**  
*B.Tech Computer Science & Engineering (3rd Semester)*  
*Raipur, Chhattisgarh, India*  
GitHub: [@bhavishya0922](https://github.com/bhavishya0922) | Email: bhavish0922@gmail.com
