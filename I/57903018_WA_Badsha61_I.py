def max_equal_subarray_length(t, test_cases):
    results = []
    
    for case in test_cases:
        n, a, b = case
        # Dictionary to count occurrences of each number
        count = {}
        
        # Count occurrences in array a
        for num in a:
            if num in count:
                count[num] += 1
            else:
                count[num] = 1
        
        # Count occurrences in array b
        for num in b:
            if num in count:
                count[num] += 1
            else:
                count[num] = 1
        
        # The maximum length of contiguous segments of equal values
        max_length = 0
        
        # Check the maximum length of contiguous segments
        for num, cnt in count.items():
            max_length = max(max_length, cnt)
        
        results.append(max_length)
    
    return results

# Input reading
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    test_cases.append((n, a, b))

# Get results
results = max_equal_subarray_length(t, test_cases)

# Output results
for result in results:
    print(result)