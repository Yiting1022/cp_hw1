#include<stdio.h>
 
int main(){
 
    int n;
    scanf("%d",&n);
    int sum=0;
    int input;
    for(int i=0; i<n; i++){
        scanf("%d",&input);
        sum+=input;
    }
    printf("%d",sum);
    return 0;
}
