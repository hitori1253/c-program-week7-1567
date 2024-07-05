#include <stdio.h>
void main()
{
    int score = 74;
    printf("Please enter score");
    scanf("%d",&score);
    if (score >=80 && score <=100)
        printf("Grade A:%d",score);
    else if (score >=75 && score <= 79)
        printf("Grade B+:%\n",score);
    else if (score >=70 && score <= 74)
        printf("Grade B:%\n",score);
    else if (score >=65 && score <= 69)
        printf("Grade c+:%\n",score);
    else if (score >=60 && score <= 64)
        printf("Grade c:%\n",score);
    else if (score >=55 && score <= 59)
        printf("Grade D+:%\n",score);
    else if (score >=50 && score <= 54)
        printf("Grade D:%\n",score);
    else if (score >=0 && score <= 49)
        printf("Grade F:%\n",score);
    else
        printf("ERROR\n");
    printf("Finish");
}