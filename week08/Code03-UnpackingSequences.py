#!/usr/bin/env python3

# Any sequences can be unpacked
student_tuple = ('Juan', [98, 85, 87])
first_name, grades = student_tuple
print('First name:', first_name)
print('Grades:', grades)

# Unpacking a string
first, second = 'hi'
print(f'{first}, {second}')

# Unpacking a tuple
number1, number2, number3 = (2, 3, 4)
print(f'{number1}   {number2}   {number3}')

# Unpacking a sequence generated by range
number1, number2, number3 = range(10, 40, 10)
print(f'{number1}   {number2}   {number3}')

# Applications of packing and unpacking
# Swapping values
number1 = 99
number2 = 22
print(f'number1 = {number1}; number2 = {number2}')
number1, number2 = (number2, number1)
print(f'number1 = {number1}; number2 = {number2}')

# Using range to produce a sequence of index values, then accessing
# its elements in a for loop using the index values is error-prone
# because you could pass the wrong arguments to range.
# A safer and preferred way is to use the enumerate function.
# The enumerate function receives an iterable and creates an
# iterator that, for each element, returns a tuple containing
# the element's index and value.
colors = ['red', 'orange', 'yellow']
print(list(enumerate(colors)))
print(tuple(enumerate(colors)))
for index, value in enumerate(colors):
    print(f'{index}: {value}')