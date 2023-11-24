f=open('stud.txt','r')
odd=open('odd.txt','w')
even=open('even.txt','w')
content=f.readlines()
print("content of the file are:",content)
for i in range(len(content)):
	if i%2==0:
	 even.write(content[i])
	else:
	odd.write(content[i])

