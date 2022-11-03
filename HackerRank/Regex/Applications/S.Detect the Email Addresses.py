import re
from sys import stdin

print(";".join(sorted(set(re.findall(r"(?:\w+\.)*?\w+@\w+(?:\.\w+)+", stdin.read(), flags=re.S|re.M)))))
