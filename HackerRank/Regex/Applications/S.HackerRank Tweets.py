import re

regex = r"hackerrank"
count = 0
for _ in range(int(input())): 
    count += int(bool(re.findall(regex, input(), flags=re.I)))
print(count)