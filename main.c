/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
       int a[100];
       int r=-1,f=-1,size=100;
       
       
    int isFull()
    {
        if(r+1==size)
        {
            return 1;
        }
        else
            return 0;
    }
    
    int isEmpty()
    {
        if(r==f)
        {
            return 1;
        }
        else
            return 0;
    }
       
     void enquque(int value)
       {
          if(isFull())
           {
             printf("Queue is Full\n");
           }
           else
           {
             r++;
             a[r]=value;
             printf("Element %d inserted!\n",a[r]);
           }  
       }
     int dequeue()
       {  
           int value;
           value=-1;
           if(isEmpty())
            {
               printf("Queue is empty\n");
            }
           else
            {
             f++;
             value=a[f];
             
            }
            return value;
       }
       
       
int main()
{
   
       int data,val;
       enquque(12);
       enquque(22);
       enquque(2);
       enquque(5);
       val=dequeue();
       printf("Dequeue Element:%d",val);
    return 0;
}
