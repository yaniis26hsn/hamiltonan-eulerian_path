#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int stpx,stpy,enpx,enpy,res,n,m,min,nstep ;
void solgen(){
    nstep = abs(stpx-enpx)+ abs(stpy-enpy) ;
      if((m*n%2==0 && nstep%2==0) || (m*n%2!=0 && nstep%2!=0))
        res =0 ;
      else
        res = 1 ;

}
void n1() {

if((stpx+stpy==n+m &&  enpy+enpx==2)||(stpx+stpy==2 &&  enpy+enpx==n+m)){
 res =1 ;
}
 else{
 res =0;
 }

    }

    void n2 (){
        if(m==2){
        if(stpy!=1 && stpy!=n && stpy==enpy)
            res = 0 ;
    else
        solgen() ;
        }
        else{ /* n==2*/
            if(stpx!=1 && stpx!=m && stpx == enpx)
            res = 0 ;
        else
            solgen();
        }
    }

    void n3(){
        if(n==3){
                if(stpy==2 && (stpx==1||stpx==m)){
                    if(m%2!=0){
                        res=0 ;
                    }
                    else{
                        if(enpx==stpx){
                            res= 1 ;
                        }
                        else{
                            res = 0 ;
                        }
                    }
                }
                else
                 solgen();

                 if((enpy==2 && (enpx==1 || enpx==n))&& stpx!=enpx)
                 res= 0 ;
        }
        else{/*m==3*/
         if(stpx==2 && (stpy==1||stpy==n)){
                    if(n%2!=0){
                        res=0 ;
                    }
                    else{
                        if(enpy==stpy){
                            res= 1 ;
                        }
                        else{
                            res = 0 ;
                        }
                    }
                }
                else
                 solgen();

                 if((enpx==2 && (enpy==1 || enpy==m))&& stpy!=enpy )
                 res= 0 ;
        }

    }

int main() {

printf("give us the dims man") ;

scanf("%d %d",&n,&m) ;
printf("the coords for sttng point now") ;
scanf("%d %d",&stpy,&stpx) ;
printf("the coords for ending spot now") ;
scanf("%d %d",&enpy,&enpx) ;

if(n<m)
min = n;
else
min = m ;
if(min == 1)
n1() ;
if(min == 2)
    n2();
if(min==3)
    n3() ;
if(min>3)
    solgen();

if(res==1){
printf("poss");
}
else{
printf("imposs") ;
}

}
