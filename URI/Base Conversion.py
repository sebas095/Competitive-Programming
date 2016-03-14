tc = input()
i = 1

while tc > 0:
	num, base = raw_input().split(' ')
	print "Case " + str(i) + ":"
	tc -= 1
	i += 1

	if base == "bin":
		dec = int(num, 2)
		print str(dec) + " dec"
		print hex(dec).split('x')[1] + " hex"

	elif base == "dec":
		dec = int(num)
		print hex(dec).split('x')[1] + " hex"
		print bin(dec).split('b')[1] + " bin"
		
	else:
		hexa = '0x' + num
		dec = int(hexa, 16)
		print str(dec) + " dec"
		print bin(dec).split('b')[1] + " bin"

	print ""