#include <stdio.h>
#include <stdlib.h>
int main() {
   int list[20];
   int n,pos,choice,count,data;
     //creation
   printf("Enter number of elements : ");
   scanf("%d",&n);
   printf("Enter the list elements : ");
   for(int i=0;i<n;i++){
    scanf("%d",&list[i]);  
   }
printf("1. Add Element(insertion) \n");
 printf("2. deletion Element\n");
        printf("3. Search Element\n");
         printf("4. display Element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
    case 1:
        printf("Enter data to be inserted : ");
        scanf("%d",&data);
        printf("Enter position to be inserted :");
        scanf("%d",&pos);
        for(int i=n-1;i>pos-1;i--){
            list[i+1]=list[i];
             list[pos-1]=data;
        }
        for(int i=0;i<n;i++){
    printf("%d ",list[i]);  
   }
   break;
    case 2:
        printf("Enter position to be deleted : ");
    scanf("%d",&pos);
    //printf("Element %d deleted ",list[pos]);
    for(int i=pos-1;i<n-1;i++){
        list[i]=list[i+1];
        //  n=n-1;
    }
       for(int i=0;i<n-1;i++){
    printf("%d ",list[i]);  
   }
    break;
    case 3:
                int count=0;
        printf("Enter the element to be searched : ");
        scanf("%d",&data);
        for(int i=0;i<n+1;i++){
            if(list[i]==data){
            count++;
            }
        }
        if(count > 0){
            printf("element found ");
           
        }
         else{
             printf("Element not found ");
             
         }
        break;
    case 4:
        for(int i=0;i<n;i++){
        printf("%d ",list[i]);  
        }
    break;
   case 0:
   exit;
    }
}
