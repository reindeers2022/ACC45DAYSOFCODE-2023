'''
Chef is currently standing at stair 0 and he wants to reach stair numbered X.

Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair
numbered X.
'''
T = int(input())
usrInputs = list()
def jump() :
    for i in usrInputs :
        X = int(i[0])   #wanna reach step no. x
        Y = int(i[1])   #steps covered in one move or 1 step
        if (X%Y == 0) : print(int(X/Y))
        elif (X%Y > 0) : print(int(X/Y) + int(X%Y))
        else : print("something went wrong...")
while(T != 0) :
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    T = T - 1
    usrInputs.append(rawInputs)
#print(usrInputs)
print("\n")
jump()
