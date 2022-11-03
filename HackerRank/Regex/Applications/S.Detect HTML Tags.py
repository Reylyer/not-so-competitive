import re

htmlstr = ""
res = []
regex = r"((?<=\<)(?:\s*)\/?(\w+)(?:.*?)(?=\>))"

    
for _ in range(int(input())):
    htmlstr += input()
    
print(";".join(sorted(set([ a[1] for a in re.findall(pattern=regex, string=htmlstr, flags=re.X|re.S)]))))

# just for fun
# import re
# print(";".join(sorted(set([ a[1] for a in re.findall(pattern=r"((?<=\<)\s*\/?(\w+).*?(?=\>))", string="\n".join([input() for _ in range(int(input()))]), flags=re.X|re.S)]))))