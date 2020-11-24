#!/usr/bin/env python3

c = [-45, 6, 0, 72, 1543]
print('c:', c)

d = ['Juan', 'Cruz', 3.57, 2022]
print('d:', d)

# Accessing elements of list
print('Accessing c')
print('c[0] =', c[0])
print('c[4] =', c[4])

# Determining the length of a list
print('Length of c:', len(c))

# Negative indices are used to access from the end of the list
print('c[-1] =', c[-1])
print('c[-5] =', c[-5])

# Lists are mutable
print('Changing c')
c[4] = 17
print('c:', c)

# Some sequences are immutable
s = 'hello'
# s[0] = 'H'

# Accessing a nonexistent element results to runtime error
# print(c[100])

# Appending to a list with +=
print('Appending to a list')
a_list = []
print('a_list:', a_list)
for number in range(1, 6):
    a_list += [number]
print('a_list:', a_list)

# When the left operand of += is a list, the right operand
# must be iterable. Otherwise, a TypeError occurs.
letters = []
print('letters:', letters)
letters += 'Python'
print('letters:', letters)

# Concatenating lists with +
list1 = [10, 20, 30]
list2 = [40, 50]
concatenated_list = list1 + list2
print('list1:', list1)
print('list2:', list2)
print('concatenated_list:', concatenated_list)

# Using for and range to access list indices and values
for i in range(len(concatenated_list)):
    print(f'{i}: {concatenated_list[i]}')

# You can compare entire lists element-by-element using
# comparison operators
a = [1, 2, 3]
b = [1, 2, 3]
c = [1, 2, 3, 4]
print('a == b:', a == b)
print('a == c:', a == c)
print('a < c:', a < c)
print('c >= b:', c >= b)
