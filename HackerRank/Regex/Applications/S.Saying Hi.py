import re

for _ in range(int(input())):
    res = re.match(pattern=r"^[Hh][Ii]\s[^Dd].*", string=input()) 
    if res:
        print(res[0])
