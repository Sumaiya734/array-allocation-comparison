n = int(input("Enter size of array: "))
arr = [int(input(f"Element {i+1}: ")) for i in range(n)]

print("Stack Dynamic Array:")
print(*arr)
