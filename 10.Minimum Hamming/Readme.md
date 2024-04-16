# Approach
1. As given Hamming distance is the number of positions of bits differ in two numbers.
2. Thereby , using this we can find the different positions of bits between all the pairs. But it will compute in O(n^2) complexity. 
3. we can optimize this by using O(31*n) time complexity. i.e. O(n) by counting if the bit is set or unset in all the numbers, and the hamming distance will be the multilplication of the two numbers, as it will give the distance between every pairs.
4. So, we take the totalHammingDistance variable initializing it with zero, then we run a loop for 31 times , each time we run through the array and cnt the positions of the bit as set or unset, then the distance between every pairs is the multiplication of the cnt of set and unset bit for that particular position and adding it to the totalHammingDistance variable.
5. Finally we print the variable which gives the total Hamming distance between every pairs.