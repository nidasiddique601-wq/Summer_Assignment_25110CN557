#include <stdio.h>
int main() {
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s+=i;
    }
    printf("sum of first %d natural numbers is %d\n",n,s);
    return 0;
}