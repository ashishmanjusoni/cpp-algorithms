[Algorithms](#algorithms)<br>
[Numeric](#numeric)<br>
[Sorting Algorithms](#sorting)<br>

<a name="algorithms"/>

## Algorithms

This repository contains all algorithms (like sort, binary search, aggregation function etc.) design in c++ programming language.

## Header defined function

### algo::reverse
````
template<class BidirectionalIterator> void reverse(BidirectionalIterator begin, BidirectionalIterator end);
````
Reverse the order of the elements in the range [begin,end). Through the function call `iter_swap` which swaps two iterator elements.
#### Parameters
```
begin,end: is an inital and last position of the sequence to be sorted. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by  begin but not pointed by end. (1)(2)
```
---
### algo::sort
````
template<class RandomAccessIterator> void sort(RandomAccessIterator begin, RandomAccessIterator end); (1)
template<class RandomAccessIterator,class Compare> void sort(RandomAccessIterator begin, RandomAccessIterator end, Compare comp); (2)
````
Sort the elements in the reage [begin,end) in accending order. The elements are compared using `operator<` for the first version and `comp` for second version. Equivalent elements are not guarenteed to keep there relative order.
#### Parameters
```
begin,end: is an inital and last position of the sequence to be sorted. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by  begin but not pointed by end. (1)(2)
comp: is a binary function which accepts two elements in the range as argurment make comparision between them and return a bool value (2)
```
---
### algo::min_element
````
template<class ForwardIterator> min_element(ForwardIterator begin, ForwardIterator end);(1)
template<class ForwardIterator,class Compare> min_element(ForwardIterator begin,ForwardIterator end, Compare comp);(2)
````
Returns an iterator pointing to the element with the smallest value in the range [begin,end)
The comparison performed using `operator<` for first version and using `comp` for second version.
#### Parameters
```
begin,end: is an inital and last position of the sequence to compare. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by begin but not pointed by end. (1)(2)
comp: is a binary function which accepts two elements in the range as argurment make comparision between them and return a bool value (2)
```
---
### algo::max_element
````
template<class ForwardIterator> max_element(ForwardIterator begin, ForwardIterator end);(1)
template<class ForwardIterator,class Compare> max_element(ForwardIterator begin,ForwardIterator end, Compare comp);(2)
````
Returns an iterator pointing to the element with the largest value in the range [begin,end)
The comparison performed using `operator>` for first version and using `comp` for second version.
#### Parameters
```
begin,end: is an inital and last position of the sequence to compare. The range used is [begin,end) which contains all elemetns between begin and end, including the element pointed by begin but not pointed by end. (1)(2)
comp: is a binary function which accepts two elements in the range as argurment make comparision between them and return a bool value (2)
```
---

<a name="numeric"/>

## Numeric

### algo::accumulate
````
template<class InputItr, class T> T accumulate(InputItr begin, InputItr end, T initial);
````
Compute the sum of the given value initial and elements in the range [begin,end)
#### Parameters
```
begin,end: is an initial and last position of the squence. The range used in [begin,end) which contains all elements between begin and end, including the elemtn pointed by begin but not pointed by end.
initial: inital value of the accumulate
```
---

<a name="sorting"/>

## Sorting Algorithms

### algo::bubble_sort
```
template<typename RandomIter, typename Compare> void bubble_sort(RandomIter begin, RandomIter end,Compare cmp)
```
Sort the given element from range [begin,end). The collection should randomly accessible such as array, vector etc.
```
Time Complexity : O(n^2)
```
