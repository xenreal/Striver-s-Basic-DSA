def check_arm(n, a):
    cnt = 0
    if n == 1: 
        return 1
        
    while n > 0:
        cnt += 1     
        n = n // 10
    
    sum = 0   
    
    while a > 0:
        last_dig = a % 10                        
        sum += (last_dig ** cnt) 
        a = a // 10                              

    return sum

n = a = int(input("Enter a number greater than 0: "))
print("Is Armstrong number:", n == check_arm(n, a))

# better code

def is_armstrong(num: int) -> int:
    # Find the total number of digits (k)
    k = len(str(num))
    
    total_sum = 0
    
    # Extract digits and calculate power sums
    while num > 0:
        last_dig = num % 10
        
        # Add the digit raised to the power of k to our total
        total_sum = total_sum + (last_dig ** k)
        
        num = num // 10
        
    return total_sum

n = int(input("Enter the number: "))
print("Is Armstrong:", n == is_armstrong(n))