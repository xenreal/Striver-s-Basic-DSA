# O(N) complexity
def print_div(n: int) -> int:
    div_lis = []
    if n == 1: 
        print (div_lis)
        return
    for i in range(1,n+1):
        if n % i == 0:
            div_lis.append(i)
    print(div_lis)

n = int(input("Enter the number: "))
print_div(n)

# better code with O(N^1/2) complexity

import math

def print_div_optimal(n: int):
    div_lis = []
    
    # Loop only up to the square root of n
    # For n=36, int(math.sqrt(36)) + 1 means range(1, 7) -> loops 1 to 6
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            div_lis.append(i)  # Append the first divisor of the pair
            
            # If the paired divisor is different (e.g., 2 and 18), append it too
            # This check prevents adding '6' twice when i = 6 for 36
            if i != n // i:
                div_lis.append(n // i)
                
    div_lis.sort()
    print(div_lis)

n = int(input("Enter the number: "))
print_div_optimal(n)