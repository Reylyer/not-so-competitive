import re

for _ in range(int(input())): 
    print("VALID" if re.match(pattern=r"^[_\.]\d+[a-zA-Z]*_?$", string=input(),) else "INVALID")