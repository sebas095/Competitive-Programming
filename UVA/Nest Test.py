n = int(input())
s = set()
while n != 0:
    for x in input().split(' '):
        s.add(int(x))
        n -= 1
for i in range(1, 3002):
    if not i in s:
        print(i)
        break