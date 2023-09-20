'''
Chef's coding class is very famous in Chefland.

This year X students joined his class and each student will require one chair
to sit on. Chef already has Y chairs in his class. Determine the minimum number
of new chairs Chef must buy so that every student is able to get one chair to
sit on.
'''
T = int(input())

userInputs = list()

def xtra_chairs() :
    for i in userInputs :
        X = int(i[0])
        Y = int(i[1])
        if ((X-Y) < 0) : print(0)   #for differences <0 prints 0
        else : print(X-Y)

while (T != 0) :    #runs test cases
     myInputs = input()
     item = myInputs.split()
     userInputs.append(item)    #stores user inputs in a list
     T = T - 1

print("\n")
xtra_chairs()
