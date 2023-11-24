import csv
with open('emp.csv','r')as efile:
	data=csv.read(efile)
	for i in data:
	 print(i)
