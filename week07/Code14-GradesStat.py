#!/usr/bin/env python3
"""Compute for the grades statistics"""
import statistics

# Initialization phase
total = 0
gradeCounter = 0
grades = [98, 76, 87, 83, 90, 57, 79, 82, 94] # list of 10 grades

mean = statistics.mean(grades)
print(f'Mean is {mean}')
median = statistics.median(grades)
print(f'Median is {median}')
mode = statistics.mode(grades)
print(f'Mode is {mode}')
