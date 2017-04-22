//
//  main.c
//  ZjAcmTest
//
//  Created by 贾自杰 on 2017/4/22.
//  Copyright © 2017年 贾自杰. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
        x=1;
        n--;
        while(n--)
        {
            x=2*(x+1);
        }
        printf("%d\n",x);
    }
    
    return 0;
}
