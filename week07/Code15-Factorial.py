#!/usr/bin/env python3

n = int(input('Factorial of what?: '))
factorial = 1
i = 1
while i <= n:
	factorial *= i
	i += 1
print('{0}! = {1}'.format(n, factorial))