yee = str(input())

answer = list()
i = 0
key = 0

for idx, char in enumerate(reversed(yee)):    
    key += int(char) * 2 ** i    
    if i == 2 or idx == len(yee)-1:
        answer.insert(0,key)
        i = 0
        key = 0
    else :
        i += 1

for temp in answer:
    print(temp, end = "")

