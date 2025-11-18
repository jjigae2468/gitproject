n = 6
g = [[]] * n

included = [False for _ in range(n)]
D = [float('inf') for _ in range(n)] #inf를 넣어도상관은없는데 가중치가 특정 수치를 안 넘으녀 그 수치를 넣기도함
D[0] = 0 # [1] [2] [3]....이런 게 가능한지? -> 증명
# 0이외라도 다른 간선들끼리 MST가 이루어져 있을 때 거기에 0만 추가해도 그건 MST니까
connected_to = [-1 for _ in range(n)]
for i in range(n):
    m = -1 #쓰레기값인듯
    min_value = float('inf') 
    for j in range(n):
        if not included[j] and D[j] < min_value:
            min_value = D[j]
            m = j #제일 간선값이 작은 m을 찾음
    included[m] = True #일단 m Tree에 넣고
    for w, wt in g[m]: #m과 이어지는 간선값 중 D 갱신할 거 갱신하자
        if not D[w] and wt < D[w]:
            D[w] = wt
            connected_to[w] = m 

cost = 0
for k in range(1,n):
    print("%d %d" % (i, connected_to[i]), end = '')
    cost += D[i]
print(cost)