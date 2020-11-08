#!/usr/bin/env python3
"""Class average program with sequence-controlled iterations"""

# Initialization phase
total = 0
gradeCounter = 0
grades = [98, 76, 87, 83, 90, 57, 79, 82, 94] # list of 10 grades

# Processing phase
for grade in grades:
    total += grade
    gradeCounter += 1

# Termination phase
average = total / gradeCounter
print(f'Class average is {average}')
# f-string (formatted string)
# placeholder indicated by {} is replaced by a value
