1. Let the array elements be: [a b c d e].
2. Length of array represented by N = 5
3. Sum of elements of array represented by SUM = a + b + c + d + e
4. Now, as per the question :
5.  F(0) = (0 * a) + (1 * b) + (2 * c) + (3 * d) + (4 * e) = 0 + b + 2c + 3d + 4e
    F(1) = (1 * a) + (2 * b) + (3 * c) + (4 * d) + (0 * e) = a + 2b + 3c + 4d + 0
    F(2) = (2 * a) + (3 * b) + (4 * c) + (0 * d) + (1 * e) = 2a + 3b + 4c + 0 + e
6. Now subtracting 2 equations,
    F(1) - F(0) = a + b + c + d - 4e = a + b + c + d + e - 5e
    Therefore, F(1) = F(0) + a + b + c + d + e - 5e = F(0) + SUM - N*e
    F(2) - F(1) = a + b + c + e - 4d = a + b + c + d + e - 5d
    Therefore, F(2) = F(1) + a + b + c + d + e - 5d = F(1) + SUM - N*d
7. Generalizing it, we get the following relation:
    F(K) = F(K-1) + SUM - N * (( K-1)th element from end of array)
i.e. F(K) = F(K-1) + SUM - N * (array [N - 1 - (K-1)]) = F(K-1) + SUM - N * (array [N - K])
8. We can now use the DP state to store the previous calculated values