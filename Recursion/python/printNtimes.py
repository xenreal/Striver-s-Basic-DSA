def print_times(n: int) -> int:
    print("Hello")
    if n == 1: 
        return
    print_times(n-1)

n = int(input("Enter the number: "))
print_times(n)