#include <stdio.h>

int main ()
{


    
*/ For Loop
int A;
    scanf("%d", &A);
    for (;A<1 ||A>100 ;)
    {
    printf("RE ENTER NUMBER ");
    scanf("%d",&A);
    }
    printf("Perfect : %d\n",A);
*/

    


*/ While loop
    int A=0;
    printf("Input a num from 1 to 100  : ");
    scanf("%d",A);

    while (A<1 || A>100)
    {
        printf("Re Enter the Number  ");
        scanf("%d",&A);
    }
    printf("Perfect : %d",A);
*/



    
*/ Do While Loop
int A=0;
    do {
        printf("Input a num from 1 to 100  : ");
        scanf("%d",&A);
       }

    while (A<1 || A>100);
    printf("Perfect : %d\n",A);

*/








return 0 ;     
}
