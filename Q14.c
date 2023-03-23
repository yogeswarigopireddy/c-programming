#include<stdio.h>
int main()
{

A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
 
B = [[10, 11, 12],
     [13, 14, 15],
     [16, 17, 18]]
 

result = [[0, 0, 0],
          [0, 0, 0],
          [0, 0, 0]]
 
for i in range(len(A)):
    for j in range(len(B[0])):
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]
 

for row in result:
    print(row)
}
