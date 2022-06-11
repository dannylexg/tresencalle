#include <stdio.h>
#include <conio.h>
void opcion();
void interfaz();
int main()
{
    clrscr();
    interfaz();
    opcion();
    getch();
    getch(); 
    gotoxy(2,40);   
}
    void opcion()
{
//opciones
    int opcion, i, b, c, x1, x2, x3, x4, x5, x6, x7, x8, x9, o1, o2, o3, o4, o5, o6, o7, o8, o9;
    gotoxy(2,2);
    printf("Opciones");
    gotoxy(2,4);
    printf("El primero se asignara como X");
    gotoxy(2,28);
    printf("Primer digito 1=X o 2=O, Segundo Digito ubicacion 1..9");
    gotoxy(2,30);
    printf("Ejemplo 19 - 1X Posicion 9");
    gotoxy(2,32);
    printf("Opcion: ");
    b = 7;
    c = 9;
    for(i=1;i<=9;i++)
    {
    b = b + 3;
    c = c + 3;
    gotoxy(b,32);
    scanf("%i", &opcion);
    gotoxy(c,32);
    printf(",");
    if(opcion == 11)
    {
        gotoxy(40,9);
        printf("X");
        x1 = 1;
 
    }
    else if(opcion == 12)
    {
        gotoxy(60,9);
        printf("X");
        x2 = 2;
    }
    else if(opcion == 13)
    {
        gotoxy(80,9);
        printf("X");
        x3 = 3;
    }
    else if(opcion == 14)
    {
        gotoxy(40,16);
        printf("X");
        x4 = 4;
    }
    else if(opcion == 15)
    {
        gotoxy(60,16);
        printf("X");
        x5 = 5;
    }
    else if(opcion == 16)
    {
        gotoxy(80,16);
        printf("X");
        x6 = 6;
    }
    else if(opcion == 17)
    {
        gotoxy(40,23);
        printf("X");
        x7 = 7;
    }
    else if(opcion == 18)
    {
        gotoxy(60,23);
        printf("X");
        x8 = 8;

    }
    else if(opcion == 19)
    {
        gotoxy(80,23);
        printf("X");
        x9 = 9;
    }

    else if(opcion == 21)
    {
        gotoxy(40,9);
        printf("O");
        o1 = 1;
 
    }
    else if(opcion == 22)
    {
        gotoxy(60,9);
        printf("O");
        o2 = 2;
    }
    else if(opcion == 23)
    {
        gotoxy(80,9);
        printf("O");
        o3 = 3;
    }
    else if(opcion == 24)
    {
        gotoxy(40,16);
        printf("O");
        o4 = 4;
    }
    else if(opcion == 25)
    {
        gotoxy(60,16);
        printf("O");
        o5 = 5;
    }
    else if(opcion == 26)
    {
        gotoxy(80,16);
        printf("O");
        o6 = 6;
    }
    else if(opcion == 27)
    {
        gotoxy(40,23);
        printf("O");
        o7 = 7;
    }
    else if(opcion == 28)
    {
        gotoxy(60,23);
        printf("O");
        o8 = 8;
    }
    else if(opcion == 29)
    {
        gotoxy(80,23);
        printf("O");
        o9 = 9;
    }
    if(x1 == 1 && x2 == 2 && x3 == 3)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x4 == 4 && x5 == 5 && x6 == 6)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x7 == 7 && x8 == 8 && x9 == 9)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x1 == 1 && x4 == 4 && x7 == 7)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x2 == 2 && x5 == 5 && x8 == 8)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x3 == 3 && x6 == 6 && x9 == 9)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x1 == 1 && x5 == 5 && x9 == 9)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    else if(x3 == 1 && x5 == 5 && x7 == 7)
        {
            gotoxy(90,7);
            printf("X ganador");
        }
    
    else if(o1 == 1 && o2 == 2 && o3 == 3)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o4 == 4 && o5 == 5 && o6 == 6)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o7 == 7 && o8 == 8 && o9 == 9)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o1 == 1 && o4 == 4 && o7 == 7)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o2 == 2 && o5 == 5 && o8 == 8)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o3 == 3 && o6 == 6 && o9 == 9)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o1 == 1 && o5 == 5 && o9 == 9)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    else if(o3 == 3 && o5 == 5 && o7 == 7)
        {
            gotoxy(90,7);
            printf("O ganador");
        }
    }
}
    
        
    
    void interfaz()
    {
//interfaz grafica
    int i;
    gotoxy(40,5);
    printf("1");
    gotoxy(60,5);
    printf("2");
    gotoxy(78,5);
    printf("3");
    gotoxy(40,13);
    printf("4");
    gotoxy(60,13);
    printf("5");
    gotoxy(78,13);
    printf("6");
    gotoxy(40,21);
    printf("7");
    gotoxy(60,21);
    printf("8");
    gotoxy(78,21);
    printf("9");
    for(i=7;i<=25;i++)
    {
        gotoxy(50,i);
        printf("*");
    }
    for(i=7;i<=25;i++)
    {
        gotoxy(70,i);
        printf("*");
    }
    for(i=35;i<=85;i++)
    {
        gotoxy(i,12);
        printf("*");
    }
    for(i=35;i<=85;i++)
    {
        gotoxy(i,20);
        printf("*");
    }

}

