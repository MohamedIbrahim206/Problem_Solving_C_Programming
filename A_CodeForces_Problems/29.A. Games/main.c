#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;  // The number of teams
    scanf("%d",&n);
    int colors[100][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&colors[i][j]);
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(colors[i][0]==colors[j][1]){
                    result++;
                }
            }
        }
    }
    printf("%d",result);
    return 0;
}
