/* Program Title : Periodic Table There is some personal infomation in the introduction and end. Please remove them before use. Only first 20 elements activated... */

void element(int, int);
void welcome_screen()
{
    clrscr();
    for (int x = 50; x >= 20; x--)
    {
        delay(160);
        gotoxy(x, 12);
        cputs(" P R O J E C T ");
        gotoxy(x, 14);
        cputs(" D E V E L O P E D B Y : ");
        gotoxy(x, 16);
        cputs("CBSE PORTAL");
    }
    gotoxy(x, 24);
    cputs("Press Any Key To Continue....");
    getch();
}
int i, j, g;
void frame()
{
    gotoxy(19, 9);
    cout << "É";
    for (i = 20; i <= 60; i++)
    {
        gotoxy(i, 9);
        cout << "Í";
    }
    cout << "»";
    gotoxy(19, 16);
    cout << "È";
    for (i = 20; i <= 60; i++)
    {
        gotoxy(i, 16);
        cout << "Í";
    }
    cout << "¼";
    for (i = 10; i <= 15; i++)
    {
        gotoxy(19, i);
        cout << "º";
    }
    for (i = 10; i <= 15; i++)
    {
        gotoxy(61, i);
        cout << "º";
    }
    gotoxy(5, 24);
    cout << "Press Esc to Exit";
}
void display()
{
    gotoxy(33, 2);
    cout << "PERIODIC TABLE";
    gotoxy(1, 1);
    cout << "É";
    for (i = 2; i <= 79; i++)
    {
        gotoxy(i, 1);
        cout << "Í";
    }
    cout << "»";
    for (i = 2; i <= 23; i++)
    {
        gotoxy(80, i);
        cout << "º";
    }
    gotoxy(80, 24);
    cout << "¼";
    for (i = 2; i <= 11; i++)
    {
        gotoxy(i, 24);
        cout << "Í";
    }
    gotoxy(1, 24);
    cout << "È";
    for (i = 2; i <= 23; i++)
    {
        gotoxy(1, i);
        cout << "º";
    }
    gotoxy(12, 4);
    cout << "Ú"
         << "Ä"
         << "Ä"
         << "¿";
    gotoxy(63, 4);
    cout << "Ú"
         << "Ä"
         << "Ä"
         << "¿";
    gotoxy(12, 5);
    cout << "³";
    gotoxy(15, 5);
    cout << "³";
    gotoxy(63, 5);
    cout << "³";
    gotoxy(66, 5);
    cout << "³";
    gotoxy(12, 6);
    cout << "Ã"
         << "Ä"
         << "Ä"
         << "´";
    gotoxy(48, 6);
    cout << "Ú";
    for (i = 51; i <= 60; i++)
        if (i % 3 == 0)
        {
            gotoxy(i, 6); cout<42)
            {
                gotoxy(i, 18);
                cout << " ";
            }
            if (i % 3 == 0)
            {
                gotoxy(i, 14);
                cout << "Å";
                gotoxy(i, 12);
                cout << "Å";
                gotoxy(i, 16);
                cout << "Å";
                if (i > 42)
                    gotoxy(i, 16);
                cout << "Á";
            }
        }
    for (i = 23; i < 66; i++)
    {
        gotoxy(i, 20);
        cout << "Ä";
        gotoxy(i, 22);
        cout << "Ä";
        gotoxy(i - 11, 24);
        cout << "Ä";
        gotoxy(i, 24);
        cout << "Ä";
        if (i % 3 == 0)
        {
            gotoxy(i, 20);
            cout << "Â";
            gotoxy(i, 22);
            cout << "Å";
            gotoxy(i, 24);
            cout << "Á";
        }
    }
    for (i = 23; i < 66; i++)
    {
        if (i % 3 == 0)
            if (i > 10)
            {
                gotoxy(i, 24);
                cout << "Á";
            }
    }
    for (i = 67; i <= 80; i++)
    {
        gotoxy(i, 24);
        cout << "Í";
    }
    for (i = 0; i <= 10; i++)
    {
        gotoxy(i, 25);
        cout << " ";
    }
    for (i = 19; i <= 47; i++)
    {
        gotoxy(i, 9);
        cout << " ";
    }
    for (i = 2; i <= 5; i++)
    {
        gotoxy(61, i);
        cout << " ";
    }
    gotoxy(12, 22);
    cout << "Ã";
    gotoxy(66, 20);
    cout << "¿ ";
    gotoxy(12, 24);
    cout << "ÀÄ";
    gotoxy(80, 24);
    cout << "¼";
    gotoxy(59, 9);
    cout << " ";
    gotoxy(56, 9);
    cout << " ";
    gotoxy(13, 13);
    cout << "Rb";
    gotoxy(13, 15);
    cout << "Cs";
    gotoxy(13, 17);
    cout << "Fr";
    gotoxy(16, 7);
    cout << "Be";
    gotoxy(16, 9);
    cout << "Mg";
    gotoxy(16, 11);
    cout << "Ca";
    gotoxy(16, 13);
    cout << "Sr";
    gotoxy(16, 15);
    cout << "Ba";
    gotoxy(16, 17);
    cout << "Ra";
    gotoxy(19, 11);
    cout << "Sc";
    gotoxy(19, 13);
    cout << "Y";
    gotoxy(19, 15);
    cout << "La";
    gotoxy(19, 17);
    cout << "Ac";
    gotoxy(22, 11);
    cout << "Ti";
    gotoxy(22, 13);
    cout << "Zr";
    gotoxy(22, 15);
    cout << "Hf";
    gotoxy(22, 17);
    cout << "Rf";
    gotoxy(25, 11);
    cout << "V";
    gotoxy(25, 13);
    cout << "Nb";
    gotoxy(25, 15);
    cout << "Ta";
    gotoxy(25, 17);
    cout << "Ha";
    gotoxy(28, 11);
    cout << "Cr";
    gotoxy(28, 13);
    cout << "Mo";
    gotoxy(28, 15);
    cout << "W";
    gotoxy(28, 17);
    cout << "Un";
    gotoxy(31, 11);
    cout << "Mn";
    gotoxy(31, 13);
    cout << "Tc";
    gotoxy(31, 15);
    cout << "Re";
    gotoxy(31, 17);
    cout << "Ns";
    gotoxy(34, 11);
    cout << "Fe";
    gotoxy(34, 13);
    cout << "Ru";
    gotoxy(34, 15);
    cout << "Os";
    gotoxy(34, 17);
    cout << "Hs";
    gotoxy(37, 11);
    cout << "Co";
    gotoxy(37, 13);
    cout << "Rh";
    gotoxy(37, 15);
    cout << "Ir";
    gotoxy(37, 17);
    cout << "Mt";
    gotoxy(40, 11);
    cout << "Ni";
    gotoxy(40, 13);
    cout << "Pd";
    gotoxy(40, 15);
    cout << "Pt";
    gotoxy(40, 17);
    cout << "Uu";
    gotoxy(43, 11);
    cout << "Cu";
    gotoxy(43, 13);
    cout << "Ag";
    gotoxy(43, 15);
    cout << "Au";
    gotoxy(46, 11);
    cout << "Zn";
    gotoxy(46, 13);
    cout << "Cd";
    gotoxy(46, 15);
    cout << "Hg";
    gotoxy(49, 7);
    cout << "B";
    gotoxy(49, 9);
    cout << "Al";
    gotoxy(49, 11);
    cout << "Ga";
    gotoxy(49, 13);
    cout << "In";
    gotoxy(49, 15);
    cout << "Tl";
    gotoxy(52, 7);
    cout << "C";
    gotoxy(52, 9);
    cout << "Si";
    gotoxy(52, 11);
    cout << "Ge";
    gotoxy(52, 13);
    cout << "Sn";
    gotoxy(52, 15);
    cout << "Pb";
    gotoxy(55, 7);
    cout << "N";
    gotoxy(55, 9);
    cout << "P";
    gotoxy(55, 11);
    cout << "As";
    gotoxy(55, 13);
    cout << "Sb";
    gotoxy(55, 15);
    cout << "Bi";
    gotoxy(58, 7);
    cout << "O";
    gotoxy(58, 9);
    cout << "S";
    gotoxy(58, 11);
    cout << "Se";
    gotoxy(58, 13);
    cout << "Te";
    gotoxy(58, 15);
    cout << "Po";
    gotoxy(61, 7);
    cout << "F";
    gotoxy(61, 9);
    cout << "Cl";
    gotoxy(61, 11);
    cout << "Br";
    gotoxy(61, 13);
    cout << "I";
    gotoxy(61, 15);
    cout << "At";
    gotoxy(64, 5);
    cout << "He";
    gotoxy(64, 7);
    cout << "Ne";
    gotoxy(64, 9);
    cout << "Ar";
    gotoxy(64, 11);
    cout << "Kr";
    gotoxy(64, 13);
    cout << "Xe";
    gotoxy(64, 15);
    cout << "Rn";
    gotoxy(13, 21);
    cout << "Lanthanides";
    gotoxy(25, 21);
    cout << "Ce";
    gotoxy(28, 21);
    cout << "Pr";
    gotoxy(31, 21);
    cout << "Nd";
    gotoxy(34, 21);
    cout << "Pm";
    gotoxy(37, 21);
    cout << "Sm";
    gotoxy(40, 21);
    cout << "Eu";
    gotoxy(43, 21);
    cout << "Gd";
    gotoxy(46, 21);
    cout << "Tb";
    gotoxy(49, 21);
    cout << "Dy";
    gotoxy(52, 21);
    cout << "Ho";
    gotoxy(55, 21);
    cout << "Er";
    gotoxy(58, 21);
    cout << "Tm";
    gotoxy(61, 21);
    cout << "Yb";
    gotoxy(64, 21);
    cout << "Lu";
    gotoxy(13, 23);
    cout << "Actinides";
    gotoxy(25, 23);
    cout << "Th";
    gotoxy(28, 23);
    cout << "Pa";
    gotoxy(31, 23);
    cout << "U";
    gotoxy(34, 23);
    cout << "Np";
    gotoxy(37, 23);
    cout << "Pu";
    gotoxy(40, 23);
    cout << "Am";
    gotoxy(43, 23);
    cout << "Cm";
    gotoxy(46, 23);
    cout << "Bk";
    gotoxy(49, 23);
    cout << "Cf";
    gotoxy(52, 23);
    cout << "Ea";
    gotoxy(55, 23);
    cout << "Fm";
    gotoxy(58, 23);
    cout << "Md";
    gotoxy(61, 23);
    cout << "No";
    gotoxy(64, 23);
    cout << "Lr";
    gotoxy(2, 2);
    i = 2;
    j = 2;
    gotoxy(i, j);
    do
    {
        g = getch();
        if (g == 80)
        {
            if (j == 23)
                j = 1;
            gotoxy(i, ++j);
        }
        else if (g == 77)
        {
            if (i == 79)
                i = 1;
            gotoxy(++i, j);
        }
        else if (g == 75)
        {
            if (i == 2)
                i = 80;
            gotoxy(--i, j);
        }
        else if (g == 72)
        {
            if (j == 2)
                j = 24;
            gotoxy(i, --j);
        }
        if (g == 13)
            element(i, j);
    } while (g != 27);
}
void main()
{
    clrscr();
    welcome_screen();
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "h:\tc\bin");
    errorcode = graphresult();
    if (errorcode != grOk)
    {
        cout <
