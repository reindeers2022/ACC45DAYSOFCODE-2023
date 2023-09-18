'''Recently, Chef visited his doctor. The doctor advised Chef to drink at least 20002000 ml of water each day.

Chef drank XX ml of water today. Determine if Chef followed the doctor's advice or not.'''
# we need a test case counter first
T = int(input())
Y = list()
while T != 0 :
    X = int(input()) # enter the amount of water chef drank
    Y.append(X) # amount of water chef drank placed in a list Y
    T = T-1
for i in Y :    #compares each item of list Y with 2000
    if i >= 2000 : print("YES")
    else : print("NO")
