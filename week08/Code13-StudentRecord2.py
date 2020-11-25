studentNo = input('Student No: ')
name = input('Name: ')
course = input('Course: ')
record = '\n' + studentNo + ',' + name + ',' + course

with open('address.csv', 'a') as fh:
	fh.write(record)