
#include <stdio.h>

int main() 
{
    int i = 0 ;
    int A[6] , B[6] ;
    int Answer[6] ;
    char operator ;

    printf ("----- Enter Number A -----\n" ) ;
    while  ( i < 6 ) 
    {
        printf( "input A[%d] : " , i ) ;
        scanf( "%d" , &A[i] ) ;
        i++ ;
    }
    i = 0 ;

    printf( "----- Enter Number B -----\n" ) ;
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

    switch ( operator ) 
    {
        case '+' :
            while ( i < 6 )
            {
                Answer[i] = A[i] + B[i] ;
                i++ ; 
            }
            break ;
        case '-' :
            while (i < 6) 
            {
                Answer[i] = A[i] - B[i] ;
                i++ ;
            }
            break ;
        default :
            printf( "error \n" ) ;
            return 1 ;
    }

    printf( "operator : %c\n" , operator ) ;

    printf( "INDEX      : X    0    1    2    3    4    5 \n\n" ) ;
    printf( "Number A   :      %d    %d    %d    %d    %d    %d \n" , A[0] , A[1] , A[2] , A[3] , A[4] , A[5] ) ;
    printf( "operator   :                                 %c\n", operator ) ;
    printf( "Number B   :      %d    %d    %d    %d    %d    %d \n", B[0] , B[1] , B[2] , B[3] , B[4] , B[5] ) ;
    printf( "-----------------------------------------------\n" ) ;
    printf( "Answer     =      %d    %d    %d    %d    %d    %d\n" , Answer[0] , Answer[1] , Answer[2] , Answer[3] , Answer[4] , Answer[5] ) ;

    return 0 ;
}
