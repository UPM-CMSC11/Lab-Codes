#!/usr/bin/env python3
"""Class average program with sentinel-controlled iteration"""

# Initialization phase
total = 0
gradeCounter = 0

# Processing phase
grade = int(input('Enter grade, -1 to end: '))

while grade != -1:
    total += grade
    gradeCounter += 1
    grade = int(input('Enter grade, -1 to end: '))

# Termination phase
if gradeCounter != 0:
    average = total / gradeCounter
    print(f'Class average is {average:.2f}')
else:
    print('No grade were entered')
