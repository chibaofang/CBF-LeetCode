#计算字母出现的次数
a = raw_input()
a = a.lower()
lst = list(a)
d = {}

for i in lst:
    if i.isalpha():
        if i in d:
            continue
        else:
            d[i] = lst.count(i)
    else:
        continue
print d
