//
//  main.c
//  Git_project
//
//  Created by 주현명 on 2022/12/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int step = 1;
    while(step < 11) {
        int type = rand() % 4;
        int num,num2,result,inp;
        switch(type) {
            case 0:
                num = rand() % 10;
                num2 = rand() % 10;
                result = num + num2;
                inp;
                printf("\n[%d/10] %d + %d = ",step,num,num2);
                scanf("%d",&inp);
                if(inp == result) {
                    printf("Correct!");
                    step++;
                } else {
                    printf("Wrong! Answer is %d",result);
                }
                break;
            case 1:
                num = rand() % 10;
                num2 = rand() % 10;
                result = num - num2;
                inp;
                printf("\n[%d/10] %d - %d = ",step,num,num2);
                scanf("%d",&inp);
                if(inp == result) {
                    printf("Correct!");
                    step++;
                } else {
                    printf("Wrong! Answer is %d",result);
                }
                break;
            case 2:
                num = rand() % 10;
                num2 = rand() % 10;
                result = num * num2;
                inp;
                printf("\n[%d/10] %d * %d = ",step,num,num2);
                scanf("%d",&inp);
                if(inp == result) {
                    printf("Correct!");
                    step++;
                } else {
                    printf("Wrong! Answer is %d",result);
                }
                break;
            case 3:
                num = rand() % 10;
                num2 = rand() % 10;
                result = num / num2;
                inp;
                printf("\n[%d/10] %d / %d = ",step,num,num2);
                scanf("%d",&inp);
                if(inp == result) {
                    printf("Correct!");
                    step++;
                } else {
                    printf("Wrong! Answer is %d",result);
                }
                break;
        }
    }
}
