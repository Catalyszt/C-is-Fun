#include <stdio.h>


/*--------------------------------------------------------- 
   For a given number of rows and columns draw a diamond using printf like bellow.
   Given rows and columns are always equal and odd numers.
   bellow diamond is for 9X9 rows and columns.  

    *
   ***            
  *****
 *******
********* 
 *******
  *****
   ***
    *

----------------------------------------------------------*/



void main()
{
    int i, j;
    int dim ;
    int stars = -1; // increment by 2 for each row until half of the rows and decrement by 2 in other half. 
    int space;

    printf("Ender odd numbers of dims.\n");
    scanf("%d", &dim);

    for(i=0; i<dim; i++) // for each rows.
    {

        if(i <= dim/2){
            // uppder part of the diamond.
            stars += 2;  
        }
        else{
            // lower part of the diamond.
            stars -= 2;
        }

        space = (dim - stars)/2; // number of spaces in left side in this row.

        for(j=0;j< space + stars ; j++){ //for each columns.
            if( j < space ){
                printf(" ");
            }
            else{
                printf("*");
            }     

        }
        printf("\n");

    }

}
