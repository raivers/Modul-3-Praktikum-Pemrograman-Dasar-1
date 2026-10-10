#test case 1
s1 = int(input())

day1 = s1 // 86400
hour1 = (s1 % 86400) // 3600
minute1 = (s1 % 3600) // 60
second1 = s1 % 60

if day1 > 0:
    print(f"{day1} day {hour1:02d}:{minute1:02d}:{second1:02d}")
else:
    print(f"{hour1:02d}:{minute1:02d}:{second1:02d}")

#test case 2
s2 = int(input())

day2 = s2 // 86400
hour2 = (s2 % 86400) // 3600
minute2 = (s2 % 3600) // 60
second2 = s2 % 60

if day2 > 0:
    print(f"{day2} day {hour2:02d}:{minute2:02d}:{second2:02d}")
else:
    print(f"{hour2:02d}:{minute2:02d}:{second2:02d}")

#test case 3
s3 = int(input())

day3 = s3 // 86400
hour3 = (s3 % 86400) // 3600
minute3 = (s3 % 3600) // 60
second3 = s3 % 60

if day3 > 0:
    print(f"{day3} day {hour3:02d}:{minute3:02d}:{second3:02d}")
else:
    print(f"{hour3:02d}:{minute3:02d}:{second3:02d}")

#test case 4
s4 = int(input())

day4 = s4 // 86400
hour4 = (s4 % 86400) // 3600
minute4 = (s4 % 3600) // 60
second4 = s4 % 60

if day4 > 0:
    print(f"{day4} day {hour4:02d}:{minute4:02d}:{second4:02d}")
else:
    print(f"{hour4:02d}:{minute4:02d}:{second4:02d}")

#test case 5
s5 = int(input())

day5 = s5 // 86400
hour5 = (s5 % 86400) // 3600
minute5 = (s5 % 3600) // 60
second5 = s5 % 60

if day5 > 0:
    print(f"{day5} day {hour5:02d}:{minute5:02d}:{second5:02d}")
else:
    print(f"{hour5:02d}:{minute5:02d}:{second5:02d}")