#!/bin/python3

import math
import os
import random
import re
import sys
#
# Complete the 'lonelyinteger' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#
from collections import Counter


def lonelyinteger(a):
    # Write your code here
    da = dict(Counter(a))

    keys = list(da.keys())
    vals = list(da.values())

    pos = vals.index(1)
    return keys[pos]
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)

    fptr.write(str(result) + '\n')

    fptr.close()
