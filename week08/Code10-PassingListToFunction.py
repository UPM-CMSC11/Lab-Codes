#!/usr/bin/env python3

def modify_elements(items):
    """Multiplies all element values in items by 2."""
    for i in range(len(items)):
        items[i] *= 2

numbers = [10, 3, 7, 1, 9]
print(numbers)
modify_elements(numbers)
print(numbers)

numbers_tuple = (10, 20, 30)
print(numbers_tuple)
#modify_elements(numbers_tuple)
