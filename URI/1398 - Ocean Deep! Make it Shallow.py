import sys

inputs = ""

for line in sys.stdin:
	inputs += line

inputs = "".join(inputs.split('\n'))
inputs = inputs.split('#')

for s in inputs:
	if len(s) > 0:
		a = int(s, 2)
		if a % 131071 == 0:
			print "YES"
		else:
			print "NO"
