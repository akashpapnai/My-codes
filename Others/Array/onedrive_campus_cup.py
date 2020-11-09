def campusCup(emails):
    dic = {}
    res = []
    for i in emails:
        j=0
        while j<len(i):
            if i[j]=='@':
                break
            j+=1
        domain = i[j+1:]
        if dic.get(domain):
            dic[domain]+=20
        else:
            dic[domain]=20
    points = [[] for _ in range(5)]
    for key2,values2 in dic.items():
        if values2>=500:
            points[0].append(key2)
        elif values2>=300:
            points[1].append(key2)
        elif values2>=200:
            points[2].append(key2)
        elif values2>=100:
            points[3].append(key2)
        else:
            points[4].append(key2)
    for i in range(len(points)):
        points[i].sort()
        res.extend(points[i])
    return res
emails =["a@rain.ifmo.ru", 
 "b@rain.ifmo.ru", 
 "c@rain.ifmo.ru", 
 "d@rain.ifmo.ru", 
 "e@rain.ifmo.ru", 
 "noname@mit.edu"]
print(campusCup(emails))