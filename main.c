#include <stdio.h>
struct xuesheng
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[1000];
};

int main()
{
    int index=0;
    struct xuesheng arr[1000];

    printf("进入系统（三科成绩）");

    while (1)
    {
        printf("1.输入学生成绩\n");
        printf("2.删除学生成绩\n");
        printf("3.显示学生成绩\n");
        printf("4.所有总分不及格的学生（小于180）\n");
        printf("5.每一科都不及格的学生\n");
        printf("6.显示总分最高的学生\n");
        printf("7.显示平均分最高\n");
        printf("8.退出学生管理系统\n");
        int a;
        scanf("%d", &a);

        if (a ==1)
        {
            printf("请输入姓名：\n");
            scanf("%s\n",&(arr[index].name));
            printf("请输入数学：\n");
            scanf("%s\n",&(arr[index].shuxue));
            printf("请输入语文：\n");
            scanf("%s\n",&(arr[index].yuwen));
            printf("请输入英语：\n");
            scanf("%s\n",&(arr[index].yingyu));
        }
        if (a ==2)
        {
        }
        if (a ==3)
        {
        }
        if (a ==4)
        {
        }
        if (a ==5)
        {
        }
        if (a ==6)
        {
        }
        if (a ==7)
        {
        }
        if (a ==8)
        {
            printf("点击回车继续\n");
            break;
        }
    }

    return 0;
}