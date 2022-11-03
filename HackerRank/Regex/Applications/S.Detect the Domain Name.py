import re
from sys import stdin

print(";".join(sorted(set(re.findall(r"(?:http|https)\:\/\/(?:ww.\.)?([a-z0-9\-]+(?:\.[a-z0-9\-]+)+)", stdin.read(), flags=re.S|re.M)))))
