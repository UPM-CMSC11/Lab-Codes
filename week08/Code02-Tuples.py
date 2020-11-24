#!/usr/bin/env python3

student_tuple = ()
print(student_tuple, 'with length', len(student_tuple))

# Normal way of declaring a tuple
student_tuple = ('Juan', 'Dela Peña', 3.3)
print(student_tuple, 'with length', len(student_tuple))

# Another way of declaring a tuple
student_tuple = 'Juan', 'Dela Cruz', 3.3
print(student_tuple, 'with length', len(student_tuple))

# Singleton tuple
a_singleton_tuple = ('red',)
print('singleton:', a_singleton_tuple)

# Accessing tuple elements
time_tuple = (9, 16, 1)
time_seconds = time_tuple[0] * 3600 + time_tuple[1] * 60 + time_tuple[2]
print('Time', time_tuple, 'in seconds', time_seconds)

# Tuple is immutable so assigning a value to a tuple element causes a TypeError
# time_tuple[0] = 10

# Adding items to a tuple
tuple1 = (10, 20, 30)
print('tuple1:', tuple1)
tuple1 += (40, 50)
print('tuple1:', tuple1)

# Appending tuples to lists
numbers = [1, 2, 3, 4, 5]
print('numbers:', numbers)
numbers += (6, 7)
print('numbers:', numbers)

# Tuples may contain mutable objects
student_tuple = ('Juan', 'Dela Fuente', [98, 75, 87])
print('student_tuple:', student_tuple)
student_tuple[2][1] = 85
print('student_tuple:', student_tuple)
