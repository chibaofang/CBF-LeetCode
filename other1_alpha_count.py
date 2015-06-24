#计算字母出现的次数
a = raw_input()
count_words(a)

def count_words(sentence):
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
