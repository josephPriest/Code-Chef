//
//  main.c
//  BankAccount
//
//  Created by Joseph Priest on 11/11/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    unsigned int withdrawl;
    float initial;
    
    scanf("%d%f", &withdrawl, &initial);
    
    if(withdrawl%5==0 && 0.5<=initial-withdrawl)
        printf("%0.2f",initial-withdrawl-0.5);
    else
        printf("%0.2f",initial);
    return 0;
}

