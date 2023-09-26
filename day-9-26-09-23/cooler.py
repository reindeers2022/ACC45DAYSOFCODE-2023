'''
The summer is at its peak in Chefland. Chef is planning to purchase a water
cooler to keep his room cool. He has two options available:

    Rent a cooler at the cost of X coins per month.
    Purchase a cooler for Y coins.

Chef wonders what is the maximum number of months for which he can rent the
cooler such that the cost of renting is strictly less than the cost of
purchasing it.
'''
T = int(input())    #asks for number of test cases
userInputs = list() #will store user`s inputs
while(T != 0) :
    #print(T)
    rawInputs = input()
    T = T - 1
    rawInputs = rawInputs.split()
    userInputs.append(rawInputs)
print("\n")
print(userInputs)
