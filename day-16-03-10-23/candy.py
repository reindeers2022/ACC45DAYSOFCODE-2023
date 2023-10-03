'''
Chef has N candies. He has to distribute them to exactly M of his friends such
that each friend gets equal number of candies and each friend gets even number
of candies. Determine whether it is possible to do so.
constraints -
1≤T≤1000
1≤N,M≤1000
'''
import sys
T = int(input())
usrInputs = list()
def candyPossible() :
    for i in usrInputs :
        N = int(i[0])   #number of candies
        M = int(i[1])   #number of friends
        candyEach = N/M
        evenOrNot = candyEach % 2
        if (evenOrNot == 0): print("YES")
        elif (evenOrNot != 0): print("NO")
        else : print("something went wrong...")

if (T in range(1,1001)) :
    while (T != 0) :
        #print(T)
        rawInputs = input()
        rawInputs = rawInputs.split()
        for h in rawInputs :
            if (int(h) not in range(1,1001)) :
                print("1≤N,M≤1000")
                sys.exit()
        T = T - 1
        usrInputs.append(rawInputs)
    #print(usrInputs)
    print("\n")
    candyPossible()
elif (T not in range(1,1001)) :
    print("1≤T≤1000")
else : print("something went wrong...")
