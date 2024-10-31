Non-Repeating Element


Given a sorted list of numbers in which all elements appear twice except one element that appears only once, find the number that appears only once.

Example:
1, 1, 2, 3, 3, 4, 4
Here, ‘2’ appears once and all other elements appear twice.

findNonRepeatingElement([1, 1, 2, 3, 3, 4, 4]) => 2
Expected Time Complexity: O(log n)

Testing
Input Format
The first line contains 'T', denoting the no. of test cases.

Each test case consists of two lines. The first contains a number 'n' denoting the number of elements. The second line has ‘n’ space-separated numbers denoting the elements.

Output Format
For each test case, a line containing the non-repeating number.

Sample Input
3
1
3
3
1 2 2
5
3 3 4 4 5
Expected Output
3
1
5