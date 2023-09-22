'''
Chef's phone shows a Battery Low notification if the battery level is 15% or
less.

Given that the battery level of Chef's phone is X%, determine whether it would
show a Battery low notification.
constraints -
1≤T≤100
1≤X≤100
'''
import sys
userInputs = list()

def notif() :
    for i in userInputs :
        if (i <= 15) : print("YES")
        elif (i > 15) : print("NO")
        else : print("ERROR")

T = int(input())    #takes number of use cases needed to be run
if (T in range(1,101)) :
    while (T != 0) :
        #print(T)
        X = input("")   #asks user for current battery level
        T = T - 1
        if (int(X) in range(1,101)) :
            userInputs.append(int(X))
        elif (int(X) not in range(1,101)) :
            print("1≤X≤100")
            sys.exit()
        else : print("ERROR")

    print("\n")
    notif()
elif (T not in range(1,101)) : print("1≤T≤100")
else : print("ERROR")
