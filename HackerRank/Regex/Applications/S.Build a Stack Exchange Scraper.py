import re
from sys import stdin

regex = r"\<a href=\"\/questions\/(\d+)\/.*?class\=\"question\-hyperlink\"\>(.*?)\<\/a\>.*?class\=\"relativetime\"\>(.*?)\<\/span\>"

htmlstr = stdin.read()
print("\n".join([";".join(a) for a in re.findall(regex, htmlstr, flags=re.S|re.M)]))