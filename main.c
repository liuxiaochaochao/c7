#include <stdio.h>
struct xuesheng
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[1000];
};
int sum = 0;

int main()
{
    int index = 0;
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

        if (a == 1)
        {
            printf("请输入姓名：\n");
            scanf("%s", &(arr[index].name));
            printf("请输入数学：\n");
            scanf("%d", &(arr[index].shuxue));
            printf("请输入语文：\n");
            scanf("%d", &(arr[index].yuwen));
            printf("请输入英语：\n");
            scanf("%d", &(arr[index].yingyu));
            index++;
            printf("点击回车继续");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            if (index > 0)
            {
                index--;
                printf("删除完成，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("无该学生信息，删除失败，点击回车继续");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (a == 3)
        {

            for (int i = 0; i < index; i++)
            {
                printf("学生姓名%s\n", arr[i].name);
                printf("学生语文%d\n", arr[i].yuwen);
                printf("学生数学%d\n", arr[i].shuxue);
                printf("学生英语%d\n", arr[i].yingyu);
            }
        }
        if (a == 4)
        {

            for (int i = 0; i < index; i++)
            {
                int sum = 0;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum < 180)
                {
                    printf("%d%s", i + 1, arr[i].name);
                }
            }
        }
        if (a == 5)
        {

            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu)
                {
                    printf("姓名%s\n", arr[i].name);
                }
            }
        }
        if (a == 6)
        {
            printf("总分最高的学生为：\n");

            int max = 0;
            int stuID = 0;
            
            for(int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if(max < sum){
                    max  =  sum;
                    stuID = i;
                }
            }
            printf("总分最高的姓名为%s，语文：%d，数学:%d，英语:%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x); 
        }
        if (a == 7)
        {
        }
        if (a == 8)
        {
            printf("点击回车继续\n");
            break;
        }
    }

    return 0;
}