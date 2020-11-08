#!/usr/bin/env python3
"""Compound interest computation using floats"""

principal = 1000
rate = 0.02
for year in range(1, 11):
    amount = principal * (1 + rate) ** year
    print(f'{year:>2}{amount:>10.2f}')
    # > - right aligned, 10 - field width, 2 - precision

print(f'Rate stored in float as {rate:.20f}')
