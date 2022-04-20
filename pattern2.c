 #include<stdio.h>

 int main()
 {
     int row;
     printf("Enter the row size : ");
     scanf("%d",&row);
     int k = 65;
     for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",k);
        }
        k++;
     printf("\n");
     }
 }
