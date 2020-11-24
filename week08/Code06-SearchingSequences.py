#!/usr/bin/env python3

numbers = [3, 7, 1, 4, 2, 8, 5, 6]
print('numbers:', numbers)
print('index of 5:', numbers.index(5))
# ValueError occurs if the element is not in the list
#print('index of 9:', numbers.index(9))

numbers *= 2
print('numbers:', numbers)

# another version of index
# index(element-to-search, starting-index)
print('index of 7 from index 5:', numbers.index(5, 7))

# another version of index
# index(element-to-search, starting-index, ending-index-exclusive)
print('index of 7 from 0 to 4 (exclusive):', numbers.index(7, 0, 4))

# Operators in and not in
print('1000 in numbers:', 1000 in numbers)
print('5 in numbers:', 5 in numbers)

print('1000 not in numbers:', 1000 not in numbers)
print('5 not in numbers:', 5 not in numbers)

# Operator in can be used to prevent a ValueError
key = 1000
if key in numbers:
    print(f'found {key} at index {numbers.index(key)}')
else:
    print(f'{key} not found')
