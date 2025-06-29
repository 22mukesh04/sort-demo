
"""
for the outer loop,
         count the number of lines
for the inner loop , 
    focus on the columns,
      and connect them somehow to the rows
 
OBSERVE SYMMETRY (OPTIONAL )

for n = 4

    * * * *
    * * * *
    * * * *
    * * * *

def print1(n):
    for i in range(n):
        for j in range(n):
            print("*",end='')




"""
def print1(n):
    for i in range(n):
        for j in range(n):
            print("* ",end='')
        print()
def print8(n):
    for i in range(1,n+1):
        for j in range(0,i):
            print(j+1,end=' ')
        for j in range(0,2*(n-i)):
            print(end='  ')
        for j in range(i,0,-1):
            print(j,end=' ')
        print()
print8(5)
