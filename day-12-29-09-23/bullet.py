'''
Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing
Y pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet,
such that it hits the goomba after at least Z seconds from now.
constraints -
1≤T≤100
1≤X,Y,Z≤100
X divides Y
'''
import math, sys
T = int(input())
usrInput = list()   #list to store user`s inputs
def shootTime() :
    for i in usrInput :
        X = int(i[0])   #speed of bullet
        Y = int(i[1])   #distance
        Z = int(i[2])   #time traversed
        timeNeed = Y/X
        if (Y%X != 0) : print("X divides Y"); sys.exit()     #looks after alignment with constraints
        shootAfter = Z - timeNeed
        if (shootAfter <= 0): print(0)
        elif (shootAfter > 0): print(math.floor(shootAfter))
        else : print("something went wrong...")
if (T in range(1,101)) :     #looks after alignment with constraints
    while (T != 0):
        #print(T)
        rawInputs = input()
        rawInputs = rawInputs.split()
        for h in rawInputs :    #looks after alignment with constraints
            if (int(h) in range(1,101)) : pass
            elif (int(h) not in range(1,101)) :
                print("1≤X,Y,Z≤100")
                sys.exit()
            else : print("something went wrong...")
        T = T - 1
        usrInput.append(rawInputs)  #stores user`s inputs
    #print(usrInput)
    print("\n")
    shootTime()
elif (T not in range(1,101)) : print("1≤T≤100")
else : print("something went wrong...")
