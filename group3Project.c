/* GROUP 3 
*  RAHUL ROY ( ID : 172014022)
*  NICHOLAS TONY GOMES (ID : 172014005)
*  MUHTASIR SHAFKAT  (ID : 172014023)
*  RUPOM BISWAS (ID : 172014043)
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

void enqueue (struct queueElement object){
    if(!isFull()) 
    {   
        if(q.rear == (max)-1) 
        {
            q.rear = -1;
        }
        q.queueArray[++q.rear] = object ;
        q.itemCount++;
    }
}

void dequeue ()
{
    struct queueElement object = q.queueArray [q.front++];
    if (q.front == (max))
    {
        q.front = 0;
    }
    q.itemCount -- ;
}




/************** BFS APPLICATION   ****************/ 

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
    int testCaseNum, Row = 0, Column = 0;
    q.front = 0 ;
    q. rear = -1 ;

    printf ("Enter number of test cases:\n");
    scanf ("%d", &testCaseNum);
  
    max = Row*Column ;
    char matrix [Row][Column];
   
    //try with test case 1 //
    
    for (int z = 1 ; z <= testCaseNum; z++)
    {
      printf ("testCaseNum :[%d]\n", z);
      printf ("Enter rows and columns:\n");
      scanf ("%d%d", &Row, &Column);
      printf ("\nEnter grid elements.\n");
      for (int p = 0 ; p < Row ; p++)
      {
          for (int q = 0 ; q < Column ; q++)
          {
              printf ("[%d][%d] : ", p, q);
              scanf ("%c ", &matrix[p][q]);
          }
      }
    printf ("\n");
    }
    printf ("%d", shortestDist(matrix));
    
    return 0 ;
}


