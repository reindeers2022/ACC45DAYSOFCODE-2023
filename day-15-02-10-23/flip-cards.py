'''
There are N cards on a table, out of which X cards are face-up and the remaining
are face-down.

In one operation, we can do the following:

    Select any one card and flip it (i.e. if it was initially face-up, after the
    operation, it will be face-down and vice versa)

What is the minimum number of operations we must perform so that all the cards
face in the same direction (i.e. either all are face-up or all are face-down)?
'''
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
while (T != 0) :
    rawInputs = input()
    T = T - 1
    rawInputs = rawInputs.split()
    usrInput.append(rawInputs)
#print(usrInput)
print("\n")
minFlip()
