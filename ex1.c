#include<stdio.h>
#include<stdlib.h>
static int count;
void main(){
  int num,i,res=0;
    printf("enter a number\n");
    scanf("%d",&num);
    res=num;
    while(res>0){
    res=factors(res);
    printf("res=%d\n",res);
    printf("count=%d\n",count);
    }
   // printf("count=%d\n",count);
}

int factors(int n){
  int i,diff=0,res=0;
  if(n>2){
    for(i=1;i<=(n/2);i++){
    	 res=n/i;
      if(res*i==n){
       printf("%dx%d=%d\n",res,i,n);
      if(res<i){
       count=count+1;
       return i;
      }
      if(res==i){
        count=count+1;
        return i;
      }
      if(n==3){
        count=count+1;
        return 2;
      }
     if(res==2){
        if(i==2){
       count=count+1;
          return 2;
        }
      }
      }
    }
    if(n%res!=0){
      count=count+1;
      return n-1;
    }
  }
  else if(n>0){
       count=count+1;
    return n-1;
  }
 
}

