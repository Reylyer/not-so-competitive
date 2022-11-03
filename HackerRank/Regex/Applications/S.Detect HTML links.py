
import re

htmlstr = ""
res = []

regex = r"""
(?<=\<a)
    (?:\s*href\=")
    (.+?(?="))
    (?:.*?"\>)
    (.*?)
(?=\<\/a\>)
"""
re_peel = r"""
^(?:\<\/?.*?\>)*\s*(.*?)\s*(?:\<\/?.*?\>)*$
"""
for _ in range(int(input())):
    htmlstr += input()

print("\n".join(([ f"{a[0]},{re.findall(pattern=re_peel, string=a[1], flags=re.X|re.S)[0]}" for a in re.findall(pattern=regex, string=htmlstr, flags=re.X|re.S)])))
