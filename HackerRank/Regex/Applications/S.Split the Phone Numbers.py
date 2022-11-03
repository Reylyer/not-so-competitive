import re

regex = r"(\d{1,3})(.)(\d{1,3})\2(\d{4,10})"

for _ in range(int(input())):
    print("\n".join([ f"CountryCode={a[0]},LocalAreaCode={a[2]},Number={a[3]}" for a in re.findall(pattern=regex, string=input())]))
