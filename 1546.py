N = int(input())
arr = list(map(int, input().split()))

arr.sort()
arr.reverse()

# avg = (arr[0]**2 + 100 * sum(arr[1:]))/(len(arr) * arr[0])

avg = 100 * (sum(arr[0:])) / (len(arr) * arr[0])


# breakpoint()

# print(len(arr)* arr[0])
print(avg)
# print(100 * (sum(arr[0:])) )
# print(3 * arr[0])
# print((100 * (sum(arr[0:])))/(3 * arr[0]))
# print (200/3)

# ctrl + `  -> 터미널 이동 
