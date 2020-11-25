studentNo = input('Student No: ')
name = input('Name: ')
course = input('Course: ')
record = studentNo + ',' + name + ',' + course

with open('address.csv', 'w') as fh:
	fh.write(record)