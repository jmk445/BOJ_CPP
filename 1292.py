
A,B = input().split()
A = int(A)
B = int(B)
Arr = []



x = 1
y = 1
i = 1
n = 1

while(y <= 1000):
    for i in range (x,y+1):
        Arr.append(n)        
        # print(Arr[i-2])             
        # print(x,y,i)
    # print("for 탈출")

    n += 1
    x += n
    y += n+1
    i = x    
    


sum = 0

for i in range(A-1,B): # 아 또 여기서B-1을 해서 A-1에서 B-2까지 구해서 11나옴. -> velog
    sum += (Arr[i])


print (sum)

