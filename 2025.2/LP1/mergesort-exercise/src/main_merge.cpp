/**!
 *  @brief Testbed program for the merge and mergesort implementation.
 *  @date May 8th, 2023
 *  @author Selan
 */
#include <algorithm>   // copy
#include <array>       // array
#include <functional>  // function<>
#include <iostream>    // cout
#include <iterator>    // distance, ostream_iterator<>

#include <string_view>  // string_view

//=== Aliases
using value_type = int;
using Compare = std::function<bool(value_type, value_type)>;

//=== Function impementation

/// Print out the elements in the requested rante [first;last).
void print(const std::string& msg,
           const value_type* first,
           const value_type* last,
           bool new_line = true) {
  std::cout << msg;
  std::cout << "[ ";
  std::copy(first, last, std::ostream_iterator<value_type>(std::cout, " "));
  std::cout << "]";
  if (new_line) {
    std::cout << "\n";
  }
}

/*!
 * This function receives two ranges of values, each individually already sorted.
 * @precondition Each individual half is already sorted.
 * @postcondition The whole range is sorted.
 * @param first the begining of the original range.
 * @param middle the end of the 1st sorted half and the beginning of the 2nd sorted half.
 * @param last address just past the last element of the 2nd half (and the original range).
 * @param comp The comparison function that implements a _strict order_ binary
 * relation among the elements we want to merge.
 */
void merge(value_type* first,
           value_type* middle,
           value_type* last,
           const Compare& comp = std::less<>()) {
  
  // Determina as dimensões dos sub-vetores
  long leftSize = std::distance(first, middle);
  long rightSize = std::distance(middle, last);

  // Cria os sub-vetores left e right
  value_type *left = new value_type [leftSize];
  value_type *right = new value_type [rightSize];
  std::copy(first, middle, left);
  std::copy(middle, last, right);

  // Copia cada metade do vetor original para um dos sub-vetores
  auto lStart = left;
  auto lEnd = left + leftSize;
  auto rStart = right;
  auto rEnd = right + rightSize;

  // Faz o merge entre left e right
  while (first != last) {
    if (lStart == lEnd) {
      std::copy(rStart, rEnd, first);
      break;
    }
    if (rStart == rEnd) {
      std::copy(lStart, lEnd, first);
      break;
    }

    if (comp(*lStart, *rStart)) {
      *first = *lStart;
      lStart++;
    }
    else {
      *first = *rStart;
      rStart++;
    }
    first++;
  }

  // Libera a memória dos sub-vetores
  delete[] left;
  delete[] right;

}

void mergesort(value_type* first, value_type* last, const Compare& comp = std::less<>()) {
  auto n = std::distance(first, last);
  if(n <= 1) {
    return;
  }

  auto *middle {std::next(first, n / 2)};
  // Salto da fé
  mergesort(first, middle, comp); // Primeira metade ordenada
  mergesort(middle, last, comp); // Segunda metade ordenada

  merge(first, middle, last, comp);
}

int main() {
  // ===================================================
  // FIRST PART: Implementing the aux function merge().
  // ---------------------------------------------------

  // The array we wish to partition.
  constexpr size_t ar_size{ 11 };
  std::array<value_type, ar_size> a{ 9, 8, 1, 2, 10, 7, 5, 3, 4, 6, 0 };
  auto* middle{ std::next(a.begin(), (a.size() / 2)) };

  print(">>> Original array: ", a.begin(), a.end());
  std::sort(a.begin(), middle);
  std::sort(middle, a.end());
  print(">>> 1st half sorted: ", a.begin(), middle);
  print(">>> 2nd half sorted: ", middle, a.end());

  // Merge the two sorted halves back into array 'A'.
  merge(a.begin(), middle, a.end());

  // Print the result: a sorted merged array.
  print(">>> Merged array: ", a.begin(), a.end());
  std::cout << "\n";

  // ===================================================
  // SECOND PART: Sorting the array.
  // ---------------------------------------------------

  // This is the array we wish to sort.
  std::array<value_type, ar_size> b{ 9, 8, 1, 2, 10, 7, 5, 6, 4, 3, 0 };
  print(">>> Original array befor SORTING: ", b.begin(), b.end());
  std::cout << "\n";
  // Calling mergesort...
  mergesort(b.begin(), b.end());
  print(">>> Sorted array: ", b.begin(), b.end());
  return 0;
}
