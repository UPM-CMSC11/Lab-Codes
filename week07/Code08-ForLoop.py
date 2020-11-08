#!/usr/bin/env python3

# for can iterate over each item in a sequence
# a string is a sequence
for character in 'Programming':
    print(character, end=' ')

# for can iterate over a list
total = 0
for number in [2, -3, 0, 17, 9]:
    total += number
    print('Adding', number)
print('Total:', total)

# for can be used with the built-in function range
# range() creates a sequence of consecutive integer from
# 0 up to the parameter (exclusive)
for counter in range(10):
    print(counter, end=' ')

print()
for counter in range(5, 10):
    print(counter, end=' ')

print()
for number in range(100):
    if number == 10:
        break
    print(number, end=' ')

print()
for number in range(10):
    if number == 5:
        continue
    print(number, end=' ')
