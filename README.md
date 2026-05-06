# ðŸ“˜ C - Sorting algorithms & Big O

## ðŸ“Œ Description

<img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/248/willy-wonka.png" /><br />

<br />

---

## ðŸ“š Resources

**Read or watch**:



- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)

- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)

- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)

- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (*<b>WARNING</b>: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms*)

---

## ðŸŽ¯ Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:



### General



- At least four different sorting algorithms

- What is the Big O notation, and how to evaluate the time complexity of an algorithm

- How to select the best sorting algorithm for a given input

- What is a stable sorting algorithm

---

## âœ… Requirements

### General



- Allowed editors: `vi`, `vim`, `emacs`

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

- All your files should end with a new line

- A `README.md` file, at the root of the folder of the project, is mandatory

- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

- You are not allowed to use global variables

- No more than 5 functions per file

- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like *printf, puts, ...* is totally forbidden.

- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

- The prototypes of all your functions should be included in your header file called `sort.h`

- Don't forget to push your header file

- All your header files should be include guarded

- A list/array does not need to be sorted if its size is less than 2.



### GitHub

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

---

## âš™ï¸ Setup

_No specific setup detected._

---

## ðŸ§  Quiz

<details>
<summary>Question #0</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(log(n))`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #4</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #5</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #6</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(nlog(n))`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #7</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n^2)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #8</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(2^n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #9</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n^2)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #10</summary>

**Question:** What is the time complexity of this function / algorithm?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n^2)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #11</summary>

**Question:** What is the time complexity of accessing the nth element on an unsorted array?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #12</summary>

**Question:** What is the time complexity of inserting at index n on an unsorted array?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #13</summary>

**Question:** What is the time complexity of removing at index n in an unsorted array?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #14</summary>

**Question:** What is the time complexity of searching for an element in an unsorted array of size n?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #15</summary>

**Question:** What is the time complexity of setting a value at index n in an unsorted array?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #16</summary>

**Question:** What is the time complexity of accessing the nth element of a singly linked list?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #17</summary>

**Question:** What is the time complexity of inserting after the nth element of a singly linked list? (Assuming you have a pointer to the node to insert)

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #18</summary>

**Question:** What is the time complexity of removing the nth element of a singly linked list? (Assuming you have a pointer to the node to remove)

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #19</summary>

**Question:** What is the time complexity of searching for an element in a singly linked list of size n?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #20</summary>

**Question:** What is the time complexity of setting the value of the nth element in a singly linked list? (Assuming you have a pointer to the node to set the value of)

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #21</summary>

**Question:** What is the time complexity of accessing the nth element of a doubly linked list?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #22</summary>

**Question:** Assuming you have a pointer to the node to insert, what is the time complexity of inserting after the nth element of a doubly linked list?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #23</summary>

**Question:** Assuming you have a pointer to the node to remove, what is the time complexity of removing the nth element of a doubly linked list?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #24</summary>

**Question:** What is the time complexity of searching for an element in a doubly linked list of size n?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(n)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #25</summary>

**Question:** Assuming you have a pointer to the node to set the value of, what is the time complexity of setting the value of the nth element in a doubly linked list?

**Available answers:**

- `O(1)`
- `O(n)`
- `O(n!)`
- `O(n^2)`
- `O(log(n))`
- `O(nlog(n))`
- `O(2^n)`

**Answer:** `O(1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## ðŸ§© Tasks

<details>
<summary>0. Bubble sort</summary>

**Files:**

- [`0-bubble_sort.c`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/0-bubble_sort.c)
- [`0-O`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/0-O)

**Repository:** `holbertonschool-sorting_algorithms`

**Task details:**

```text
0. Bubble sort
Write a function that sorts an array of integers in ascending order using the
Bubble sort
algorithm
Prototype:
void bubble_sort(int *array, size_t size);
You're expected to print the
array
after each time you swap two elements (See example below)
Write in the file
0-O
, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
in the best case
in the average case
in the worst case
alex@/tmp/sort$ cat
0
-main.c
#
include
<stdio.h>
#
include
<stdlib.h>
#
include
"sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int
main
(
void
)
{
int
array[] = {
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
};
size_t
n =
sizeof
(array) /
sizeof
(array[
0
]);
print_array
(array, n);
printf
(
"\n"
);
bubble_sort
(array, n);
printf
(
"\n"
);
print_array
(array, n);
return
(
0
);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic
0
-bubble_sort.c
0
-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
19
,
48
,
71
,
99
,
13
,
52
,
96
,
73
,
86
,
7
19
,
48
,
71
,
13
,
99
,
52
,
96
,
73
,
86
,
7
19
,
48
,
71
,
13
,
52
,
99
,
96
,
73
,
86
,
7
19
,
48
,
71
,
13
,
52
,
96
,
99
,
73
,
86
,
7
19
,
48
,
71
,
13
,
52
,
96
,
73
,
99
,
86
,
7
19
,
48
,
71
,
13
,
52
,
96
,
73
,
86
,
99
,
7
19
,
48
,
71
,
13
,
52
,
96
,
73
,
86
,
7
,
99
19
,
48
,
13
,
71
,
52
,
96
,
73
,
86
,
7
,
99
19
,
48
,
13
,
52
,
71
,
96
,
73
,
86
,
7
,
99
19
,
48
,
13
,
52
,
71
,
73
,
96
,
86
,
7
,
99
19
,
48
,
13
,
52
,
71
,
73
,
86
,
96
,
7
,
99
19
,
48
,
13
,
52
,
71
,
73
,
86
,
7
,
96
,
99
19
,
13
,
48
,
52
,
71
,
73
,
86
,
7
,
96
,
99
19
,
13
,
48
,
52
,
71
,
73
,
7
,
86
,
96
,
99
13
,
19
,
48
,
52
,
71
,
73
,
7
,
86
,
96
,
99
13
,
19
,
48
,
52
,
71
,
7
,
73
,
86
,
96
,
99
13
,
19
,
48
,
52
,
7
,
71
,
73
,
86
,
96
,
99
13
,
19
,
48
,
7
,
52
,
71
,
73
,
86
,
96
,
99
13
,
19
,
7
,
48
,
52
,
71
,
73
,
86
,
96
,
99
13
,
7
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
alex@/tmp/sort$
Repo:
GitHub repository:
holbertonschool-sorting_algorithms
File:
0-bubble_sort.c, 0-O
Score of the task
12
/12
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
0. Bubble sort
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
Ã—
Students who are done with "0. Bubble sort"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>1. Insertion sort</summary>

**Files:**

- [`1-insertion_sort_list.c`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/1-insertion_sort_list.c)
- [`1-O`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/1-O)

**Repository:** `holbertonschool-sorting_algorithms`

**Task details:**

```text
1. Insertion sort
Write a function that sorts a doubly linked list of integers in ascending order using the
Insertion sort
algorithm
Prototype:
void insertion_sort_list(listint_t **list);
You are not allowed to modify the integer
n
of a node. You have to swap the nodes themselves.
You're expected to print the
list
after each time you swap two elements (See example below)
Write in the file
1-O
, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
in the best case
in the average case
in the worst case
alex@/tmp/sort$ cat
1
-main.c
#
include
<stdio.h>
#
include
<stdlib.h>
#
include
"sort.h"
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t
*
create_listint
(
const
int
*array,
size_t
size)
{
listint_t
*list;
listint_t
*node;
int
*tmp;

    list =
NULL
;
while
(size--)
    {
        node =
malloc
(
sizeof
(*node));
if
(!node)
return
(
NULL
);
        tmp = (
int
*)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev =
NULL
;
        list = node;
if
(list->next)
            list->next->prev = list;
    }
return
(list);
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int
main
(
void
)
{
listint_t
*list;
int
array[] = {
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
};
size_t
n =
sizeof
(array) /
sizeof
(array[
0
]);

    list =
create_listint
(array, n);
if
(!list)
return
(
1
);
print_list
(list);
printf
(
"\n"
);
insertion_sort_list
(&list);
printf
(
"\n"
);
print_list
(list);
return
(
0
);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic
1
-main.c
1
-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
19
,
48
,
71
,
99
,
13
,
52
,
96
,
73
,
86
,
7
19
,
48
,
71
,
13
,
99
,
52
,
96
,
73
,
86
,
7
19
,
48
,
13
,
71
,
99
,
52
,
96
,
73
,
86
,
7
19
,
13
,
48
,
71
,
99
,
52
,
96
,
73
,
86
,
7
13
,
19
,
48
,
71
,
99
,
52
,
96
,
73
,
86
,
7
13
,
19
,
48
,
71
,
52
,
99
,
96
,
73
,
86
,
7
13
,
19
,
48
,
52
,
71
,
99
,
96
,
73
,
86
,
7
13
,
19
,
48
,
52
,
71
,
96
,
99
,
73
,
86
,
7
13
,
19
,
48
,
52
,
71
,
96
,
73
,
99
,
86
,
7
13
,
19
,
48
,
52
,
71
,
73
,
96
,
99
,
86
,
7
13
,
19
,
48
,
52
,
71
,
73
,
96
,
86
,
99
,
7
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
,
7
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
7
,
99
13
,
19
,
48
,
52
,
71
,
73
,
86
,
7
,
96
,
99
13
,
19
,
48
,
52
,
71
,
73
,
7
,
86
,
96
,
99
13
,
19
,
48
,
52
,
71
,
7
,
73
,
86
,
96
,
99
13
,
19
,
48
,
52
,
7
,
71
,
73
,
86
,
96
,
99
13
,
19
,
48
,
7
,
52
,
71
,
73
,
86
,
96
,
99
13
,
19
,
7
,
48
,
52
,
71
,
73
,
86
,
96
,
99
13
,
7
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
alex@/tmp/sort$
Repo:
GitHub repository:
holbertonschool-sorting_algorithms
File:
1-insertion_sort_list.c, 1-O
Score of the task
12
/12
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
1. Insertion sort
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
Ã—
Students who are done with "1. Insertion sort"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>2. Selection sort</summary>

**Files:**

- [`2-selection_sort.c`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/2-selection_sort.c)
- [`2-O`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/2-O)

**Repository:** `holbertonschool-sorting_algorithms`

**Task details:**

```text
2. Selection sort
Write a function that sorts an array of integers in ascending order using the
Selection sort
algorithm
Prototype:
void selection_sort(int *array, size_t size);
You're expected to print the
array
after each time you swap two elements (See example below)
Write in the file
2-O
, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
in the best case
in the average case
in the worst case
alex@/tmp/sort$ cat
2
-main.c
#
include
<stdio.h>
#
include
<stdlib.h>
#
include
"sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int
main
(
void
)
{
int
array[] = {
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
};
size_t
n =
sizeof
(array) /
sizeof
(array[
0
]);
print_array
(array, n);
printf
(
"\n"
);
selection_sort
(array, n);
printf
(
"\n"
);
print_array
(array, n);
return
(
0
);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic
2
-main.c
2
-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
7
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
19
7
,
13
,
99
,
71
,
48
,
52
,
96
,
73
,
86
,
19
7
,
13
,
19
,
71
,
48
,
52
,
96
,
73
,
86
,
99
7
,
13
,
19
,
48
,
71
,
52
,
96
,
73
,
86
,
99
7
,
13
,
19
,
48
,
52
,
71
,
96
,
73
,
86
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
96
,
86
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
alex@/tmp/sort$
Repo:
GitHub repository:
holbertonschool-sorting_algorithms
File:
2-selection_sort.c, 2-O
Score of the task
12
/12
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
2. Selection sort
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
Ã—
Students who are done with "2. Selection sort"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>3. Quick sort</summary>

**Files:**

- [`3-quick_sort.c`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/3-quick_sort.c)
- [`3-O`](https://github.com/Antgst/holbertonschool-sorting_algorithms/blob/main/3-O)

**Repository:** `holbertonschool-sorting_algorithms`

**Task details:**

```text
3. Quick sort
Write a function that sorts an array of integers in ascending order using the
Quick sort
algorithm
Prototype:
void quick_sort(int *array, size_t size);
You must implement the
Lomuto
partition scheme.
The pivot should always be the last element of the partition being sorted.
You're expected to print the
array
after each time you swap two elements (See example below)
Write in the file
3-O
, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
in the best case
in the average case
in the worst case
alex@/tmp/sort$ cat
3
-main.c
#
include
<stdio.h>
#
include
<stdlib.h>
#
include
"sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int
main
(
void
)
{
int
array[] = {
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
};
size_t
n =
sizeof
(array) /
sizeof
(array[
0
]);
print_array
(array, n);
printf
(
"\n"
);
quick_sort
(array, n);
printf
(
"\n"
);
print_array
(array, n);
return
(
0
);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89
3
-main.c
3
-quick_sort.c print_array.c -o quick

alex@/tmp/sort$ ./quick
19
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
7
7
,
48
,
99
,
71
,
13
,
52
,
96
,
73
,
86
,
19
7
,
13
,
99
,
71
,
48
,
52
,
96
,
73
,
86
,
19
7
,
13
,
19
,
71
,
48
,
52
,
96
,
73
,
86
,
99
7
,
13
,
19
,
71
,
48
,
52
,
73
,
96
,
86
,
99
7
,
13
,
19
,
71
,
48
,
52
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
71
,
52
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
7
,
13
,
19
,
48
,
52
,
71
,
73
,
86
,
96
,
99
alex@/tmp/sort$
Repo:
GitHub repository:
holbertonschool-sorting_algorithms
File:
3-quick_sort.c, 3-O
Score of the task
12
/12
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
3. Quick sort
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
Ã—
Students who are done with "3. Quick sort"
Ã—
Recommended Sandboxes
Loading...
```

</details>


---

## ðŸ§ª Testing

Use the provided task examples and Holberton checker to validate the project.

---

## ðŸ‘¤ Author

Project from Holberton School.

README generated with Antoine's README Factory workflow.
