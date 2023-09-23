'''
A single car can accommodate at most 44 people.

N friends want to go to a restaurant for a party. Find the minimum number of
cars required to accommodate all the friends.
'''
T = int(input())    #inputs number of test cases user wishes to run
userInputs = list()
while (T != 0) :
    #print(T)
    N = int(input())
    userInputs.append(N)    #stores user-inputs into a list
    T = T - 1
print(userInputs)
