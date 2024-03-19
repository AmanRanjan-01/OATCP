## Algorithm

1. The number of way to create this number using the dice(1 to 6) any number of times can be done by breaking the number to smaller numbers
2. We will create a Recursion function which will divide the number into smaller numbers and as it reaches 0, it will add 1 way to the current ways,so if(n==0)return 1 // this is the base case.
3. like we can use a loop starting from 1 to 6, and the number will be divided as n-1 , n-2 , n-3 ,n-4,n-5,n-6
4. The subtraction will be possible only if number if greater than the current value
5. for ex:- for(int i=1 ; i<=6;i++){ if(n<=i)func(n-i)};
6. As it will contain overlapping subproblems , therefore we will use a dp vector to store the ways for the smaller numbers , which will add the ways to our current number, so this type of dividing a larger number into smaller numbers is known as top-down dp.
7. About Recursive function :- Takes two parameters: n and a reference to a vector dp.
Base case: if n is 0, return 1.
If the result for n is already computed (stored in dp[n]), return it.
Initialize a variable sum to store the sum of all possible outcomes of rolling a dice.
Loop through all possible outcomes of rolling a dice (from 1 to 6):
If the outcome exceeds n, break the loop.
Recursively call solve for n-i, where i represents the current outcome of rolling the dice.
Add the result to sum.
Take the modulo of sum with mod.
Store the result in dp[n].
Return sum.

