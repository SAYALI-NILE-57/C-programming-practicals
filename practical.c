/*Title: 
 Roll no: C02103
*/

#include<stdio.h>

int main()
{
  //variable declaration and initialization
  int marks[20], n, i, choice, del_element ,key , found, j;
  do
  {
    printf("\n===MENU===");
    printf("\n 1. Insert element\n 2. Delete\n 3. Display\n 4. Linear Search\n 5. Binary Search\n 6.Exit");
    printf("\n Enter the choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1: //Insert
        printf("Enter the size of the array :");  
        scanf("%d", &n);
        printf("Enter the marks :\n");
        for(i=0; i<n; i++)
         {
           scanf("%d", &marks[i]);
         }
      break;
      
      case 2: //Delete
        printf("\n Enter the position you want to delete");
        scanf("%d", &del_element);
        for(i=del_element; i<n; i++)
          {
            marks[i]=marks[i+1];
          }
          printf("Enter");
          n=n-1;
      break;
        
      case 3: //Display
          printf("Marks:");
         for(i=0; i<n; i++)
          {
            printf("%d", marks[i]);
          }
        
      break;
        
      case 4: //Linear search
           printf("Enter marks to search:");
           scanf("%d", &key);
           
           found=0;
           
           for(i=0;i<n;i++)
              {
                if(marks[i]==key)
                {
                  printf("Mark found at position %d",i+1);
                  found=1;
                  break;
                }
              }
              if(found==0)
                printf("marks not found");
                
                
      break;
      
      case 5: //Binary search
             int low=0,high=n-1,mid;
             found=0;
             printf("Enter marks for binary search");
             scanf("%d", &key);
             while(low<=high)
             {
               mid=(low+high)/2;
               if(marks[mid]==key)
                 {
                  printf("marks found at position %d",mid+1);
                  found=1;
                  break;
                 }
               else if(marks[mid]<key)
               {
                     low=mid+1;
               }
               else
               {
                     high=mid+1;
               }
             }  
               if(found==0)
                  {
                  printf("Marks not found:");
                  return 0;
                 }    
      break;
        
      case 6: //Exit
      break;
        
     }  
   } 
   while(choice!=6);
   return 0;
}   



===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit
 Enter the choice : 1
Enter the size of the array :4
Enter the marks :
21
13
30
40

===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit
 Enter the choice : 2

 Enter the position you want to delete2
Enter
===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit
 Enter the choice : 3
Marks:211340
===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit
 Enter the choice : 4           
Enter marks to search:21
Mark found at position 1
===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit
 Enter the choice : 5
Enter marks for binary search13
marks found at position 2
===MENU===
 1. Insert element
 2. Delete
 3. Display
 4. Linear Search
 5. Binary Search
 6.Exit

