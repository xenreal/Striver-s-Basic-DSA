def rev(num:int) -> int:
    rev = 0
    if num == 1 or num == 0: print("Enter the number again")

    while num > 0:
        last_dig = num % 10
        rev = rev*10 + last_dig
        num = num // 10
    
    return rev

n = int(input("Enter the number: "))
print("is palindrone:" , n == rev(n))