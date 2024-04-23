# Working of Algorithm
The algorithm works by iteratively finding an augmenting path, which is a path from the source to the sink in the residual graph, i.e., the graph obtained by subtracting the current flow from the capacity of each edge. The algorithm then increases the flow along this path by the maximum possible amount, which is the minimum capacity of the edges along the path.
## Steps
1. Start with initial flow as 0.
2. While there exists an augmenting path from the source to the sink:  
3. Find an augmenting path using breadth-first search.
4. Determine the amount of flow that can be sent along the augmenting path, which is the minimum residual capacity along the edges of the path.
5. Increase the flow along the augmenting path by the determined amount.
6. Return the maximum flow.