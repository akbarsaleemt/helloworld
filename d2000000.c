#include<stdio.h>
#include<stdlib.h>
#include<math.h>
static int count,cont;
int factors(int);
int factors2(int);
void main(){
  int num,i,res=0;
  printf("enter a number\n");
  scanf("%d",&num);
  res=num;
    res=factors(res);
     printf("res=%d\n",res);
  res=num-1;
  cont++;
/*  while(res>0){
    res=factors2(res);
    // printf("res=%d\n",res);
    //printf("cont=%d\n",cont);
  }
  if(cont<count)
    printf("cont=%d\n",cont);
  else*/
    printf("count=%d\n",count);
}

int factors(int n){
  int i,diff=0,res=0;
    while(n>0){
      if(n>=2){
    for(i=1;i<=(n/2);i++){
      res=n/i;
      if(res*i==n){
        //printf("%dx%d=%d\n",res,i,n);
        if(res<i){
          count=count+1;
          n=i;
        }
        if(res==i){
          count=count+1;
          n=i;
        }
        if(n==3){
          count=count+1;
         n=2;
        }
      }
    }
    if(n%res!=0){
      count=count+1;
     n=n-1; 
    }
  }
  else if(n>0){
    count=count+1;
   n=n-1;
  }
  }
    return count;

}
int factors2(int n){
  int i,diff=0,res=0;
  if(n>2){

    for(i=1;i<=(n/2);i++){
      res=n/i;
      if(res*i==n){
        //printf("%dx%d=%d\n",res,i,n);
        if(res<i){
          cont=cont+1;
          return i;
        }
        if(res==i){
          cont=cont+1;
          return i;
        }
        if(n==3){
          cont=cont+1;
          return 2;
        }
        if(res==2){
          if(i==2){
            cont=cont+1;
            return 2;
          }
        }
      }
    }
    if(n%res!=0){
      cont=cont+1;
      return n-1;
    }
  }
  else if(n>0){
    cont=cont+1;
    return n-1;
  }

}


