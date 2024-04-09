# Approach
1. Every time count reaches a number that the next element in nums is greater than it, we need a patch.
2. If we add the number itself, count can be doubled because we can add the new number to any of the previous numbers.
3. So if count = 7, and the next number in nums is 10, if we add 7 to nums now we have all numbers until 14.