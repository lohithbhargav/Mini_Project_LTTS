#include "pattern.h"

#include <stdio.h>
#include <stdlib.h>

//#include "unity\unity.h"

// For Testing Propose these 2 are created

int square_star(int n){
    int flag=0;    
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            //printf("*");
            flag=1;  
        }  
        //printf("\n");  
    } 
    return flag; 
}

int rhombus_star(int n){
     int flag=0;    
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            //printf(" ");  
        }  
        flag=1;
        for(int k=1;k<=n;k++)  
        {  
            //printf("*");  
        }  
        //printf("\n");  
    }  
    return flag;
}

// These are the main funtional logic's

void square_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
        {  
            printf("*"); 
        }  
        printf("\n");  
    } 
}


void hollow_square_star_pattern_with_diagonal(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n-i+1||i==j||j==n)  
            {  
            printf("*");  
            }  
            else  
            {  
                  
                      printf(" ");  
                  }  
                 
            }        
        printf("\n");  
    }  
}

void rhombus_star_pattern(){
     int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
}

void hollow_rhombus_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
           if(i==1 || i==n || k==1 || k==n)  
            printf("*");  
            else  
            printf(" ");   
        }  
        printf("\n");  
    }  
}

void mirrored_rhombus_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
           printf("*");  
              
        }  
        printf("\n");
    }  
}

void hollow_mirrored_rhombus_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<i;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=n;k++)  
        {  
         if(i==1 || i==n || k==1 || k==n)  
           printf("*");  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
}

void right_triangle_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }  
}

void mirrored_right_triangle_star_pattern(){
    int n,m=1;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  
}

void hollow_right_triangle_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
        if(j==1|| i==j || i==n )  
        {  
            printf("*");  
        }  
        else  
        printf(" ");  
        }  
        printf("\n");  
    }  
}


void hollow_inverted_mirrored_right_triangle_star_pattern(){
    int n,m;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
          if(i==1 || k==1 || k==m)  
           printf("*");  
           else  
           printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    }
}

void hollow_inverted_right_triangle_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
         if(j==1 || j==i || i==n)  
          printf("*");  
          else  
          printf(" ");  
      }  
      printf("\n");  
    }  
}

void inverted_right_triangle_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
          printf("*");  
      }  
      printf("\n");  
    }  
}

void inverted_mirrored_right_triangle_star_pattern(){
    int n,m;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=m;k++)  
       {  
           printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }
}

void hollow_square_star_pattern(){
    int n;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }
}

void pyramid_star_pattern(){
    int n,m;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }
}

void hollow_pyramid_star_pattern(){
    int n,m;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
         printf("*");  
         else  
         printf(" ");  
       }  
       m--;  
     
      printf("\n");  
    }    
}

void inverted_pyramid_star_pattern(){
    int n,m=1;  
    printf("Enter the number of rows :");  
    scanf("%d",&n);  
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }  
}

void right_arrow_star_pattern(){
    int n;  
  printf("Enter the number of columns :");  
  scanf("%d",&n);  
  //printing the upper part of the pattern..  
 for(int i=0;i<n;i++)  
 {  
   for(int j=0;j<i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=1;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<n-i;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
} 
}

void half_diamond_star_pattern(){
    int n,m=1;  
    printf("Enter the number of columns :");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(int i=n-1;i>=1;i--)  
 {  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }
}

void left_arrow_star_pattern(){
    int n;  
  printf("Enter the number of columns :");  
  scanf("%d",&n);   
 for(int i=1;i<=n;i++)  
 {  
   for(int j=1;j<=n-i;j++)  
   {  
       printf(" ");  
   }  
   for(int k=0;k<=n-i;k++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }  
for(int i=1;i<n;i++)  
{  
  for(int j=1;j<i+1;j++)  
  {  
    printf(" ");  
  }  
  for(int k=1;k<=i+1;k++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
}

void plus_star_pattern(){
    int n;  
  printf("Enter the odd number only :");  
  scanf("%d", &n);  
  for(int i=1;i<=n;i++)  
  {  
    if(i==((n/2)+1))  
    {  
      for(int j=1;j<=n;j++)  
      {  
        printf("+");  
      }  
   
    }  
    else  
    {  
    for(int j=1;j<=n/2;j++)  
    {  
      printf(" ");  
    }  
    printf("+");  
    }  
    printf("\n");  
  }  
}

void diamond_star_pattern(){
    int n;  
  printf("Enter the number of rows :\n");  
  scanf("%d",&n);  
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");  
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }  
}

void x_star_pattern(){
    int n,m;  
  printf("Enter the number :");  
  scanf("%d",&n);  
  m=2*n-1;  
  for(int i=1;i<=m;i++)  
  {  
    for(int j=1;j<=m;j++)  
    {  
       if(i==j || j==(m-i+1))  
       {  
         printf("*");  
       }  
       else  
       {  
         printf(" ");  
       }  
    }  
    printf("\n");  
  }  
}
