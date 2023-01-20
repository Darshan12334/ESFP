#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int option1p(), cropsns(), kharif(), login(), varcrop1(), varcrop2(), varcrop3(), rabi(), zaid();
int facts();

int login()
{

    int n = 1, x, y;
    char studentID[25], password[25], id[25], p[25];
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    printf("\n\n\n\t\t\t\t\t**************************************WELCOME**************************************\n\n\n\n\n");

    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\t\t\t\t\t\t\t\t\tLOGIN TO CONTINUE");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n");

    do
    {
        char studentID[25], password[25], id[25], p[25];
        FILE *fp;
        fp = fopen("D:\\ganpat university\\html and c_1\\login_data.txt", "r");
        fscanf(fp, "%s%s", studentID, password);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\n\t\t\t\t\t\t USERNAME:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        scanf("%s", &id);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\n\n\n\n\t\t\t\t\t\t  PASSWORD:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        scanf("%s", &p);

        x = strcmp(id, studentID);
        y = strcmp(p, password);

        if (x == 0 && y == 0)
        {
            printf("\n\t \t\t\t\t\t\tSucessfully Logged In\n");
            return 1;
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t %c   Wrong Password try again\nYou have  %d chances left", 2, 5 - n);
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------");
            Beep(800, 300);
            system("cls");
            printf("\n\n\n\t\t\t\t\t**************************************WELCOME**************************************\n\n\n\n\n");

            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("\n\t\t\t\t\t\t\t\t\tLOGIN TO CONTINUE");
            printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n");

            getch();
            n++;
        }

        if (n > 5)
        {
            printf("\n\t\t\t\t\t\t\tAccess Denied");
            getch();
        }

    } while (n <= 5);
}

option1p()
{

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("\t\t-----------------------------------MENU-------------------------------------\n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    int one;
    printf("\n\t\t\t\t\t\t -> 1.Crops and season.\n");
    printf("\n\t\t\t\t\t\t -> 2.Facts. \n");
    printf("\n\t\t\t\t\t\t -> 3.want to know about crops you own? \n");
    printf("\n\t\t\t\t\t\t -> 4.Use of Modern Technologies in your farm.  \n");
    printf("\n\t\t\t\t\t\t -> 5.Exit  \n");
    printf("\n\t\t\t\t\t\tSelect an option from above: \n");

    scanf("%d", &one);
    if (one == 1)
    {
        printf("\n\t\t\t\t\t\t you have selected 1.\nHere yo go!!!\n");
        cropsns();
    }

    else if (one == 2)
    {
        facts();
    }

    else if (one == 3)
    {
        about_crops();
    }
    else if (one == 4)
    {
        presc_agri();
    }

    else if (one == 5)
    {
        printf("\n\t\t\t\t\t\t !! Thank you !!");
        return;
    }
}
cropsns()
{
    int two;

    printf("\n\t\t\t\t\t\t There are three cropping seasons in India ,below are the following ones:\n");
    printf("\n\n\t\t\t\t\t\t -->Kharif (July-October) \n");
    printf("\n\t\t\t\t\t\t -->Rabi Crops ( October and November)\n");
    printf("\n\t\t\t\t\t\t -->Zaid Crops (March and June )\n");
    printf("\n\t\t\t\t\t\t -->Exit\n");
    printf("\n\n\t\t\t\t\t\t select an option from above:");
    scanf("%d", &two);
    if (two == 1)
    {
        kharif();
    }
    else if (two == 2)
    {
        rabi();
    }
    else if (two == 3)
    {
        zaid();
    }

    else if (two == 4)
    {
        printf("\n!! Thank you !!");
    }
}

about_crops()
{
    int choice;
    printf("\n\t\t\t\t\t There are Various Crops Grown In India \n\t\t\t\tFollowing Crops are grown In india over a large part of land \n\t\t\t\t Here are the Favourable Conditions");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n\t\t\t\tWheat:The temperature required for wheat during growing season\n\t\t\t\t is around 15.5 degree celcius. The weather should be warm and moist \n\t\t\t\tduring the early stage of growth and sunny and dry\n\t\t\t\t in the later stages. ");
        break;

    case 2:
        printf("\n\t\t\t\trice:Rice grows best in areas of warm, humid climate; rice requires\n\t\t\t\t temperatures between 20 degree Celcius and 35 degree celcius and a well-distributed \n\t\t\t\trainfall of about 100 cm or irrigation facilities.\n\t\t\t\t");

        break;

    case 3:
        printf("\n\t\t\t\t\t Maize:The range of temperature for maize growth is from 9° to 46 degree celcius with optimum around 34 degree celcius. ");
    }
}

presc_agri()
{
    printf("\n\t\t\t\t1.Smart agro devices\nDrones include ground-based drones, \n\t\t\t\tunmanned aerial vehicles (UAVs), multicopters (quadro-,\n\t\t\t\t hexa-, octocopters), and winged drones. The latter\n\t\t\t\t are more often used over large areas\n\t\t\t\t or for mapping purposes. They also allow creating electronic\n\t\t\t\t 3D maps of fields, calculating indicators\n\t\t\t\t for fertilization, inspecting fields and monitoring the state\n\t\t\t\t of crops, as well as monitoring the operation of transport and agricultural machinery.");
    printf("\n\t\t\t\t2.Variable rate technology (VRT):VRT refers to any technology\n\t\t\t\t that enables the variable application of inputs and \n\t\t\t\tallows farmers to control the amount of inputs they \n\t\t\t\tapply in a specific location. The basic\n\t\t\t\t components of this technology include a computer, software,\n\t\t\t\t a controller and a differential global \n\t\t\t\tpositioning system (DGPS)");
    printf("\n\t\t\t\t3.GPS soil sampling:testing a field's soil reveals available nutrients\n\t\t\t\t, pH level, and a range of other data that is\n\t\t\t\t important for making informed and profitable decisions.\n\t\t\t\t");
}

kharif()
{

    int choice;
    printf("\n\t\t\t\t\t\t Kharif:The cropping season in India starts in June and ends in October where monsoon crops are cultivated and harvested\n");
    printf("\n\n\t\t\t\t\t\t what would you like to know ?\n");
    printf("\n\t\t\t\t\t\t --->Various crops grown in kharif season\n");
    printf("\n\t\t\t\t\t\t --->go back\n");
    printf("\n\t\t\t\t\t\t --->Exit\n");
    printf("\n\t\t\t\t\t\t select an from above:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        varcrop1();
    case 2:
        cropsns();

    case 3:
        break;
    }
}

rabi()
{

    int choice;
    printf("\n\t\t\t\t\t\t rabi:mid-November, preferably after the monsoon rains are over, and harvesting begins in April / May\n");
    printf("\n\n\t\t\t\t\t\t what would you like to know ?\n");
    printf("\n\t\t\t\t\t\t --->Various crops grown in rabi season\n");
    printf("\n\t\t\t\t\t\t --->go back\n");
    printf("\n\t\t\t\t\t\t --->Exit\n");
    printf("\n\t\t\t\t\t\t select an from above:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        varcrop2();
    case 2:
        cropsns();

    case 3:
        break;
    }
}

zaid()
{

    int choice;
    printf("\n\t\t\t\t\t\t zaid crops are summer season crops from March to June\n");
    printf("\n\n\t\t\t\t\t\t what would you like to know ?\n");
    printf("\n\t\t\t\t\t\t --->Various crops grown in kharif season\n");
    printf("\n\t\t\t\t\t\t --->go back\n");
    printf("\n\t\t\t\t\t\t --->Exit\n");
    printf("\n\t\t\t\t\t\t select an from above:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        varcrop3();
    case 2:
        cropsns();

    case 3:
        break;
    }
}
varcrop1()
{
    int choice;
    printf("\n\t\t\t\t\t\t 1.Jowar\n\n\t\t\t\t\t\t2.Maize\n\n\t\t\t\t\t\t3.Milletd\n\n\t\t\t\t\t\t3.Mustard\n\n\t\t\t\t\t\t4.Rice\n\n\t\t\t\t\t\t5.soybean");
    printf("\n\t\t\t\t\t\t Press 0 to exit\n");
    printf("\n\t\t\t\t\t\t Press 1 to go back\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0 /* constant-expression */:
        /* code */
        break;

    case 1:
        kharif();
    }
}

varcrop2()
{
    int choice;
    printf("\n\t\t\t\t\t\t 1.Barley\n\n\t\t\t\t\t\t2.Gram\n\n\t\t\t\t\t\t3.Rapeseed\n\n\t\t\t\t\t\t3.Mustard\n\n\t\t\t\t\t\t4.Oat\n\n\t\t\t\t\t\t5.Wheat\n\n\t\t\t\t\t\t6.Bajra");
    printf("\n\t\t\t\t\t\t Press 0 to exit\n");
    printf("\n\t\t\t\t\t\t Press 1 to go back\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0 /* constant-expression */:
        /* code */
        break;

    case 1:
        rabi();
    }
}

varcrop3()
{
    int choice;
    printf("\n\t\t\t\t\t\t 1.watermelon\n\n\t\t\t\t\t\t2.muskmelon\n\n\t\t\t\t\t\t3.cucumber\n\n\t\t\t\t\t\t3.Bitter gourd\n\n\t\t\t\t\t\t4.fodder\n\n\t\t\t\t\t\t5.pumpkin\n\n\t\t\t\t\t\t6.guar(cluster beans)");
    printf("\n\t\t\t\t\t\t Press 0 to exit\n");
    printf("\n\t\t\t\t\t\t Press 1 to go back\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0 /* constant-expression */:
        /* code */
        break;

    case 1:
        zaid();
    }
}

facts()
{
    int f;
    printf("\n\n\t\t\t\t\t\t Here are some facts related to crops and their History-\n");
    printf("\n\t\t\t\t\t\t 1. Agriculture is the largest employer in the world\nAlmost all industries depend on agricultural raw products.\n ");
    printf("\n\t\t\t\t\t\t 3. Farmers need to produce 70%c more food than today to feed the world's growing population by 2050", 37);
    printf("\n\n\t\t\t\t\t\t 4. More than 6000 varieties of apple are grown around the world\n");
    printf("\n\t\t\t\t\t\t 5.Exit");
    printf("\n\t\t\t\t\t\t 6.go back");
    scanf("%d", &f);
    if (f == 5)
    {
        return;
    }
    else if (f == 6)
    {
        option1p();
    }
}

void main()
{

    if (login() == 1)
    {
        system("cls");

        option1p();
    }

    return 0;
}
