//
//  main.cpp
//  array
//
//  Created by 20141105059c on 15/12/16.
//  Copyright © 2015年 20141105059c. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[4],b[4];
    a[4]=123;
    b[4]=456;
    printf("a=%x &a[4]=%x b=%x &b[4]=%x\n",a,&a[4],b,&b[4]);
    printf("a[0]=%d b[0]=%d a[4]=%d b[4]=%d\n",a[0],b[0],a[4],b[4]);
    return 0;
}