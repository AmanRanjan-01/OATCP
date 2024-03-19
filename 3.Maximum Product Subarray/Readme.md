The idea is to maintain 3 variables max_so_far, max_ending_here & min_ending_here. Iterate the indices 0 to N-1 and update the variables such that:
max_ending_here = maximum(arr[i], max_ending_here * arr[i], min_ending_here[i]*arr[i])
min_ending_here = minimum(arr[i], max_ending_here * arr[i], min_ending_here[i]*arr[i])
update the max_so_far with the maximum value for each index.
return max_so_far as the result.