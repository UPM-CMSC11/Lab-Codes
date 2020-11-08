#!/usr/bin/env python3

grade = int(input('Enter grade in percentage: '))

if grade >= 93:
    print("Final grade is 1.0")
elif grade >= 90:
    print('Final grade is 1.25')
elif grade >= 87:
    print('Final grade is 1.5')
elif grade >= 84:
    print('Final grade is 1.75')
elif grade >= 80:
    print('Final grade is 2.0')
elif grade >= 75:
    print('Final grade is 2.25')
elif grade >= 70:
    print('Final grade is 2.5')
elif grade >= 65:
    print('Final grade is 2.75')
elif grade >= 60:
    print('Final grade is 3.0')
elif grade >= 55:
    print('Final grade is 4.0')
    print('You need to take the removal exam')
else:
    print('Final grade is 5.0')
    print('You have to retake the subject')
