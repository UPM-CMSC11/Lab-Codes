with open('address.csv') as fh:
	next(fh)
	for n, record in enumerate(fh):
		studentNo, name, course = record.split(',')
		print('Record', n)
		print(' Student Number:', studentNo)
		print(' Name:', name)
		print(' Course:', course)