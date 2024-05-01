# ALGORITHM:
1. The Algorithm aims to generate short forms for a set of dictionary words by considering all possible subsequences of length one to four characters from each word
2. To find the all subsequences , we have used the recursive function , which generates all the string upto length 4.
3. It maintains a current string and explores including or excluding each character from the input string to build all possible subsequences.
4. Each input string's subsequences, ranging from lengths 1 to 4, are printed in separate blocks, with each subsequence on a separate line.
5. Each block of subsequences is separated by two blank lines.
6. The time Complexity for the Algorithm is : exponential in the length of the input strings due to the generation of all possible subsequences up to length 4.
