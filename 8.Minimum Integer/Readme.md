# Approach :

1. At each step, we want to make a greedy choice that minimizes the current digit.
2. To achieve this, we use a stack to keep track of the digits in a way that allows us to simulate building the smallest number.
3. When encountering a digit smaller than the top of the stack, we have the opportunity to remove previous digits to achieve a smaller number.
4. While doing so, we decrease the count of remaining removals.
5. After processing all digits, we transfer the elements from the original stack to a second stack to build the result.
6. We handle cases such as removing leading '0's from the second stack.