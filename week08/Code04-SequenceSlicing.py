#!/usr/bin/env python3

numbers = [2, 3, 5, 7, 11, 13, 17, 19]
print('numbers:', numbers)
print('numbers[2:6]:', numbers[2:6])

# if the starting index is omitted, 0 is assumed
print('numbers[:6]:', numbers[:6])
print('numbers[0:6]:', numbers[0:6])

# if the ending index is omitted, the length of
# the sequence is assumed
print('numbers[6:]', numbers[6:])
print('numbers[6:len(numbers)]', numbers[6:len(numbers)])

# Omitting both the start and ending indices copies
# the entire sequence.
print('numbers[:]', numbers[:])

# Slicing with steps
print('numbers[::2]:', numbers[::2])

# Slicing with negative indices and steps
print('numbers[::-1]:', numbers[::-1])
print('numbers[-1:-9:-1]', numbers[-1:-9:-1])

# You can modify a list by assigning to a slice of it
# The rest of the list is unchanged
print('Modifying...')
numbers[0:3] = ['two', 'three', 'five']
print('numbers:', numbers)
numbers[0:3] = []
print('numbers:', numbers)

print('Resetting contents...')
numbers = [2, 3, 5, 7, 11, 13, 17, 19]
numbers[::2] = [100, 100, 100, 100]
print('numbers:', numbers)

print('Deleting the list...')
print('Memory location:', id(numbers))
numbers[:] = []
print('numbers:', numbers)
print('Memory location:', id(numbers))

# This is not deleting technically.
numbers = [2, 3, 5, 7, 11, 13, 17, 19]
print('numbers:', numbers)
print('Memory location:', id(numbers))
numbers = []
print('numbers:', numbers)
print('Memory location:', id(numbers))

# Using the del statement
print('Using the del statement...')
numbers = list(range(0, 10))
print('numbers:', numbers)
del numbers[-1]
print('del numbers[-1]')
print('numbers:', numbers)

print('del numbers[0:2]')
del numbers[0:2]
print('numbers:', numbers)

print('del numbers[::2]')
del numbers[::2]
print('numbers:', numbers)

print('Deleting the entire list')
del numbers[:]
print('numbers:', numbers)

# Variables can also be deleted
del numbers
#print('numbers:', numbers)
