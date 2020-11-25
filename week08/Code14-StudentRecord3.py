with open('address.csv') as fh:
	next(fh)
	for n, record in enumerate(fh):
		print(n, record)