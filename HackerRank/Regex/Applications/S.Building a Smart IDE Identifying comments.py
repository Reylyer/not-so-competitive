import re
from sys import stdin

print("\n".join(["\n".join([b.lstrip() for b in a.split("\n")])  for a in re.findall(pattern=r"(\/\/.*?(?=\n)|\/\*.*?\*/)", string=stdin.read(), flags=re.X|re.S)]))