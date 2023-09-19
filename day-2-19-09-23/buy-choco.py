'''Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy
chocolates for Chefina where each chocolate costs Z rupees. Find the maximum
number of chocolates that Chef can buy for Chefina.'''
T = int(input()) #inputs number of test cases user wishes to run
myCases = list()
myAns = list()
while T != 0 :
    X = input(); Y = input(); Z = input()
    T = T - 1
    myCases.append([X, Y, Z])
#print(myCases)
for i in myCases :
    inr5 = 5*int(i[0])
    inr10 = 10*int(i[1])
    (nChoco) = (inr5 + inr10)/int(i[2])
    myAns.append(int(nChoco))
print("\n")
for n in myAns : print(n)
