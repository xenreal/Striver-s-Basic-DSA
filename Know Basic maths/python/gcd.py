def gcd (n1,n2):
   gcd = 1
   for i in range(1,min(n1,n2)+1):
       if n1 % i == 0 and n2 % i == 0:
          gcd = i
   return gcd
   
   

n1 = int(input("Enter number 1 (greater than 0): "))
n2 = int(input("Enter number 2 (greater than 0): "))
print("gcd is" , gcd(n1,n2)) 

# better approach

def gcd_optimal(n1: int, n2: int) -> int:
    while n1 > 0 and n2 > 0:
        if n1 > n2:
            n1 = n1 % n2  # Replace the larger number with the remainder
        else:
            n2 = n2 % n1
            
    # When the loop breaks, return the number that didn't hit 0
    return n1 if n1 > 0 else n2

n1 = int(input("Enter number 1 (greater than 0): "))
n2 = int(input("Enter number 2 (greater than 0): "))
print("gcd is" , gcd(n1,n2)) 