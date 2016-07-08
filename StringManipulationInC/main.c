//
//  main.c
//  StringManipulationInC
//
//  Created by HemaSri on 7/4/16.
//  Copyright © 2016 HemaSri. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    char givenString[30], outputString[30];
    
    printf("Please Enter   a String => ");
    scanf("%s",givenString);
    
    for (int i = 0; i<strlen(givenString); i++) {
        
        if (strlen(outputString)<1) {
            
            if  ( !strcmp(&givenString[i], "_")) {
                
                strcpy(&outputString[i], &givenString[i]);
            }
        
            printf("%c",outputString[i]);
        }
        else {
            
            if (strcmp(&givenString[i-1], &givenString[i])) {
                
                strcpy(&outputString[i], &givenString[i]);
                strncat(&outputString[i-1], &outputString[i], 1);
            }
        }
    }
    for (unsigned int i = 0; i<strlen(outputString); i++) {
        
        if (!strcmp(&outputString[strlen(outputString)-1], " ") || !strcmp(&outputString[strlen(outputString)-1], "_")) {
            
            outputString[strlen(outputString)-1] = '\0';
        }
    }
    
    printf("%s",outputString);
    
    return 0;
}
