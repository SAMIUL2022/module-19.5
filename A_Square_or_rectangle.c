#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pair[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &pair[i][j]);
        }
    }

  for (int i = 0; i <n ; i++)
  {
    
    int side1=pair[i][0];
    int side2=pair[i][1];
    if (side1==side2)
    {
       printf("Square\n");
    }
    else
     printf("Rectangle\n");
  }
  
    return 0;
}
