#!/usr/bin/env python3

grade = float(input('Enter grade in percentage: '))

if grade >= 93.0:
    print("Final grade is 1.0")
elif grade >= 90.0 and grade < 93.0:
    print('Final grade is 1.25')
elif grade >= 87 and grade < 90.0:
    print('Final grade is 1.5')
elif grade >= 84 and grade < 87.0:
    print('Final grade is 1.75')
elif grade >= 80 and grade < 84.0:
    print('Final grade is 2.0')
elif grade >= 75 and grade < 80.0:
    print('Final grade is 2.25')
elif grade >= 70 and grade < 75.0:
    print('Final grade is 2.5')
elif grade >= 65 and grade < 70.0:
    print('Final grade is 2.75')
elif grade >= 60 and grade < 65.0:
    print('Final grade is 3.0')
elif grade >= 55 and grade < 60.0:
    print('Final grade is 4.0')
    print('You need to take the removal exam')
else:
    print('Final grade is 5.0')
    print('You have to retake the subject')
