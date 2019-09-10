# c-sorting-algorithms

📦 A collection of sorting algorithms written in C.

## Table of contents

* [Algorithms](#algorithms)
* [Why sorting algorithms?](#why-sorting-algorithms)
* [Why C?](#why-c)
* [Parameters](#parameters)
* [Algorithm analysis](#algorithm-analysis)
   * [Worst-case analysis](#worst-case-analysis)
   * [Big O notation](#big-o-notation)

## Algorithms

- [Bogo sort](/algorithms/bogo_sort.h)
- [Bubble sort](/algorithms/bubble_sort.h)
- [Bucket sort](/algorithms/bucket_sort.h)
- [Cocktail sort](/algorithms/cocktail_sort.h)
- [Comb sort](/algorithms/comb_sort.h)
- [Counting sort](/algorithms/counting_sort.h)
- [Gnome sort](/algorithms/gnome_sort.h)
- [Heap sort](/algorithms/heap_sort.h)
- [Insertion sort](/algorithms/insertion_sort.h)
- [Merge sort](/algorithms/merge_sort.h)
- [Odd-even sort](/algorithms/odd_even_sort.h)
- [Pancake sort](/algorithms/pancake_sort.h)
- [Quick sort](/algorithms/quick_sort.h)
- [Radix sort](/algorithms/radix_sort.h)
- [Shell sort](/algorithms/shell_sort.h)
- [Tree sort](/algorithms/tree_sort.h)


## Why sorting algorithms?

1. Sorting is a simple and well-defined problem, which makes it perfect for studying.
2. Sorting algorithms cover important concepts like divide-and-conquer, data structures, and randomized algorithms.
3. Sorting is a common computer task. At one point a quarter of all mainframe cycles were spent sorting.

## Why C?

Many languages are based on C, so the syntax will be familiar to most developers.

## Parameters

The sorting functions have the following prototype:

```c
void sort(int arr[], int n)
```

`arr` is the array to be sorted.

`n` is the number of elements in `arr`.

The function name will be the same as the filename, e.g. `merge_sort` for merge_sort.h.

## Algorithm analysis

Algorithm analysis determines the efficiency of different algorithms.

One approach to determine the running time of an algorithm is to count the number of _steps_ an algorithm takes to complete. Most commonly, simple operations (`+`, `\`, `*`, `-`, `=`, `if`) are understood to take one step to complete. Loops and subroutines are made up of the number of steps that they perform.

Consider an algorithm that performs 2 steps for each element in its input array (of length n). In total, it performs 2n steps. This can be expressed as a function that defines the **time complexity** of the algorithm as a function of its input: T(n)=2n.

### Worst-case analysis

Many algorithms perform a different number of steps depending on the state of the input. For example, some sorting algorithms complete almost immediately if the array is already sorted.

- The **best-case complexity** is the minimum number of steps taken to complete.
- The **worst-case complexity** is the maximum number of steps taken to complete.
- The **average-case complexity** is the average number of steps taken to complete.

Worst-case complexity is most often used in algorithm analysis. This because the worst-case is both likely to occur (best-case is usually not) and easy to calculate (average-case is usually not).

### Big O notation

Big O notation is a way to classify algorithms according to the their growth rate.

Time complexity functions often contain a lot of detail, for example: f(n)=1234n² + 1228n + 92lg₂n + 8736. This level of detail is not much more informative than stating that "the time grows quadratically with n". Big O notation hides the extra detail from functions.

A non-rigorous explanation is that big O notation allows you to ignore constant factors and low-order terms. For example, the functions f(n)=4n+3 and f(n)=12n+9 can both be expressed as O(n) in big O.

_Note: for a complete understanding, read [the formal definition of big O on Wikipedia](https://en.wikipedia.org/wiki/Big_O_notation#Formal_definition)_.

Big O notation creates classes of algorithms. The following table describes the most common classes:

Big-O | Name | Description
------| ---- | -----------
**O(1)** | constant | **This is the best.** The algorithm always takes the same amount of time, regardless of how much data there is. Example: looking up an element of an array by its index.
**O(log n)** | logarithmic | **Pretty great.** These kinds of algorithms halve the amount of data with each iteration. If you have 100 items, it takes about 7 steps to find the answer. With 1,000 items, it takes 10 steps. And 1,000,000 items only take 20 steps. This is super fast even for large amounts of data. Example: binary search.
**O(n)** | linear | **Good performance.** If you have 100 items, this does 100 units of work. Doubling the number of items makes the algorithm take exactly twice as long (200 units of work). Example: sequential search.
**O(n log n)** | "linearithmic" | **Decent performance.** This is slightly worse than linear but not too bad. Example: the fastest general-purpose sorting algorithms.
**O(n^2)** | quadratic | **Kinda slow.** If you have 100 items, this does 100^2 = 10,000 units of work. Doubling the number of items makes it four times slower (because 2 squared equals 4). Example: algorithms using nested loops, such as insertion sort.
**O(n^3)** | cubic | **Poor performance.** If you have 100 items, this does 100^3 = 1,000,000 units of work. Doubling the input size makes it eight times slower. Example: matrix multiplication.
**O(2^n)** | exponential | **Very poor performance.** You want to avoid these kinds of algorithms, but sometimes you have no choice. Adding just one bit to the input doubles the running time. Example: traveling salesperson problem.
**O(n!)** | factorial | **Intolerably slow.** It literally takes a million years to do anything.
