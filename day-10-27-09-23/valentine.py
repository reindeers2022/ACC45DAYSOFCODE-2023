'''
Valentine's Day is approaching and thus Chef wants to buy some chocolates for
someone special.

Chef has a total of X rupees and one chocolate costs Y rupees. What is the
maximum number of chocolates Chef can buy?
'''
import math
T = int(input())    #asks for number of test cases to run
userInputs = list()
def nchoco() :
    for i in userInputs :
        X = int(i[0])    #rupees chef has
        Y = int(i[1])    #cost of one chocolate
        nchocoBuy = math.floor(X/Y)
        print(nchocoBuy)
while (T != 0) :
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    T = T - 1
    userInputs.append(rawInputs)
print("\n")
nchoco()
