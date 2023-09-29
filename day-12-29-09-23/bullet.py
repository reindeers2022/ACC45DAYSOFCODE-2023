'''
Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing
Y pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet,
such that it hits the goomba after at least Z seconds from now.
'''
import math
T = int(input())
usrInput = list()
def shootTime() :
    for i in usrInput :
        X = int(i[0])   #speed of bullet
        Y = int(i[1])   #distance
        Z = int(i[2])   #time traversed
        timeNeed = Y/X
        shootAfter = Z - timeNeed
        if (shootAfter <= 0): print(0)
        elif (shootAfter > 0): print(math.floor(shootAfter))
        else : print("something went wrong...")
while (T != 0):
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    T = T - 1
    usrInput.append(rawInputs)
#print(usrInput)
print("\n")
shootTime()
