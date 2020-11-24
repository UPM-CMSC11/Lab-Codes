#!/usr/bin/env python3
"""Illustrating passing arguments to functions"""
# All non-primitive arguments are passed to a function by reference.
def func(x):
    x = 12

def funcList(x):
    x.append(10)

y = 20
print('y =', y)
func(y)
print('y =', y)

z = [1, 2, 3]
print('z:', z)
funcList(z)
print('z:', z)
