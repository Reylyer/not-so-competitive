import re

text = "\n".join([ input() for _ in range(int(input()))])

for _ in range(int(input())):
    ukus = input()
    print(len(re.findall( ukus[:-2] + r"[sz]e\b", text)))