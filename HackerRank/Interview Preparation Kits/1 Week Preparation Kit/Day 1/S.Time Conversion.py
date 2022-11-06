#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s) -> str:
    # Write your code here
    hour = (int(s[:2]) % 12 + (12 * int(s[-2:] == "PM" ))) % 24

    return f"{hour:02}{s[2:-2]}"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
