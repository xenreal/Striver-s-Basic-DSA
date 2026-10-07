n = int(input("Enter the number of elements you want in array: "))
arr = []
for i in range (n):
    b = int(input("Enter the element: "))
    arr.append(b)

s = 0
for i in range(n):
    s += 1 if arr[i] % 2 !=0 else 0

print (s)