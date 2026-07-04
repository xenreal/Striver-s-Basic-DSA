import math

def is_prime(n: int) -> bool:
    if n <= 1:
        return False
        
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False  
            
    return True  

n = int(input("Enter a number: "))
print("Is Prime:", is_prime(n))