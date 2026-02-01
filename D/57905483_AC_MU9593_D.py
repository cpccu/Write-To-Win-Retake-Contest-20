t = int(input())  
results = []

for _ in range(t):
    x = int(input())

    y = x - 1
    results.append(y)


print("\n".join(map(str, results)))
