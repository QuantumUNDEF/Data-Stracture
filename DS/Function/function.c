#include <stdio.h>
#define size 15
int main()
   {
    int l, w, area;
    printf("Enter Length: ");
    scanf("%d", &l);
    printf("Enter Width: ");
    scanf("%d", &w);
    area = AreaOfRectangle(l, w);
    printf("Area of Ranctagle: %d", area);
    return 0;
   } 
   int AreaOfRectangle(int length, int width){
       return length*width;
   }
   