# k-th-largest-number-among-N-numbers
C++ program that finds kth largest number among N numbers by using two different algorithms and show the execution time of algorithm. 

Algorithm 1 Steps(AlgorithmSortAll): 
1) Get numbers from testfile and store them in array. 
2) Sort the array with numbers in decreasing order by using Insertion Sort which is simple sorting algorithms(read more in https://www.geeksforgeeks.org/insertion-sort/).
3) Lastly we just return the number in our array at index k-1 (cuz k was kth largest number and the array starts from index 0..... so for Ex if we want to have 3rd largest number we return the number at index [2] and it will be 3rd largest number.

Algorithm 2 Steps(AlgorithmSortK): 
1) We take first k numbers from the testfile and store them in array. 
2) Doing the same thing as in the first algorithm(sort by sing insertion sort).
3) Then we read the remaining numbers in testfile one by one and check by using if else statements. 
If the number is bigger than the number in the kth position in array we put it in this kth position (the number in kth posotion will be replaced by another bigger number from testfile). After replacement we just do the Insertion Sort and move one to the next number in testfile. Looping.  
If the number is smaller we just ignore it. 
4) Return number at index k-1.

Algorithm 3 Steps(AlgorithmSortHeap): 

This algorithm will use Heap (minheap) structure to find kth largest number in O(NlogN) time (much faster then previous two algorithms, about Binary Heap read more in https://www.geeksforgeeks.org/binary-heap/). Heap works in this way: 
1) It takes first k numbers insert it in heap one by one (we do k times insert operation).
2) Take remaining numbers one by one and comparing them with min element(since we imlement minHeap the root node always includes min element among k numbers). If new numbers is bigger than the root we remove the root (perform deleteMin) and insert the new number. Otherwise, (if new number is smaller) we do nothing.
3) Return the root element. At the end the root node will be kth largest element. 
