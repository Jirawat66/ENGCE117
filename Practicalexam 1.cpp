#include <stdio.h>

int main()
{
    int i = 0 ;
    int A[6] , B[6] ;
    int Answer ;
    char operator ;

    printf( "----- Enter Number A ----- \n" ) ;
    while ( i < 6 )
    {
        printf( "input A[%d] : " , i ) ;
        scanf( "%d" , &A[i] ) ;
        i++ ;
    }
    i = 0 ;

    printf( "----- Enter Number B ----- \n" ) ;
    while ( i < 6 )
    {
        printf( "input B[%d] : " , i ) ;
        scanf( "%d" , &B[i] ) ;   
        i++ ;
    }
    i = 0 ;
    
    printf( "----- Enter Operator ( + or - )-----\n" ) ;
    scanf( " %c", &operator ) ; 
    i = 0 ;
/*
    switch (operator) 
    {
        case '+':
            while (i < 6) 
            {
                Answer = A[i] + B[i] ;
                i++ ;
            }
            break;
        case '-':
            while (i < 6) 
            {
                Answer = A[i] - B[i] ;
                i++ ;
            }
            break ;
*/

            printf( "operator : \n" ) ;
            printf( "INDEX      : X    0    1    2    3    4    5 \n\n" ) ;
            printf( "Number A   :      %d    %d    %d    %d    %d    %d \n" , A[i] , A[i+1] , A[i+2] , A[i+3] , A[i+4] , A[i+5]  ) ;
            printf( "operator   :                                 %c\n" , operator ) ;
            printf( "Number B   :      %d    %d    %d    %d    %d    %d \n" , B[i] , B[i+1] , B[i+2] , B[i+3] , B[i+4] , B[i+5]  ) ;
            printf( "            ----------------------------------" ) ;
            printf( "Answer     =      %d    %d    %d    %d    %d    %d " , Answer[0] , Answer[1] , Answer[2] , Answer[3] , Answer[4] , Answer[5]  ) ;    
    //}
}