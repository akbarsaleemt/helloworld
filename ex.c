#include<stdio.h>
#include<stdlib.h>
void main(){
  int num,i,res=0;
    printf("enter a number\n");
    scanf("%d",&num);
    res=factors(num);
    printf("res=%d\n",res);
}

int factors(int n){
  int i,diff=0,res=0;
    for(i=1;i<=(n/2);i++){
    	 res=n/i;
      if(res*i==n){
       printf("%dx%d=%d\n",res,i,n);
      if(res<i)
        return i;
      if(res==2){
        if(i==2)
          return 2;
      }
      }
    }
    if(n%res!=0){
      return n-1;
    }
}

