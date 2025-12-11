# 🔢 C - Sorting algorithms & Big O

## 📝 Description
This repository contains our Holberton School **C project** on **sorting algorithms** and **Big O notation**.

Working in a team of two, we implement several classic sorting algorithms on arrays and doubly linked lists, and analyze their **time complexity** using Big O.  
The project focuses on:
- understanding how different sorting algorithms work step by step
- comparing their performance and stability
- choosing the right algorithm for a given type of input
- writing clean, modular C code under strict constraints (no global variables, limited standard library, Betty style)

## 👥 Team
Project done in a team of two:

- Georgia Boulnois  
- Antoine Gousset  
- Djibril Tamsir Niang  

> Note: The repository must be shared by the team (one GitHub repo per group).

---

## 📚 Resources
You are expected to read or watch:

- Sorting algorithm (general theory)
- Big O notation
- Sorting algorithms animations
- “15 sorting algorithms in 6 minutes”  
  *(WARNING: may trigger seizures/epilepsy; purely visual, not required for the project)*

These will help you understand both the **implementation details** and **complexity analysis** of each algorithm.

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain to anyone, without using Google:

### General
- At least **four different sorting algorithms**:
  - how they work conceptually
  - how they are implemented in C
- What **Big O notation** is
- How to evaluate the **time complexity** of an algorithm
- How to **select the best sorting algorithm** for a given input (size, distribution, constraints)
- What a **stable sorting algorithm** is and why stability matters

---

## ✅ Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with the flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must:
  - end with a **new line**
  - compile **without errors or warnings**
- A `README.md` file at the **root of the project folder** is mandatory
- Your code must follow the **Betty style**:
  - checked with `betty-style.pl` and `betty-doc.pl`
- You are **not allowed to use global variables**
- No more than **5 functions per file**
- Unless specified otherwise:
  - you are **not allowed to use the standard library**
  - any use of functions like `printf`, `puts`, … is **forbidden**
- `main.c` files shown in examples:
  - are provided **only for testing**
  - must **not** be pushed (they are ignored during correction)
  - Holberton will use its own `main.c` files

### Header file
- All function prototypes must be declared in a header file named:
  ```c
  sort.h
  ```
- `sort.h` must also contain:
  - the definition of the `listint_t` structure
  - the prototypes of `print_array` and `print_list`
- All header files must be **include guarded**

### Sorting shortcuts
- A list/array **does not need to be sorted** if its size is **less than 2**

### GitHub
- There must be **one project repository per group**
- If you clone/fork a project repository with the **same name** before the second deadline, you risk a **0% score**

---

## 🧱 Data structures and helper functions

For this project, the following helper functions are provided by Holberton and will be compiled with your code.

### Array print function

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

### Doubly linked list print function

```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

### Doubly linked list structure

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

> You must declare the prototypes of `print_array` and `print_list` in `sort.h`, along with all your sorting function prototypes.

---

## 🧮 Big O notation guidelines

You must be able to express and understand the complexity of your algorithms using **Big O**.

Common forms:

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`  (n squared)
- `O(log(n))`
- `O(nlog(n))`
- `O(n + k)`

When writing your answers:

- Always use the **short notation**, without constants or multipliers:
  - `O(nk)` or `O(wn)` must be written simply as:  
    ```text
    O(n)
    ```
- If an answer is required **inside a file**, that file must also end with a **newline**.

You will be asked to provide the **time complexity** (best, average, worst case) for the different algorithms you implement, using this notation.

---

## 🧪 Testing

To test your sorting algorithms on large sets of random integers, you can use:

- tools like **Random.org** to generate random numbers
- custom scripts that:
  - generate arrays of random integers
  - call your sorting functions
  - print the array **before/after** sorting with `print_array` or `print_list`

You should test:
- already sorted arrays
- reverse-sorted arrays
- arrays with many duplicates
- small arrays (including size `< 2`, which should **not** be sorted)

---

## 📁 Repository organization (suggested)

Typical structure for this project:

- `sort.h` – header file with:
  - `listint_t` definition
  - prototypes of all sorting functions
  - prototypes of `print_array` and `print_list`
- `print_array.c` – provided helper function
- `print_list.c` – provided helper function
- `*.c` – one or more source files per sorting algorithm and variation
- `README.md` – this file

> Each algorithm should be implemented in a **separate function**.  
> Some algorithms may operate on arrays, others on doubly linked lists (`listint_t`).

---

## 👤 Authors
- Antoine Gousset – GitHub: [Antgst](https://github.com/Antgst) 
- Georgia Boulnois – GitHub: [Gigi-Corlay](https://github.com/Gigi-Corlay) 
- Djibril Niang – GitHub: [Tamsir-ui](https://github.com/Tamsir-ui)
