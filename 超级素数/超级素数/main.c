#include <stdio.h>
#include <stdlib.h>
const int number=200;
int count =1;
int prime[number]={2};
void addprime(){
    for(int i=3;i<999;i++){
        int temp=1;
        for(int j=0;j<count;j++){
            if(i%prime[j]==0){
                temp=0;
                break;
            }
        }
        if(temp==1)
            prime[count++]=i;
    }
}
int check(int a){
    int temp=1;
    for(int i=0;prime[i]!=0&&prime[i]<a;i++){
        if(a%prime[i]==0){
            temp=0;
            break;
        }
        
    }
    return temp;
}

int myprime(int p,int q,int m,int f){
    int ret=0;
    int a=check(p);
    int b=check(q);
    int c=check(m);
    int d=check(f);
    if(a==1&&b==1&&c==1&&d==1)
        ret=1;
    return ret;
}
int arr[10]={0};

int main(){
    int cnt=0;
    int sum=0;
    addprime();
    for(int i=1;i<=9;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++){
                int p=i*100+j*10+k;
                int q=i*i+j*j+k*k;
                int m=i*j*k;
                int f=i+j+k;
                int ret =myprime(p,q,m,f);
                if(ret){
                    arr[cnt++]=p;
                    sum+=p;
                }
            }
    printf("超级素数个数为%d 超级素数之和为%d 最大的超级素数为%d\n",cnt,sum,arr[cnt-1]);
    return 0;
}

