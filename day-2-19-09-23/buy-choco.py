'''Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy
chocolates for Chefina where each chocolate costs Z rupees. Find the maximum
number of chocolates that Chef can buy for Chefina.'''
T = int(input()) #inputs number of test cases user wishes to run
myCases = list()
while T != 0 :
    X = input(); Y = input(); Z = input()
    T = T - 1
    myCases.append([X, Y, Z])
#print (myCases)
for i in myCases :
    nChoco = (((5*int(X)) + (10*int(Y)))/int(Z))
    print (int(nChoco))
