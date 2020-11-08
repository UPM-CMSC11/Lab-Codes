#!/usr/bin/env python3

base = int(input('Base: '))
exponent = int(input('Exponent: '))

product = 1
if exponent != 0:
    counter = 1
    while (counter <= exponent):
        product = product * base
        counter += 1
        # NOTE: Preincrement and postincrement are not available in Python
print(base, '^', exponent, '=', product)
