#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    N = int(input().strip())
    if N % 2:
        print("Weird")
    elif N < 5:
        print("Not Weird")
    elif N <= 20:
        print("Weird")
    else:
        print("Not Weird")