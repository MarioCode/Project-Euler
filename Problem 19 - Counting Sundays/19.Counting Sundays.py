#!/usr/bin/env python3

from datetime import datetime, timedelta

date = datetime(1901, 1, 1)

sum = 0
while(date != datetime(2000, 12, 31)):
    if date.weekday() == 6 and date.day == 1:
        sum += 1
    date += timedelta(days=1)

print(sum)
