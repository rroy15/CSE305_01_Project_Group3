/* GROUP 3 
*  RAHUL ROY ( ID : 172014022)
*  NICHOLAS TONY GOMES (ID : 172014005)
*  MUHTASIR SHAFKAT  (ID : 172014023)
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// variable declaration //
int max, R, C;

/*  Every Matrix cell is considered a queue element with 
*   these variables.
*/
struct queueElement
{
    int row;
    int column ;
    int distFromSource;
}qe;

// An array implementation of queue, with the following properties
struct queue
{
    int front;
    int rear ;
    int itemCount;
    bool isEmpty;
    bool isFull;
    struct queueElement queueArray[];    // the queue holds elements from the queueElement struc. 
    
}q;

// QUEUE OPERATIONS  //

struct queueElement peek ()
{
    return q.queueArray[q.front];
}

bool isEmpty ()
{
    return q.itemCount == 0;
}

bool isFull (){
    return q.itemCount == max;
}

// BFS APPLICATION // 

int shortestDist (char matrix[R][C])
{
    int i = 0, j =0;
    struct queueElement sourceElement = {0,0,0};

    /*  Keeping track of visited queue elements
    The blocked cells will be marked visited/true as
    we cannot pass through them.
    */

    bool visitedElements [R][C];

    for (i = 0 ; i < R ; i++){
        for (j = 0 ; j < C ; j++){
            if (matrix[i][j] == 'B')
                visitedElements [i][j] = true;
            else
                visitedElements [i][j] = false;

            // Setting the Source //

            if (matrix[i][j] == 'M')
            {
                sourceElement.row = i;
                sourceElement.column = j;
            }
        }
    }
    
    // BFS ON GRID CELLS //



   
    
    
    return -1; 
}



// MAIN FUNCTION //

int main ()
{
   
    


    return 0 ;
}


