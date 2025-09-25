# Introduction

This is the fourth (and last) installment of the **sorting** topic.
The goal is to understand how the **mergesort** algorithm works and how its
approach might be implemented with recursion and subroutines.

## The Merge Problem and Algorithm

The computational problem that the `merge()` algorithm is trying to solve is
this:

> Given three arrays, `A` (destination), `R` (source), `L` (source), assume that,
>
> 1. the length of `A` is equal to the sum of the lengths of `R` and `L` combined, and;
> 2. all elements in both `R` and `L` arrays are **already sorted**;
>
> Merge the elements of `R` and `L` into `A`, so that all elements in `A` (destination) are also sorted.

## Implementing the Mergesort algorithm

This exercise has two steps. First, use the base code provided in this
repository to implement the `merge` algorithm presented in class.
Identify the **loop invariant** (_what drives the idea behind the algorithm
towards the solution?_) and the **termination** (_what variables are modified
so that the loop terminates?_) condition.
It also helps to identify and understand the **pre-conditions** and
**post-condition** defined for the `merge` problem.

Once you understand what the `merge()` function does and have successfully
implemented it, the next step is to think about how its outcome
(post-condition) might help us sort an entire range of values.
Remember that the `merge()` is just a helper function of the `mergesort()`
algorithm. This situation is similar to what we encountered while studying
`partition()`/`quicksort()`.

**Hint**: think recursively (_what is the recursion's base case?_) and try to
figure out how the approach of the _binary search_ (divide-and-conquer) might
be helpful towards a solution.

## General Approach Towards the Code

Remember to try out some basic examples to help you understand the problem in
your mind space.

```
   +---+---+---+---+
R: | 1 | 3 | 6 | 8 |
   +---+---+---+---+
   +---+---+---+---+---+
L: | 2 | 4 | 5 | 7 | 9 |
   +---+---+---+---+---+

   +---+---+---+---+---+---+---+---+---+
A: |   |   |   |   |   |   |   |   |   |
   +---+---+---+---+---+---+---+---+---+
```

Then, sketch the high-level basic steps (actions) you have taken in your mind
while solving a basic example.

Next, try to translate the sketch into a high-level algorithm representation,
as pseudo-code.

```
1. While there are elements in R and L has not finished, check which of the current elements of R and L are the smallest.
(what happens if either R or L finishes before the other?)
2. Store the smallest element found in (1) into A and...
```

If you are convinced that you have a solution, try to apply your solution to
other examples, especially tricky situations. This step will help you identify
[_corner cases_](https://en.wikipedia.org/wiki/Corner_case) to test your
solution with.

Then it's time to design you C++ solution, defining the input and output
parameters for the function, and setting up the loop that solves the problem.
While designing a loop think of which conditions terminate the loop and what
the loop's control variables should be initialized with so that the loop always
works.

## Post-Workout

After finishing your coding, try to answer the following:

1. What is the **time** and **space** complexity of your solution?
2. How does the approach implemented here is compared to previous sorting
   algorithms? Are they similar?
3. What are the positive and negative aspects of the algorithm you were able to
   identify?
