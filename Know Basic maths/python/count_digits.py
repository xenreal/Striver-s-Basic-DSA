def count_dig(num: int) -> int:
    if num == 0: return 1
    c = 0
    while num > 0:
        num = num // 10
        c += 1
    return c

n = int(input("Enter a number: "))
print("The number of digits are: " , count_dig(n))

# more efficient and better way 

import math

def count_digits_log(num: int) -> int:
    if num == 0:
        return 1
    return math.floor(math.log10(num)) + 1

print("The number of digits are:", count_digits_log(12345))