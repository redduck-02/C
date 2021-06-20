/*-Viết chương trình nhập vào hai số a và b,
nhập một trong các phép toán pt: +, -,* , /. ^.
In lên màn hình kết quả của biểu thức a pt b.
Ví dụ: a=5, b=2, pt=^ thì trên màn hình hiển thị 5 ^ 2 = 25.
-Sửa lại chương trình trên để người dùng có thể
thực hiện nhiều cho đến khi muốn kết thúc bằng
ấn nhấn phím thoát (ESC, n…). 
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
void Enter(int &a, int &b)
{
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
}

int Multiply(int a, int b)
{
    return (a*b);
}

float Divide(float a, float b)
{
    return (a/b);
}

int Power(int a, int b)
{
    return (pow(a,b));
}

int main()
{
    int a, b;
    int choose, key;
    Enter(a,b);
    do
    {
        printf("-----------Menu-----------\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. ^\n");
        printf("Choose your section: ");
        scanf("%d", &choose);
        switch(choose)
        {
            case 1:
                printf("%d plus %d is %d", a, b, (a+b));
                break;
            case 2:
                printf("%d minus %d is %d", a, b, (a-b));
                break;
            case 3:
                Multiply(a,b);
                printf("%d multiplication %d is %d", a, b, Multiply(a,b));
                break;
            case 4:
                Divide(a,b);
                printf("%d divisor %d is %.2f", a, b, Divide(a,b));
                break;
            case 5:
                Power(a,b);
                printf("%d to the power of %d is %d", a, b, Power(a,b));
                break;
            default:
                printf("Error");
                break;
        }
    key = getch();
    } while (key!=27);
    return 0;
}