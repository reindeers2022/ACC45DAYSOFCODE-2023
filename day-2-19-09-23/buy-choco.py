'''Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy
chocolates for Chefina where each chocolate costs Z rupees. Find the maximum
number of chocolates that Chef can buy for Chefina.'''
'''
constraints -
1≤T≤100
1<X,Y,Z>1000
'''
T = int(input()) #inputs number of test cases user wishes to run
if (T <= 0 or T >= 100) :
    print ("test cases must be >=1 and <=100")
else :
    myCases = list()
    myAns = list()

    while T != 0 :  #takes input and adds them to a list
        X = int(input()); Y = int(input()); Z = int(input())
        if (X < 1 or X > 1000 or Y < 1 or Y > 1000 or Z < 1 or Z > 1000) :
            print ("input must be >=1 and <=1000")
            break
        else : pass
        T = T - 1
        myCases.append([X, Y, Z])

    for i in myCases :  #access the items of nested list to calculate desired result
        inr5 = 5*int(i[0])
        inr10 = 10*int(i[1])
        (nChoco) = (inr5 + inr10)/int(i[2])
        myAns.append(int(nChoco))   #adds the final result to a list

    print("\n")
    for n in myAns : print(n)   #prints item of final result list
