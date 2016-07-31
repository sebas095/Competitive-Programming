# -*- coding: utf-8 -*-
while True:
    a, b = map(int, raw_input().split(' '))
    if a + b == 0: break
    set1 = set(map(int, raw_input().split(' ')))
    set2 = set(map(int, raw_input().split(' ')))
    x = len(set1.difference(set2))
    y = len(set2.difference(set1))
    print min(x, y)
