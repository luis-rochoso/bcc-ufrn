/*!
 * Edite esse arquivo para incluir suas respostas.
 * @author Selan
 * @date April 6th, 2024.
 * @date April 2nd, 2025.
 * Functions implemented and documented by Luis Filipe de Sousa
 */

#ifndef GRAAL_HPP
#define GRAAL_HPP

#include <utility>
using std::pair;

namespace graal {

/*!
 * Finds and returns a pair with the smallest and greatest elements in a range.
 *
 * @tparam Itr Iterator to the range.
 * @tparam Compare A regular comparison function.Comparison functor.
 *
 * @param first Pointer to the first element of the range we want to copy
 * (inclusive).
 * @param last Pointer to the last element of the range we want to copy
 * (exclusive).
 * @param cmp The comparison function that return true if the first element is
 * *less* than the second.
 *
 * @return A pair of the smallest and greatest elements.
 *
 */
template <typename Itr, typename Compare>
std::pair<Itr, Itr> minmax(Itr first, Itr last, Compare cmp) {
  // Variables to hold the position of smallest and greatest element
  auto small{first};
  auto great{first};
  
  while (first != last) {
    // Expression equivalent to <
    if (cmp(*first, *small)) {
      small = first;
    }

    // Expression equivalent to >=
    if (cmp(*first, *great) == false) {
      great = first;
    }

    ++first;
  }
  return {small, great};
}

/**
 * Mirrors the position of the elements in an interval
 * @param first Iterator to the first element of the interval
 * @param last Iterator to just past the last element of the interval
 */
template <class BidirIt> void reverse(BidirIt first, BidirIt last) {
    while (first != last) {
        // Swap first and last elements
        std::swap(*first, *(last-1));
        
        // Move the adress of first and last one unit closer to the center of the array
        ++first;
        if (first != last) --last; // Ensures that the position of first and last won't skip over each other
    }
}

/**
 * Copies the values in a range into another range
 * @param first Iterator to the first element of the original range
 * @param last Iterator to just past the last element of the original range
 * @param d_first Iterator to the first position of the new range
 * 
 * @return Iterator to the position just past the last element of the new range
 */
template <class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first) {
  // Repeats until entire range has been copied
  while (first != last) {
    // Element in new range receives value of first range
    *d_first = *first;

    // Moves to the next position
    ++d_first;
    ++first;
  }
  return d_first;
}

/**
 * Searches a range for the first element for which a certain predicate is true
 * @param first Iterator to the first element in a range
 * @param last Iterator to just past the last element in a range
 * @param p Predicate that must be true for the required element
 * 
 * @return Iterator to the position of the found element; to "last" if none is found
 */
template <class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p) {
  // Runs through the entire range
  while (first != last) {
    // Check if the predicate is true for that element
    if (p(*first)) return first;
    ++first;
  }

  // If the function has reached this point, then no element in the range is true for p
  return last;
}

/**
 * Checks if all of the elements in a range are true for a certain predicate
 * @param first Iterator to the first element in a range
 * @param last Iterator to just past the last element in a range
 * @param p Predicate that must be true for all elements
 * 
 * @return True if all elements in range are true for p; false otherwise
 */
template <class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p) {
  // Runs through the entire range
  while (first != last) {
    // Check if predicate is false for that element
    if (p(*first) == false) return false;
    ++first;
  }
  return true;
}

/**
 * Checks if any of the elements in a range are true for a certain predicate
 * @param first Iterator to the first element in a range
 * @param last Iterator to just past the last element in a range
 * @param p Predicate that must be true for any element
 * 
 * @return True if any element in range is true for p; false if none are
 */
template <class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p) {
  // Runs through the entire range
  while (first != last) {
    // Check if predicate is true for that element
    if (p(*first) == true) return true;
    ++first;
  }
  return false;
}

/**
 * Checks if none of the elements in a range are true for a certain predicate
 * @param first Iterator to the first element in a range
 * @param last Iterator to just past the last element in a range
 * @param p Predicate that must be false for all elements
 * 
 * @return True if all elements in range are false for p; false otherwise
 */
template <class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p) {
  // Runs through the entire range
  while (first != last) {
    // Check if predicate is true for that element
    if (p(*first) == true) return false;
    ++first;
  }
  return true;
}

/**
 * Checks if a range is equal to another
 * @param first1 Iterator to first element of first range
 * @param last1 Iterator to just past the last element of first range
 * @param first1 Iterator to first element of second range
 * @param eq Function that compares equality between elements of the ranges
 * 
 * @return True if ranges are equal; false otherwise
 */
template <class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq) {
  // Assigns a variable to hold the stopping point of the second range
  auto endpoint = first2 + (last1 - first1);

  // Checks if the ranges have the same number of elements
  if (std::distance(first1, last1) != std::distance(first2, endpoint)) return false;

  // Runs through both ranges, comparing their elements
  while (first2 != endpoint) {
    if (eq(*first1, *first2) == false) return false;
    ++first1;
    ++first2;
  }
  return true;
}

/**
 * Checks if the elements in two ranges are equal
 * @param first1 Iterator to first element of first range
 * @param last1 Iterator to just past the last element of first range
 * @param first1 Iterator to first element of second range
 * @param last2 Iterator to just past the last element of second range
 * @param eq Function that compares equality between elements of the ranges
 * 
 * @return True if the elements in the ranges are equal; false otherwise
 */
template <class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2,
           Equal eq) {
  // Checks if the ranges have the same number of elements
  if (std::distance(first1, last1) != std::distance(first2, last2)) return false;

  // Runs through both ranges, comparing their elements
  while (first1 != last1) {
    if (eq(*first1, *first2) == false) return false;
    ++first1;
    ++first2;
  }
  return true;
}

/**
 * Rearranges the elements in a range such that each one is unique, eliminating duplicates
 * @param first Iterator to the first element of the range
 * @param last Iterator to just past the last element of the range
 * @param eq Function that compares equality between elements in the range
 */
template <class InputIt, class Equal>
InputIt unique(InputIt first, InputIt last, Equal eq) {
  auto orthoFirst {first}; // Holds the original position of "first"
  auto lastValid {first};  // Holds the "last" value for the valid range of unique elements

  // Runs through the entire range
  while (first != last) {
    bool unique = true; // Holds the information on whether the checked value is unique or not

    // Runs through the previous elements and checks for repeated elements
    for (auto index {orthoFirst}; index < first; ++index) {
      if (eq(*index, *first)) {
        unique = false;
        break;
      }
    }

    // Updates position of lastValid if a new unique element is found
    if (unique) {
        *lastValid = *first;
        ++lastValid;
    }
    ++first;
  }
  return lastValid;
}

template <class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p) {
  auto lastValid {first}; // Points to the end of the "true" range

  // Runs through the entire range
  while (first != last) {
    /**
     * Sends a found "true" element to the end of "true" range by swapping it
     * with the element just past the end of the "true" range and incrementing
     * lastValid by one
    */
    if (p(*first) == true) {
      std::swap(*first, *lastValid); // If element is already where it needs to be, swaps with itself
      ++lastValid;      
    }
    ++first;
  }

  return lastValid;
}

} // namespace graal.

#endif
