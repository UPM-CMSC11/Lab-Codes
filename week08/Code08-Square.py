#!/usr/bin/evn python3

def square(number):
    """Calculate the squares of number."""
    return number ** 2

for i in range(20):
    print(f'{i}^2 =', square(i))

print('(2.5)^2 =', square(2.5))
