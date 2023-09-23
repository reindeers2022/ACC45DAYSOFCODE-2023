'''
A single car can accommodate at most 44 people.

N friends want to go to a restaurant for a party. Find the minimum number of
cars required to accommodate all the friends.

constraints - 
1≤T≤1000
2≤N≤1000
'''
import math
T = int(input())    #inputs number of test cases user wishes to run
userInputs = list()
def car_req() :
    for i in userInputs :
        if (i <= 4) : print(1)
        elif (i > 4) : print(math.ceil(i/4))    #ceil function from math adds +1
        #to number of cars required when answer is in decimal
        else :  print("something went wrong")
while (T != 0) :
    #print(T)
    N = int(input())
    userInputs.append(N)    #stores user-inputs into a list
    T = T - 1
#print(userInputs)
print("\n")
car_req()   #calls function that prints number of cars required
