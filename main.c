/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: nx
 *
 * Created on December 25, 2018, 10:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
    

/*
 *
 */
int main(int argc, char** argv) {
    int opt, opt2, i, exitOrNot, product, x, j, countMG1=0, countMG2=0, countMG3=0, countWG1=0, countWG2=0, countWG3=0, x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,m1=0,m2=0,m3=0,w1=0,w2=0,w3=0;
    float mFirstGroup, mSecondGroup, mThirdGroup, wFirstGroup, wSecondGroup, wThirdGroup;
    float sumM1, sumM2, sumM3, sumW1, sumW2, sumW3, mo1=0, mo2=0, mo3=0, mo4=0, mo5=0, mo6=0,rate;
    char c = '\0';
       
       
    for(i=1; i>0 ; i++){
        x = i;
        for(j=0; j<2; j++){
            printf("Choose your sex:\n For man type (1)\n For woman type (2)\n");
            printf("Type your option: ");
            if(scanf("%d",&opt) == scanf("%c", &c))
                break;        
            
            if(opt==1){
                break;
            }
            if(opt==2){
                break;
            }else{   
                printf("You can give only two numbers 1 and 2 please choose one of them \n");
                j = 0;
            }
        }
        
               
        for (j=0; j<2; j++){     
            printf("Choose the range of your age that you belong it:\n");
            printf("(1) Less or equal to 30.:\n");
            printf("(2) From 31 to 55.\n");
            printf("(3) Greater or equal to 56.\n");
            printf("Type your option: ");
            if(scanf("%d",&opt2) == scanf("%c", &c)){};
            if(opt2==1){
                break;
            }else if(opt2==2){
                break;
            }else if(opt2==3){
                break;
            }else{
                printf("Your option must be one of the number 1,2 and 3:\n");
                j= 0;
            }
        }  
        
        for (j=0; j<2; j++){ 
            printf("Give a rate for the product from 1.0 to 10.0: \n");
            if(scanf("%f",&rate) == scanf("%c", &c)){};
            if(rate<1 || rate>10){
                printf("Give a rate between 1-10: \n");
                j = 0;
            }else{
                break;
            }
        }
        
        if((opt == 1) && (opt2 ==1)){
            mFirstGroup = rate;
            countMG1 = countMG1 + 1 ;
            if(mFirstGroup < 4){x1 = x1 + 1;} if(mFirstGroup > 4){m1 = m1 + 1;};
        }
        
        if((opt == 1) && (opt2 ==2)){
            mSecondGroup = rate;
            countMG2 = countMG2 +1 ;
            if(mSecondGroup < 4){x2 = x2 + 1;}if(mSecondGroup > 4){m2 = m2 + 1;};
        }
        if((opt == 1) && (opt2 ==3)){
            mThirdGroup = rate;
            countMG3 = countMG3 +1 ;
            if(mThirdGroup < 4){x3 = x3 + 1;}if(mThirdGroup > 4){m3 = m3 + 1;};
        }
        if((opt == 2) && (opt2 ==1)){
            wFirstGroup = rate;
            countWG1 = countWG1 +1 ;
            if(wFirstGroup < 4){x4 = x4 + 1;}if(wFirstGroup > 4){w1 = w1 + 1;};
        }
        if((opt == 2) && (opt2 ==2)){
            wSecondGroup =rate;
            countWG2 = countWG2 +1 ;
            if(wSecondGroup < 4){x5 = x5 + 1;}if(wSecondGroup > 4){w2 = w2 + 1;};
        }
        if((opt == 2) && (opt2 ==3)){
            wThirdGroup = rate;
            countWG3 = countWG3 +1 ;
            if(wThirdGroup < 4){x5 = x5 + 1;}if(wThirdGroup > 4){w3 = w3 + 1;};
        }
       
        sumM1 = sumM1 + mFirstGroup;
        sumM2 = sumM2 + mSecondGroup;
        sumM3 = sumM3 + mThirdGroup;
        sumW1 = sumW1 + wFirstGroup;
        sumW2 = sumW2 + wSecondGroup;
        sumW3 = sumW3 + wThirdGroup;
        
        mo1 = sumM1 / countMG1;
        mo2 = sumM2 / countMG2;
        mo3 = sumM3 / countMG3;
        mo4 = sumW1 / countWG1;
        mo5 = sumW2 / countWG2;
        mo6 = sumW3 / countWG3;
        
        
        
        for(j=0; j<2; j++){   
            
            printf("Would you like to continue or not?");
            printf("Choose 1 to continue OR 2 for exit :");
            if(scanf("%d",&exitOrNot) == scanf("%c", &c)){};
            if(exitOrNot == 2){
                i = -2;
                break;
            }else if( exitOrNot == 1){
                break;
            }else{
                printf("Give one of the numbers 1 or 2 \n");
                j = 0;
            }
        }
        
                   
    }
    
    
    
    printf("======================================================================================\n");
    printf("Men by Age \n Average for Group1: %f\t Average for Group2: %f\t Average for Group3: %f\n", mo1, mo2, mo3);
    printf("-----------\n");
    printf("Men with mark greater than 4 \nFor Group1: %d\tFor Group2: %d\t For Group3: %d\n",m1,m2,m3);
    printf("-----------------------------\n");
    printf("Men with mark less than 4 \nFor Group1: %d\tFor Group2: %d\t For Group3: %d\n",x1,x2,x3);
    printf("======================================================================================\n");
//                
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");              
    printf("Women by Age \n Average for Group1: %f\t Average for Group2: %f\t Average for Group3: %f\n", mo4, mo5, mo6);
    printf("-------------\n");
    printf("Women with mark greater than 4 \nFor Group1: %d\tFor Group2: %d\t For Group3: %d\n",w1,w2,w3);
    printf("-------------------------------\n");
    printf("Women with mark less than 4 \nFor Group1: %d\tFor Group2: %d\t For Group3: %d\n",x4,x5,x6);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");  
    
         
       return 0 ;
}