#nclude<stdio.h>

int main()
{
    int a = 0;
    char ch;
    float fvalue;
    char *str = NULL;
    scanf("%d",&a);
    scanf("%s",&ch);
    scanf("%f",&fvalue);
    scanf("%s",&str);
    printf("value is:%d",a);
    printf("value is:%c",ch);
    printf("value is:%f",fvalue);
    printf("value is:%s",str);
}
