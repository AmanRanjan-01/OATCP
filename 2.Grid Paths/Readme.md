## Algorithm
1. To find the number of ways to reach the bottom right cell, we can use the top-down dp for finding the ways.
As we can only move right and bottom if we start with top left cell , so starting from bottom right cell we can consider the left and up movements
2. we start for the bottom right cell move cell up or left recursively and check if it is valid or not if valid we again move to the left or up cell, if it reaches the top left cell that means there exists a path, therefore we will add 1 to our answer.
3. As it will have over lapping subproblems since we are moving to two directions, therefore, we need to have a dp state to store the values
2. About the recursive function : - a recursive function to compute the number of valid paths from the top-left corner (0, 0) to the bottom-right corner (n-1, n-1) of the grid. It takes four parameters:
i and j represent the current position in the grid.
v is the grid itself, represented as a vector of vectors of characters.
dp is a dynamic programming table used to store the results of subproblems.
3. It recursively explores two possible moves: going down (if (i-1, j) is valid) and going right (if (i, j-1) is valid). It stops if it encounters a blocked cell (denoted by '*'). The result of each subproblem is stored in the dp table to avoid redundant computation.
4. As it might happen that the path is gone outside grid therefor a checker function is implemeneted which validates the index i and j .This function checks whether a given position (i, j) is valid in the grid. It returns true if (i, j) is within the grid boundaries (from 0 to n-1), otherwise returns false.