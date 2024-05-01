# Algorithm
1. First, we find a node which have a degree 1.
2. If the degree node 1 is not present then we traverse from any other node.
3. After finding the node, we use the DFS based Traversal for constructing the path.
4. While using DFS we ensure that we are travelling the edge only once and storing the path in a 2D vector.
5. After this we will get the path in reverse order. Therefore ,we reverse the resultant path vector and print the result.
6. The overall time complexity:- O(V+E) and Space Complexity is: - O(V+E)