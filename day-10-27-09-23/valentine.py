'''
Valentine's Day is approaching and thus Chef wants to buy some chocolates for
someone special.

Chef has a total of X rupees and one chocolate costs Y rupees. What is the
maximum number of chocolates Chef can buy?
constraints -
1≤T≤1000
1≤X,Y≤100
'''
import math, sys
T = int(input())    #asks for number of test cases to run
userInputs = list()
def nchoco() :
    for i in userInputs :
        X = int(i[0])    #rupees chef has
        Y = int(i[1])    #cost of one chocolate
        nchocoBuy = math.floor(X/Y)
        print(nchocoBuy)
if (T in range(1,1001)) :
    while (T != 0) :
        #print(T)
        rawInputs = input()
        rawInputs = rawInputs.split()
        for h in rawInputs :
            if (int(h) in range(1,101)) : pass
            elif (int(h) not in range(1,101)) :
                print("1≤X,Y≤100")
                sys.exit()
            else : print("something went wrong")
        T = T - 1
        userInputs.append(rawInputs)
    print("\n")
    nchoco()
elif (T not in range(1,1001)) :
    print("1≤T≤1000")
else : print("something went wrong")
