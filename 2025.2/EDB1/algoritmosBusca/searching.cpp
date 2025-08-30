/*!
 * \file searching.cpp
 * Binary search, Linear search, Upper bound, lower bound implementation for an
 * array of integers.
 * \author Selan R. dos Santos
 * \date June 17th, 2021.
 */

// All algorithms implemented by Luis Filipe de Sousa
#include "searching.hpp"

namespace sa {

/*!
 * Performs a **linear search** for `value` in `[first;last)` and returns a
 * pointer to the location of `value` in the range `[first,last]`, or `last` if
 * no such element is found.
 * \param first Pointer to the begining of the data range.
 * \param last Pointer just past the last element of the data range.
 * \param value The value we are looking for.
 */
value_type *lsearch(value_type *first, value_type *last, value_type value) {
  while (first != last) {
    if (*first == value) return first;
    ++first;
  }
  return last;
}

/*!
 * Performs a **binary search** for `value` in `[first;last)` and returns a
 * pointer to the location of `value` in the range `[first,last]`, or `last` if
 * no such element is found.
 * \note The range **must** be sorted.
 * \param first Pointer to the begining of the data range.
 * \param last Pointer just past the last element of the data range.
 * \param value The value we are looking for.
 */
value_type *bsearch(value_type *first, value_type *last, value_type value) {
  value_type* sudoLast = last;
  while (first != sudoLast) {
    value_type *middle = (first + (sudoLast - first) / 2);
    if (value == *middle) return middle;
    else if (value < *middle) {
      sudoLast = middle;
    }
    else {
      first = ++middle;
    }
  }
  return last;
}
/*!
 * Performs a **binary search** for `value` in `[first;last)` and returns a
 * pointer to the location of `value` in the range `[first,last]`, or `last` if
 * no such element is found.
 * \note The range **must** be sorted.
 * \param first Pointer to the begining of the data range.
 * \param last Pointer just past the last element of the data range.
 * \param value The value we are looking for.
 */
value_type* bsearch_rec(value_type *first, value_type *last, value_type value) {
  static value_type** sudoLast = &last;
  if (last != first) {
    value_type *middle = first + (last - first) / 2;

    if (value == *middle) {
      return middle;
    }

    if (value < *middle) {
      return bsearch_rec(first, middle, value);
    }

    return bsearch_rec(++middle, last, value);
  }
  return *sudoLast;
}
/*!
 * Returns a pointer to the first element in the range `[first, last)` that is
 * _not less_  than (i.e. greater or equal to) `value`, or `last` if no such
 * element is found.
 * \note The range **must** be sorted.
 * \param first Pointer to the begining of the data range.
 * \param last Pointer just past the last element of the data range.
 * \param value The value we are looking for.
 */
value_type *lbound(value_type *first, value_type *last, value_type value) {
  value_type* answer = last;
  while (first != last) {
    value_type *middle = (first + (last - first) / 2);

    if (value <= *middle) {
      answer = middle;
      last = middle;
    }

    else {
      first = ++middle;
    }
  }
  return answer;
}

/*!
 * Returns a pointer to the first element in the range `[first, last)` that is
 * _greater_  than `value`, or `last` if no such element is found.
 * \note The range **must** be sorted.
 * \param first Pointer to the begining of the data range.
 * \param last Pointer just past the last element of the data range.
 * \param value The value we are looking for.
 */
value_type *ubound(value_type *first, value_type *last, value_type value) {
  value_type* answer = last;
  while (first != last) {
    value_type *middle = (first + (last - first) / 2);

    if (value < *middle) {
      answer = middle;
      last = middle;
    }
    
    else {
      first = ++middle;
    }
  }
  return answer;
}

value_type *tsearch(value_type *first, value_type *last, value_type value) {
  value_type* sudoLast = last;
  while (first != sudoLast) {
    value_type *middle1 = (first + (sudoLast - first) / 3);
    value_type *middle2 = (middle1 + (sudoLast - first) / 3);
    if (value == *middle1) return middle1;
    if (value == *middle2) return middle2;
    else if (value < *middle1) {
      sudoLast = middle1;
    }
    else if (value > *middle2) {
      first = ++middle2;
    }
    else {
      sudoLast = middle2;
      first = ++middle1;
    }
  }
  return last;
}
} // namespace sa
