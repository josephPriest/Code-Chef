//
//  main.c
//  theAnswerToLife
//
//  Created by Joseph Priest on 11/11/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int answer =0;
    scanf("%d", &answer);
    while( answer != 42 ){
        printf("\n%d", answer);
        scanf("%d", &answer);
    }
    
    return 0;
}

