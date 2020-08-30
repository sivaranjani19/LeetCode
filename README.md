# LeetCode
39. Combination Sum
  Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations in candidates where the candidate numbers sums to target.The same repeated number may be chosen from candidates unlimited number of times.
  The given problem is a Backtracking problem
  * Sort the given array.
  Call a backtracking helper function which accepts six input parameters. 
      1. Given input array
      2. Integer variable s which holds the sum
      3. Given target
      4. Integer array to hold each array elements of the result array
      5. Result array 
      6. Integer variable to iterate through the array elements.
  In the backtrack helper function we take a for loop and loop through the given array
    1. If the sum + candidates[i] is less than the target we recurse the helper function with the new sum and i is incremented.
    2. If the sum is greater than the target we break the loop and clear the temporary array(ans) elements
    3. If sum + candidates[i] == target then we push the temporary array(ans) elements to the result array and pop all the ans array elemnts.
    4. The temporary array(ans) elements are cleared each time before entering the loop.
    
   Time: O(l^k)
       Where l is the length of the array, k is the length of the longest possible combination (namely target / minInArray).
       i.e. If the min value in array is 1, and target is 9, the longest length of possible combination is 9 (9/1)

   Space: Space: O(k)
      For storing the path, which could be k long at most.
