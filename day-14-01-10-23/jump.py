'''
Chef is currently standing at stair 0 and he wants to reach stair numbered X.

Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair
numbered X.
'''
T = int(input())
usrInputs = list()
while(T != 0) :
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    T = T - 1
    usrInputs.append(rawInputs)
#print(usrInputs)
