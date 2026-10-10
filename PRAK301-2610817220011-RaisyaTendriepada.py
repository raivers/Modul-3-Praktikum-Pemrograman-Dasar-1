#test case 1
a1, b1, c1 = map(int, input().split())

if a1 < b1 and b1 < c1:
    print(a1, b1, c1)
elif a1 < c1 and c1 < b1:
    print(a1, c1, b1)
elif b1 < a1 and a1 < c1:
    print(b1, a1, c1)
elif b1 < c1 and c1 < a1:
    print(b1, c1, a1)
elif c1 < a1 and a1 < b1:
    print(c1, a1, b1)
else:
    print(c1, b1, a1)

#test case 2
a2, b2, c2 = map(int, input().split())

if a2 < b2 and b2 < c2:
    print(a2, b2, c2)
elif a2 < c2 and c2 < b2:
    print(a2, c2, b2)
elif b2 < a2 and a2 < c2:
    print(b2, a2, c2)
elif b2 < c2 and c2 < a2:
    print(b2, c2, a2)
elif c2 < a2 and a2 < b2:
    print(c2, a2, b2)
else:
    print(c2, b2, a2)

#test case 3
a3, b3, c3 = map(int, input().split())

if a3 < b3 and b3 < c3:
    print(a3, b3, c3)
elif a3 < c3 and c3 < b3:
    print(a3, c3, b3)
elif b3 < a3 and a3 < c3:
    print(b3, a3, c3)
elif b3 < c3 and c3 < a3:
    print(b3, c3, a3)
elif c3 < a3 and a3 < b3:
    print(c3, a3, b3)
else:
    print(c3, b3, a3)