'''
There is a cricket match in Chefland. Chef's team requires N runs to win in M
overs.

Given that 1 over consists of 6 balls and a player can score a maximum of 6 runs
in a ball, find whether Chef's team can win.
'''
T = int(input())
userInputs = list()
def crick() :
    for i in userInputs :
        N = int(i[0])   #runs required
        M = int(i[1])   #overs remaining
        maxRuns = M*6*6   #max runs possible in given overs
        if (maxRuns >= N) : print("YES")
        elif (maxRuns < N) : print("NO")
        else : print("something went wrong")
while (T != 0) :
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    userInputs.append(rawInputs)
    T = T - 1

print("\n")
crick()
