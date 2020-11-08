#!/usr/bin/env python3
"""Find the minimum and maximum of three values"""

number1 = int(input('Enter first integer: '))
number2 = int(input('Enter second integer: '))
number3 = int(input('Enter third integer: '))

minimum = number1

if number2 < number1:
    minimum = number2

if number3 < minimum:
    minimum = number3

print('Minimum value is', minimum)

# Built-in functions are available for minimum and maximum
minimum = min(number1, number2, number3)
print('Minimum value (via min function) is', minimum)

maximum = max(number1, number2, number3)
print('Maximum value is', maximum)
