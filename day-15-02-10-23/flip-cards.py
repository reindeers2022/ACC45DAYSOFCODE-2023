'''
There are N cards on a table, out of which X cards are face-up and the remaining
are face-down.

In one operation, we can do the following:

    Select any one card and flip it (i.e. if it was initially face-up, after the
    operation, it will be face-down and vice versa)

What is the minimum number of operations we must perform so that all the cards
face in the same direction (i.e. either all are face-up or all are face-down)?
constraints -
1≤T≤5000
2≤N≤100
0≤X≤N
'''
import sys
T = int(input())
usrInput = list()
def minFlip() :
    for i in usrInput :
        N = int(i[0])   #total no. of cards
        X = int(i[1])   #total no. of cards initially facing up
        moveFlipUp = N - X  #min moves to flip cards such that all face up
        moveFlipDown = X    #min moves to flip cards such that all face down
        if (moveFlipUp > moveFlipDown) : print(moveFlipDown)
        elif (moveFlipUp <= moveFlipDown) : print(moveFlipUp)
        else : print("something went wrong...")
if (T in range(1,5001)) :
    while (T != 0) :
        rawInputs = input()
        T = T - 1
        rawInputs = rawInputs.split()
        if (int(rawInputs[0]) not in range(2,101)) :
                print("2≤N≤100")
                sys.exit()
        if (int(rawInputs[1]) not in range(0,int(rawInputs[0])+1)) :
                print("0≤X≤N")
                sys.exit()
        usrInput.append(rawInputs)
    #print(usrInput)
    print("\n")
    minFlip()
elif (T not in range(1,5001)) :
    print("1≤T≤5000")
else : print("something went wrong...")
