import csv
records = list(csv.reader(open('address.csv')))
for n, record in enumerate(records[1:]):
	studentNo, name, course = record
	print('Record', n)
	print(' Student Number:', studentNo)
	print(' Name:', name)
	print(' Course:', course)
	print()