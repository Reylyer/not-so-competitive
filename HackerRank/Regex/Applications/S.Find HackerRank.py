import re

for _ in range(int(input())): 
    hackconv = input()
    sel = 0
    if re.findall(r"^hackerrank.*", hackconv): sel += 1
    if re.findall(r".*hackerrank$", hackconv): sel += 2
    if   sel == 1: print(1)
    elif sel == 2: print(2)
    elif sel == 3: print(0)
    else         : print(-1)