# Approach
1. The approach runs in O(n^2) , First a variable ans is created which is intiliazed to 0.
2. Traverse a row and maintain a cnt variable intialized to 0 then from that row we take the next rows and check for the postitions where the number is 1, then we increment the cnt.
2. By coming out from the inner loop we will have the positions for which the corners were black.
3. then we use the combinatorics to choose two points from the cnt, which is cntnC2 = (cnt*(cnt-1))/2.
4. We add this cntC2 to our original answer as it is the subgrid with black corners.
5. Then we print the answer variable which tells the counts of number of subgrids having black corners.