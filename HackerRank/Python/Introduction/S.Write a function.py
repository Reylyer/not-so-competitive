def is_leap(year):
    leap = False
    
    # Write your logic here
    leap = not (year % 4) and (bool(year % 100) or not (year % 400))
    return leap

year = int(input())
print(is_leap(year))