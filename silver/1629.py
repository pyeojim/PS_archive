#1629

a,b,c = map(int, input().split())

b = str(bin(b))[2:]

def divideCon(m1, m2, m3):
    if m2 == 0:
        return m1%m3
    elif m1 > m3:
        return divideCon(m1%m3, m2, m3)
    else:
        return divideCon(m1**2, m2-1, m3)

cache = 1

for x in range(len(b)):
    if int(b[x]):
        cache *= divideCon(a,(len(b)-x-1), c)
    else:
        pass

print(cache%c)




