#!/bin/python

import sys


for _ in range (input()):
    a,b=[int(x) for x in raw_input().split()]
    c=raw_input()
    A=0
    for i in range(a-b+1):
        t=1
        for j in range (i,i+b):
            t=t*int(c[j])
        if t> A :
            A=t
    print A
