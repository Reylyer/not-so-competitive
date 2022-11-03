import re

htmlstr = "\n".join([ input() for _ in range(int(input()))])
regex = r"(?<=\<)(?:\/?)(\w+)\s?(.*?)(?=\>)"
regex_peel = r"\w+(?=\=[\"\'].*[\"\'])"

table = {}
for tup in re.findall(regex, htmlstr):
    if tup[0] not in table:
        table[tup[0]] = []
    table[tup[0]] += re.findall(regex_peel, tup[1])

for tag in sorted(table.keys()):
    print(tag, ':', ",".join(sorted(set(table[tag]))), sep="")