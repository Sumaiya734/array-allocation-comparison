n = int(input("Enter size of array: "))
arr = []
print("Enter", n, "elements:")
for _ in range(n):
    arr.append(int(input()))

print("Heap Dynamic Array:")
print(*arr)
