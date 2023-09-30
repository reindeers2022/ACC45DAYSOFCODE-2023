'''
Chef is currently working for a secret research group called NEXTGEN. While the
rest of the world is still in search of a way to utilize Helium-3 as a fuel,
NEXTGEN scientists have been able to achieve 2 major milestones:

    Finding a way to make a nuclear reactor that will be able to utilize
    Helium-3 as a fuel
    Obtaining every bit of Helium-3 from the moon's surface

Moving forward, the project requires some government funding for completion,
which comes under one condition: to prove its worth, the project should power
Chefland by generating at least A units of power each year for the next B years.

Help Chef determine whether the group will get funded assuming that the moon has
X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.
'''
T = int(input())
usrInputs = list()
def fund() :
    for i in usrInputs :
        A = int(i[0])    #generates A units of power each year
        B = int(i[1])    #to give power for B years
        X = int(i[2])    #grams of helium-3 on moon
        Y = int(i[3])    #1g of helium-3 provides Y units of power
        amtPowerMust = A*B  #amount of power mextgen must supply
        powerPotential = X*Y    #amount of power nextgen can potentially supply
        if (powerPotential >= amtPowerMust) : print("YES")
        elif (powerPotential < amtPowerMust) : print("NO")
        else : print("something went wrong...")
while(T != 0) :
    #print(T)
    rawInputs = input()
    rawInputs = rawInputs.split()
    T = T - 1
    usrInputs.append(rawInputs)
print("\n")
fund()
#print(usrInputs)
