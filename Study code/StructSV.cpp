/*- Khai báo kiểu dữ liệu SinhVien có các trường họ tên, giới tính,
tuổi, điểm toán – lý – hóa và điểm trung bình.
- Nhập vào danh sách N sinh viên
- Xuất danh sách N sinh viên
- Tính điểm trung bình cho N sinh viên
- Sắp xếp N sinh viên theo thứ tự tăng dần của điểm trung bình
- Xếp loại N sinh viên
- Xuất danh sách N sinh viên ra file
- Viết chương trình dạng menu cho phép sử dụng các tính năng trên */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct Student
{
    char name[50], sex[5];
    int age;
    float pM, pC, pP;
    float ave = 0;
} St;

void Average(St &st)
{
    st.ave = (st.pM + st.pC + st.pP) / 3;
}

void sortAve(St array[], int n)
{
    St temp;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            if(array[i].ave > array[j].ave)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void sortSt(St st)
{
    if(st.ave >= 8) printf("\nExcellent");
    else if(st.ave >= 6.5) printf("\nGood");
    else if(st.ave >= 5) printf("\nNormal");
    else printf("\nBad");
}

void sortStM(St array[], int n)
{
    printf("\n\nStudent rating: ");
    for(int i = 0; i < n; i++)
    {
        printf("\n------------------------\n");
        printf("Rating of student number %d\n", i+1);
        sortSt(array[i]);
    }
}

void Input(St &st)
{
    printf("\nEnter name: "); fflush(stdin); gets(st.name);
    printf("Enter age: "); scanf("%d", &st.age);
    printf("Enter sex: "); fflush(stdin); gets(st.sex);
    printf("Enter Math, physical, chemistry point: ");
    scanf("%f%f%f", &st.pM, &st.pC, &st.pP);
    Average(st);
}

void InputM(St array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n~~~~~~~~~\n");
        printf("Enter student number %d ", i+1);
        Input(array[i]);
    }
}

void Output(St st)
{
    printf("\nName: %s", st.name);
    printf("\nSex: %s", st.sex);
    printf("\nAge: %d", st.age);
    printf("\nMath: %.2f\nPhysic: %.2f\nChemistry: %.2f", st.pM, st.pP, st.pC);
    printf("\nAverage: %.2f", st.ave);
}

void OutputM(St array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n------------------------\n");
        printf("\nInformation of number %d student", i+1);
        Output(array[i]);
    }
}

void outFile(St array[], int n, char fileName[])
{
    FILE *fp;
    fp = fopen(fileName,"w");
    fprintf(fp, "%20s%5s%5s%10s%10s%10s%10s\n", "Name", "Sex", "Age", "Math Point", "Physic Point", "Chemistry Point", "Average");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%20s%5s%5d%10f%10f%10f%10f\n", array[i].name,array[i].sex, array[i].age, array[i].pM, array[i].pP, array[i].pC, array[i].ave);
    }
    fclose(fp);
}

int main()
{
    int n;
    int key;
    char fileName[] = "DSSV.txt";
    bool daNhap = false;
    do
    {
        printf("Enter the quantity of student: ");
        scanf("%d", &n);
    } while(n <= 0);
    St array[n];
    while(true)
    {
        system("cls");
        printf("******************************************\n");
        printf("**    STUDENT MANAGEMENT PROGRAM        **\n");
        printf("**     1. Insert information            **\n");
        printf("**     2. Print student list            **\n");
        printf("**     3. Sort by grade point average   **\n");
        printf("**     4. Student rating                **\n");
        printf("**     5. Output File                   **\n");
        printf("**     0. Exit                          **\n");
        printf("******************************************\n");
        printf("**       Enter your selection:          **\n");
        scanf("%d", &key);
        switch(key)
        {
            case 1:
                printf("\nYou choose section 1: Insert information");
                InputM(array,n);
                printf("Insert success");
                daNhap = true;
                printf("Press any key to continue");
                getch();
                break;
            case 2:
                if(daNhap)
                {
                    printf("You choose section 2: Print student list\n");
                    OutputM(array,n);
                } else
                    {
                        printf("Insert information first!");
                    }
                printf("Press any key to continue");
                getch();
                break;
            case 3:
                if(daNhap)
                {
                    printf("You choose section 3: Sort by grade point average\n");
                    sortAve(array,n);
                    OutputM(array,n);
                } else
                    {
                        printf("Insert information first!");
                    }
                printf("Press any key to continue");
                getch();
                break;
            case 4:
                if(daNhap)
                {
                    printf("You choose section 4: Student rating\n");
                    sortStM(array,n);
                } else
                    {
                        printf("Insert information first!");
                    }
                printf("Press any key to continue");
                getch();
                break;
            case 5:
                if(daNhap)
                {
                    printf("You choose section 5: Output File\n");
                    outFile(array,n,fileName);
                } else
                    {
                        printf("Insert information first!");
                    }
                printf("Successful output to file %s\n", fileName);
                printf("Press any key to continue");
                getch();
                break;
            case 0:
                printf("You choose exit progam\n");
                getch();
                return 0;
            default:
                printf("Nothing here\n");
                printf("Press any key to continue\n");
                getch();
                break;
        }
    }
    printf("\n");
    return 0;
}