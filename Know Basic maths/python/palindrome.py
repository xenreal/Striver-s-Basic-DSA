num = int(input("Enter the number: "))
duplicate = num 
rev = 0

while num > 0:
    last_dig = num % 10
    rev = rev * 10 + last_dig
    num = num // 10

print("Is Palindrome:", duplicate == rev)