'''
Chef categorises an instagram account as spam, if, the following count of the
account is more than 10 times the count of followers.

Given the following and follower count of an account as X and Y respectively,
find whether it is a spam account

constraints -
1≤T≤100
1≤X,Y≤100
'''
import sys
T = int(input())
userInputs = list()
def spam() :
    for i in userInputs :
        X = int(i[0])
        Y = int(i[1])
        if (Y*10 < X) : print("YES")
        elif (Y*10 >= X) : print("NO")
        else : print("something went wrong")
if (T in range(1,101)) :
    while (T != 0) :
        rawInputs = input()
        T = T - 1
        formattedInputs = rawInputs.split()
        for h in formattedInputs :
            if (int(h) not in range(1,101)) :
                print("1≤X,Y≤100")
                sys.exit()
        userInputs.append(formattedInputs)
    print("\n")
    spam()
elif (T not in range(1,101)) : print("1≤T≤100")
else : print("something went wrong")
