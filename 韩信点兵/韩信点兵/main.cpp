//
//  main.cpp
//  韩信点兵
//
//  Created by 胡斌 on 2019/4/20.
//  Copyright © 2019 胡斌. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;


class HanXin{
private:
    int x1,x2,x3;
public:
    void line3(int x){
        x1=x;
    }
    void line5(int x){
        x2=x;
    }
    void line7(int x){
        x3=x;
    }
    void showMany(){
        
        int ans=0;
        for(int i=10;i<=100;i++){
            if(i%3==x1&&i%5==x2&&i%7==x3){
                ans=i;
            }
            
        }
        if(ans){
            cout<<ans<<endl;
        }
        else
            cout<<"Impossible"<<endl;
        
        
        
    }
    
};

int main() {
    int n, n1, n2,n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx;  //韩信
        hx.line3(n1);  //3人一排
        hx.line5(n2);   //5人一排
        hx.line7(n3);   //7人一排
        hx.showMany();
    }
}
