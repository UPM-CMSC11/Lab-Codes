#!/usr/bin/env python3

import random

numbers = []
for i in range(20):
    numbers.append(random.randrange(0, 50))

print('Sorting...')
print('numbers:', numbers)
numbers.sort()
print('numbers:', numbers)

print('Reverse sorting...')
del numbers[:]
for i in range(20):
    numbers.append(random.randrange(0, 50))
print('numbers:', numbers)
numbers.sort(reverse=True)
print('numbers:', numbers)

del numbers[:]
for i in range(20):
    numbers.append(random.randrange(0, 50))

# Built-in function sorted returns a new list containing
# the sorted elements of its arguments sequence with the
# original sequence unmodified.
print('Using sorted built-in function...')
print('numbers:', numbers)
ascending_numbers = sorted(numbers)
print('numbers:', numbers)
print('ascending_numbers:', ascending_numbers)
descending_numbers = sorted(numbers, reverse=True)
print('numbers:', numbers)
print('descending_numbers:', descending_numbers)
