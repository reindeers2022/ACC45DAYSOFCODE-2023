'''
A geyser has a capacity of X litres of water and a bucket has a capacity of Y
litres of water.

One person requires exactly 2 buckets of water to take a bath. Find the maximum
number of people that can take bath using water from one completely filled
geyser
'''
import math
T = int(input())
userInputs = list()
def bath() :
    for i in userInputs :
        X = int(i[0])
        Y = int(i[1])
        Z = int(math.floor(X/(2*Y)))
        print(Z)
while (T != 0) :
    #print(T)
    rawInputs = input()
    T = T - 1
    mystr = rawInputs.split()
    userInputs.append(mystr)
print("\n")
bath()
#print(userInputs)
