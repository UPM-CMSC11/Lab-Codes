#!/usr/bin/env python3

a = [[77, 68, 86, 73],
     [96, 87, 89, 81],
     [70, 90, 86, 81]]

print('a:', a)

for i, row in enumerate(a):
    for j, item in enumerate(row):
        print(f'a[{i}][{j}]=[{item}] ', end='')
    print()
