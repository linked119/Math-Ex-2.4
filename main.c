#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    float x, y, x2, y2;
    float x3, y3, x4, y4;

    /*Line AB*/
    puts("Enter the first coordinate of line AB\n");
    printf("x1: ");
    scanf("%f", &x);
    printf("y1: ");
    scanf("%f", &y);
    system("cls");
    puts("Enter the second coordinate of line AB\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    float q1[][2] = {x, y, x2, y2};
    /*Line AB*/
    system("cls");
    /*Line CD*/
    puts("Enter the first coordinate of line CD\n");
    printf("x1: ");
    scanf("%f",&x3);
    printf("y1: ");
    scanf("%f",&y3);
    system("cls");
    puts("Enter the second coordinate of line CD\n");
    printf("x2: ");
    scanf("%f",&x4);
    printf("y2: ");
    scanf("%f",&y4);
    float q2[][2] = {x3, y3, x4, y4};
    /*Line CD*/
    int r1,r2;
    puts("Enter the ratio\n");
    scanf("%d",&r1);
    puts(" : ");
    scanf("%d",&r2);

    //Calculations

    //Finding the mid point
    float midpointOfX=(x+x2)/2;
    float midpointOfY=(y+y2)/2;
    //Applying Ratio theorem
    float xDash=((r1*x4)+(r2*x3)) / (r1+r2);
    float yDash=((r1*y4)+(r2*y3)) / (r1+r2);

    //Coordinate of the undefined point F

    float q3[][2]={midpointOfX,midpointOfY,xDash,yDash};

    //Final Calculation

    // system("cls");
    puts("The Result is");
    printf("m = %f \n\n",(q3[1][1]-q3[0][1]) / (q3[1][0]- q3[0][0]));


    printf("value of q1 :\t(%.0f,%.0f) : (%.0f,%.0f)\n", q1[0][0], q1[0][1], q1[1][0], q1[1][1]);
    printf("value of q2 :\t(%.0f,%.0f) : (%.0f,%.0f)\n", q2[0][0], q2[0][1], q2[1][0], q2[1][1]);
    printf("value of q3 :\t(%.0f,%.0f) : (%.0f,%.0f)\n", q3[0][0], q3[0][1], q3[1][0], q3[1][1]);
    getch();
}