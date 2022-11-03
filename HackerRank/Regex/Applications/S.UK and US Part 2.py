import re

text = "\n".join([ input() for _ in range(int(input()))])

for _ in range(int(input())):
    ukus = input()
    print(len(re.findall( ukus[:ukus.find("ou")] + r"(?:ou|o)" + ukus[ukus.find("ou")+2:] + r"\b", text)))