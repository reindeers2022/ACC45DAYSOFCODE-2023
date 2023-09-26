'''
The summer is at its peak in Chefland. Chef is planning to purchase a water
cooler to keep his room cool. He has two options available:

    Rent a cooler at the cost of X coins per month.
    Purchase a cooler for Y coins.

Chef wonders what is the maximum number of months for which he can rent the
cooler such that the cost of renting is strictly less than the cost of
purchasing it.
constraints -
1≤T≤1000
1≤X,Y≤10e9
'''
import math, sys
end = pow(10,9)
T = int(input())    #asks for number of test cases
userInputs = list() #will store user`s inputs
def cost() :
    for i in userInputs :
        X = int(i[0])   #cost of renting per month
        Y = int(i[1])   #cost of purchasing
        rentCost = (Y/X)
        if (rentCost <= 1) : print(0)
        elif (rentCost > 2) : print(math.floor(rentCost))
        else : print("something went wrong")
if (T in range(1,1001)) :
    while(T != 0) :
        #print(T)
        rawInputs = input()
        T = T - 1
        rawInputs = rawInputs.split()
        userInputs.append(rawInputs)
        for h in rawInputs :
            if (int(h) not in range(1,end)) :
                print("1≤X,Y≤10e9")
                sys.exit()
    print("\n")
    cost()
    #print(userInputs)
elif (T not in range(1,1001)) :
    print("1≤T≤1000")
else : print("something went wrong")
