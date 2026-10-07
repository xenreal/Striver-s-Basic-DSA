n = int(input("Enter the number of elements you want in array: "))
arr = []
for i in range (n):
    b = int(input("Enter the element: "))
    arr.append(b)

sum = 0
for i in range(n):
    sum += arr[i]

print (sum)