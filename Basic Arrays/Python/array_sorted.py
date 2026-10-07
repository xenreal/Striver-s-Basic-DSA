n = int(input("Enter the number of elements you want in array: "))
arr = []
for i in range (n):
    b = int(input("Enter the element: "))
    arr.append(b)

s = True
for i in range(n-1):
    if arr[i] > arr[i+1]: 
     s = False
     break  
    

print (f'Is the array sorted? {s}')