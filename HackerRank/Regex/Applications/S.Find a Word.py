import re

text = "\n".join([ input() for _ in range(int(input()))])

for _ in range(int(input())): 
    print(len(re.findall(pattern=r"((?<=^)|(?<=\W))(" + input() + r")(?=($|\W))", string=text,)))