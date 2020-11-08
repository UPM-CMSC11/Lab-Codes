#!/usr/bin/env python3
"""Comparing integers using if statements and comparison operators"""

# read first integer
number1 = int(input('Enter first integer: '))

# read second integer
number2 = int(input('Enter second integer: '))

if number1 == number2:
    print(number1, 'is equal to', number2)

if number2 != number2:
    print(number1, 'is not equal to', number2)

if number1 < number2:
    print(number1, 'is less than', number2)

if number1 > number2:
    print(number1, 'is greater than', number2)

if number1 <= number2:
    print(number1, 'is less than or equal to', number2)

if number1 >= number2:
    print(number1, 'is greater than or equal to', number2)

# Nonzero is considered true while zero is considered false
if 1:
    print('Nonzero values are true, so this will print.')

if 0:
    print('Zero is false, so this will not print.')
