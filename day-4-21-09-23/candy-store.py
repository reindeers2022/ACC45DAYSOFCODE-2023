'''
Chef has started working at the candy store. The store has 100100 chocolates in
total.

Chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get
1 rupee. However, if Chef exceeds his daily goal, he gets 2 rupees per
chocolate for each extra chocolate.

If Chef sells Y chocolates in a day, find the total amount he made.

constraints -
1≤T≤100
1≤X,Y≤10
'''
import sys

T = int(input())    #takes number of test cases to perform
if (T < 1 or T > 100) : print("1≤T≤100")
else :
    myValues = list()   #stores users answers

    def earn() :    #calculates chef`s earning
        for i in myValues :
            X = int(i[0])
            Y = int(i[1])
            Z = Y - X
            if Z <= 0 :
                print(Y)
            elif Z > 0 :
                earned = X + (Z*2)
                print(earned)

    def end() :
        print("1≤X,Y≤10")
        sys.exit()

    while (T != 0) :
        sell = input()
        T = T - 1
        userInputs = sell.split()   #separate inputs
        myValues.append(userInputs) #adds separated inputs to final list

    for n in myValues :
        for h in n :
            if (int(h) < 1 or int(h) > 10): end()
            else: pass

    print("\n")
    earn()
