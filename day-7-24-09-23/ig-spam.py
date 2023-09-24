'''
Chef categorises an instagram account as spam, if, the following count of the
account is more than 10 times the count of followers.

Given the following and follower count of an account as X and Y respectively,
find whether it is a spam account
'''
T = int(input())
userInputs = list()
def spam() :
    for i in userInputs :
        X = int(i[0])
        Y = int(i[1])
        if (Y*10 < X) : print("YES")
        elif (Y*10 >= X) : print("NO")
        else : print("something went wrong")
while (T != 0) :
    rawInputs = input()
    formattedInputs = rawInputs.split()
    userInputs.append(formattedInputs)
    T = T - 1
print("\n")
spam()
