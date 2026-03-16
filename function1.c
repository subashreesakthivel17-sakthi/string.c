#include<stdio.h>
    float simpleinterest(int p,int r,int t){
    return(p*r*t/100.0);
    }
    int main(){
        int P,R,T;
        scanf("%d %d %d",&P,&R,&T);
        float si=simpleinterest(P,R,T);
        printf("%2.f",si);
        return 0;
        
    }