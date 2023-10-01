'''
Chef is currently standing at stair 0 and he wants to reach stair numbered X.

Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair
numbered X.
1≤T≤500
1≤X,Y≤100
'''
import sys
T = int(input())
usrInputs = list()  #stores user inputs
def jump() :
    for i in usrInputs :
        X = int(i[0])   #wanna reach step no. x
        Y = int(i[1])   #steps covered in one move or 1 step
        if (X%Y == 0) : print(int(X/Y))
        elif (X%Y > 0) : print(int(X/Y) + int(X%Y))
        else : print("something went wrong...")
if (T in range(1,501)) :
    while(T != 0) :
        #print(T)
        rawInputs = input()
        rawInputs = rawInputs.split()
        for h in rawInputs :
            if (int(h) not in range(1,101)) :
                print("1≤X,Y≤100")
                sys.exit()
        T = T - 1
        usrInputs.append(rawInputs) #adds user input to list
    #print(usrInputs)
    print("\n")
    jump()  #calls jump function to get desired outputs
elif (T not in range(1,501)) : print("1≤T≤500")
else : print("something went wrong...")
