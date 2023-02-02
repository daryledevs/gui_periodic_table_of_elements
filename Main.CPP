#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include "Intro.h"
#include "Visual.h"

void
frame() {
  rectangle(86, 116, 559, 296);
  rectangle(90, 120, 554, 292);
}

int main() {
  clrscr();

  display();

  gotoxy(27, 21); {
    system("PAUSE");
  }
  int gd = DETECT, gm;
  gd = VGA;
  gm = VGAHI;
  initgraph( & gd, & gm, "C:\\Turboc3\\BGI");

  char again = 'y';

  do {
    int number = 0;

    cleardevice();

    visual();

    gotoxy(1, 20);
    cout << "Enter the atomic number of the element(s):";
    scanf("%d", & number);

    switch (number) {
      // 1st line
    case 1:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 1";
      gotoxy(13, 10);
      cout << "symbol : H";
      gotoxy(13, 11);
      cout << "Element Name : Hydrogen";
      gotoxy(13, 12);
      cout << "Atomic Weight : (1.0078;1.0082)";
      gotoxy(13, 13);
      cout << "Melting point : 13.81 K (-259.34 D.C or -434.81 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 20.28 K (-252.87 D.C or -423.17 D.F)";
      gotoxy(13, 15);
      cout << "Density : 0.089 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 21";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);

      cout << "Element Classification: Non- metal";
      break;

    case 3:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 3";
      gotoxy(13, 10);
      cout << "symbol : Li";
      gotoxy(13, 11);
      cout << "Element Name : Lithium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 6.938;6.9967";
      gotoxy(13, 13);
      cout << "Melting point : 453.65 K (180.50 D.C or 356.90 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1615 K (1342 D.C or 2448 D.F)";
      gotoxy(13, 15);
      cout << "Density : 0.534 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.0";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 11:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 11";
      gotoxy(13, 10);
      cout << "symbol : Na";
      gotoxy(13, 11);
      cout << "Element Name : Sodium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 22.990";
      gotoxy(13, 13);
      cout << "Melting point : 370.95 K (97.80 D.C or 208.04 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1156 K (883 D.C or 1621 D.F)";
      gotoxy(13, 15);
      cout << "Density : 0.972 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 19:
      cleardevice();
      frame();

      gotoxy(13, 9);
      cout << "Atomic Number : 19";
      gotoxy(13, 10);
      cout << "s3mbol : K";
      gotoxy(13, 11);
      cout << "Element Name : Potassium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 39.098";
      gotoxy(13, 13);
      cout << "Melting point : 336.53 K (63.38 D.C or 146.08 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1032 K (759 D.C or 1398 D.F)";
      gotoxy(13, 15);
      cout << "Density : 0.87 g/cm^3";
      gotoxy(13, 16);
      cout << "Electrocnegativity : 0.8";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 37:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 37";
      gotoxy(13, 10);

      cout << "symbol : Rb";
      gotoxy(13, 11);
      cout << "Element Name : Rubidium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 85.468";
      gotoxy(13, 13);
      cout << "Melting point : 312.46 K (39.31 D.C or 102.76 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 961 K (688 D.C or 1270 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.53 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.8";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 55:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 55";
      gotoxy(13, 10);
      cout << "symbol Cs: ";
      gotoxy(13, 11);
      cout << "Element Name : Cesium";

      gotoxy(13, 12);
      cout << "Atomic Weight : 132.91";
      gotoxy(13, 13);
      cout << "Melting point : 301.59 K (28.44 D.C or 83.19 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 944 K (671 D.C or 1240 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.87 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.7";
      gotoxy(13, 17);
      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 87:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 87";
      gotoxy(13, 10);
      cout << "symbol : Fr";
      gotoxy(13, 11);
      cout << "Element Name : Francium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 223";
      gotoxy(13, 13);

      cout << "Melting point : 300 K (27 D.C or 81 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 300 K (677 D.C or 1,250 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.0 g/cm3";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.7";
      gotoxy(13, 17);
      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 2nd line
    case 4:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 4";
      gotoxy(13, 10);
      cout << "symbol : Be";
      gotoxy(13, 11);
      cout << "Element Name : Beryllium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 9.0122";
      gotoxy(13, 13);
      cout << "Melting point : 1560 K (1287 D.C or 2349 D.F)";

      gotoxy(13, 14);
      cout << "Boiling Point : 2744 K (2471 D.C or 4480 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.85 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 12:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 12";
      gotoxy(13, 10);
      cout << "symbol : Mg";
      gotoxy(13, 11);
      cout << "Element Name : Magnesium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 24.304;24.307";
      gotoxy(13, 13);
      cout << "Melting point : 923 K (650 D.C or 1202 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1363 K (1090 D.C or 1994 D.F)";

      gotoxy(13, 15);
      cout << "Density : g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.2";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification: Metal";
      break;
    case 20:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 20";
      gotoxy(13, 10);
      cout << "symbol : Ca";
      gotoxy(13, 11);
      cout << "Element Name : Calcium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 40.078";
      gotoxy(13, 13);
      cout << "Melting point : 1115 K (842 D.C or 1548 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1757 K (1484 D.C or 2703 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.55 g/cm^3";
      gotoxy(13, 16);

      cout << "Electronegativity : 1.0";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 38:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 38";
      gotoxy(13, 10);
      cout << "symbol : Sr";
      gotoxy(13, 11);
      cout << "Element Name : Stronfium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 87.62";
      gotoxy(13, 13);
      cout << "Melting point : 1050 K (777 D.C or 1431 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1655 K (1382 D.C or 2520 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2.64 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.0";
      gotoxy(13, 17);
      cout << "Legend : Solid";

      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 56:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 56";
      gotoxy(13, 10);
      cout << "symbol : Ba";
      gotoxy(13, 11);
      cout << "Element Name : Barium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 137.33";
      gotoxy(13, 13);
      cout << "Melting point : 1000 K (727 D.C or 1341 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2170 K (1897 D.C or 3447 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.5 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 88:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 88";
      gotoxy(13, 10);
      cout << "symbol : Ra";
      gotoxy(13, 11);
      cout << "Element Name : Radium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 226";
      gotoxy(13, 13);
      cout << "Melting point : 973 K (700 D.C or 1292 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1413 K (1140 D.C or 2084 D.F)";
      gotoxy(13, 15);
      cout << "Density : 5";
      gotoxy(13, 16);
      cout << "Electronegativity : 0.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 3rd line
    case 21:
      cleardevice();

      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 21";
      gotoxy(13, 10);
      cout << "symbol : Sc";
      gotoxy(13, 11);
      cout << "Element Name : Scandium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 44.956";
      gotoxy(13, 13);
      cout << "Melting point : 1814 K (1541 D.C or 2806 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3109 K (2836 D.C or 5137 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2.98 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 39:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 39";

      gotoxy(13, 10);
      cout << "symbol : Y";
      gotoxy(13, 11);
      cout << "Element Name : Ythrium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 88.906";
      gotoxy(13, 13);
      cout << "Melting point : 1795 K (1522 D.C or 2772 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3618 K (3345 D.C or 6053 D.F)";
      gotoxy(13, 15);
      cout << "Density : 4.457 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 4th line
    case 22:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 22";
      gotoxy(13, 10);
      cout << "symbol : Ti";

      gotoxy(13, 11);
      cout << "Element Name : Titanium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 47.867";
      gotoxy(13, 13);
      cout << "Melting point : 1941 K (1668 D.C or 3034 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3560 K (3287 D.C or 5949 D.F)";
      gotoxy(13, 15);
      cout << "Density : 4.51 g/cm^3";
      gotoxy(13, 16);
      cout << "Electrocngativity : 1.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 40:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 40";
      gotoxy(13, 10);
      cout << "symbol : Zr";
      gotoxy(13, 11);
      cout << "Element Name : Zirconium";
      gotoxy(13, 12);

      cout << "Atomic Weight : 91.224";
      gotoxy(13, 13);
      cout << "Melting point : 2128 K (1855 D.C or 3371 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4682 K (4409 D.C or 7968 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.44 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.4";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 72:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 72";
      gotoxy(13, 10);
      cout << "symbol : Hf";
      gotoxy(13, 11);
      cout << "Element Name : Hafnium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 178.49";
      gotoxy(13, 13);

      cout << "Melting point : 2506 K (2233 D.C or 4051 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4876 K (4603 D.C or 8317 D.F)";
      gotoxy(13, 15);
      cout << "Density : 13.1 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 104:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 104";
      gotoxy(13, 10);
      cout << "symbol : Rf";
      gotoxy(13, 11);
      cout << "Element Name : Rutherfordium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 265";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";

      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 5th line
    case 23:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 23";
      gotoxy(13, 10);
      cout << "symbol : V";
      gotoxy(13, 11);
      cout << "Element Name : Vanadium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 50.942";
      gotoxy(13, 13);
      cout << "Melting point : 2183 K (1910 D.C or 3470 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3680 K (3407 D.C or 6165 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.10 g/cm^3";

      gotoxy(13, 16);
      cout << "Electronegativity : 1.6";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 41:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 41";
      gotoxy(13, 10);
      cout << "symbol : Nb";
      gotoxy(13, 11);
      cout << "Element Name : Niobium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 92.906";
      gotoxy(13, 13);
      cout << "Melting point : 2750 K (2477 D.C or 4491 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 5017 K (4744 D.C or 8571 D.F)";
      gotoxy(13, 15);
      cout << "Density : 8.66 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.6";
      gotoxy(13, 17);

      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 73:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 73";
      gotoxy(13, 10);
      cout << "symbol : Ta";
      gotoxy(13, 11);
      cout << "Element Name : Tantalum";
      gotoxy(13, 12);
      cout << "Atomic Weight : 180.95";
      gotoxy(13, 13);
      cout << "Melting point : 3290 K (3017 D.C or 5463 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 5731 K (5458 D.C or 9856 D.F)";
      gotoxy(13, 15);
      cout << "Density : 16.63 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.5";

      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 105:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 105";
      gotoxy(13, 10);
      cout << "symbol : Db";
      gotoxy(13, 11);
      cout << "Element Name : Dubnium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 268";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";

      break;
      // 6th line
    case 24:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 24";
      gotoxy(13, 10);
      cout << "symbol : Cr";
      gotoxy(13, 11);
      cout << "Element Name : Chromium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 51.996";
      gotoxy(13, 13);
      cout << "Melting point : 2180 K (1907 D.C or 3465 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2944 K (2671 D.C or 4840 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.14 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.6";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 42:

      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 42";
      gotoxy(13, 10);
      cout << "symbol : Mo";
      gotoxy(13, 11);
      cout << "Element Name : Molybdenum";
      gotoxy(13, 12);
      cout << "Atomic Weight : 95.95";
      gotoxy(13, 13);
      cout << "Melting point : 2896 K (2623 D.C or 4753 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4912 K (4639 D.C or 8382 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.01";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.8";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 74:
      cleardevice();
      frame();
      gotoxy(13, 9);

      cout << "Atomic Number : 74";
      gotoxy(13, 10);
      cout << "symbol : W";
      gotoxy(13, 11);
      cout << "Element Name : Tungsten";
      gotoxy(13, 12);
      cout << "Atomic Weight : 183.84";
      gotoxy(13, 13);
      cout << "Melting point : 3695 K (3422 D.C or 6192 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 5828 K (5555 D.C or 10031 D.F)";
      gotoxy(13, 15);
      cout << "Density : 19.3 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.7";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 106:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 106";
      gotoxy(13, 10);
      cout << "symbol : Sg";

      gotoxy(13, 11);
      cout << "Element Name : Seaborgium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 271";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electrcnegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 7th line
    case 25:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 25";
      gotoxy(13, 10);
      cout << "symbol : Mn";
      gotoxy(13, 11);
      cout << "Element Name : Manganese";
      gotoxy(13, 12);

      cout << "Atomic Weight : 54.938";
      gotoxy(13, 13);
      cout << "Melting point : 1519 K (1246 D.C or 2275 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2334 K (2061 D.C or 3742 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 43:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 43";
      gotoxy(13, 10);
      cout << "symbol : Tc";
      gotoxy(13, 11);
      cout << "Element Name : Technetium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 98";
      gotoxy(13, 13);

      cout << "Melting point : 2430 K (2157 D.C or 3915 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4538 K (4265 D.C or 7709 D.F)";
      gotoxy(13, 15);
      cout << "Density : 11 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 75:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 75";
      gotoxy(13, 10);
      cout << "symbol : Re";
      gotoxy(13, 11);
      cout << "Element Name : Rhenium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 186.21";
      gotoxy(13, 13);
      cout << "Melting point : 3459 K (3186 D.C or 5767 D.F)";
      gotoxy(13, 14);

      cout << "Boiling Point : 5869 K (5596 D.C or 10105 D.F)";
      gotoxy(13, 15);
      cout << "Density : 21.04 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 107:
      cleardevice();
      frame();
      gotoxy(1, 9);
      cout << "Atomic Number : 107";
      gotoxy(13, 10);
      cout << "symbol : Bh";
      gotoxy(13, 11);
      cout << "Element Name : Bohrium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 272";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);

      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 8th line
    case 26:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 23";
      gotoxy(13, 10);
      cout << "symbol : Fe";
      gotoxy(13, 11);
      cout << "Element Name : Iron";
      gotoxy(13, 12);
      cout << "Atomic Weight : 55.845";
      gotoxy(13, 13);
      cout << "Melting point : 1811 K (1538 D.C or 2800 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3134 K (2831 D.C or 5182 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.87 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.8";
      gotoxy(13, 17);

      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 44:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 44";
      gotoxy(13, 10);
      cout << "symbol : Ru";
      gotoxy(13, 11);
      cout << "Element Name : Ruthenium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 107.07";
      gotoxy(13, 13);
      cout << "Melting point : 2307 K (2334 D.C or 4233 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4423 K (4150 D.C or 7502 D.F)";
      gotoxy(13, 15);
      cout << "Density : 12.2";

      gotoxy(13, 16);
      cout << "Electronegativity : 2.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 76:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 73";
      gotoxy(13, 10);
      cout << "symbol : Os";
      gotoxy(13, 11);
      cout << "Element Name : Osmium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 190.23 ";
      gotoxy(13, 13);
      cout << "Melting point : 3306 K (3033 D.C or 5491 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 5285 K (5012 D.C or 9054 D.F)";
      gotoxy(13, 15);
      cout << "Density : 22.59 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.2";
      gotoxy(13, 17);

      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 108:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 108";
      gotoxy(13, 10);
      cout << "symbol : Hs";
      gotoxy(13, 11);
      cout << "Element Name : Hassium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 277";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

      // 9th line
    case 27:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 27";
      gotoxy(13, 10);
      cout << "symbol : Co";
      gotoxy(13, 11);
      cout << "Element Name : Cobalt";
      gotoxy(13, 12);
      cout << "Atomic Weight : 58.933";
      gotoxy(13, 13);
      cout << "Melting point : 1768 K (1495 D.C or 2723 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3200 K (2927 D.C or 5301 D.F)";
      gotoxy(13, 15);
      cout << "Density : 8.86 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.88";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 45:
      cleardevice();

      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 45";
      gotoxy(13, 10);
      cout << "symbol : Rh";
      gotoxy(13, 11);
      cout << "Element Name : Rhodium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 102.90";
      gotoxy(13, 13);
      cout << "Melting point : 2237 K (1964 D.C or 3567 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3968 K (3695 D.C or 6683 D.F)";
      gotoxy(13, 15);
      cout << "Density : 12.41 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.28";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 77:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 77";

      gotoxy(13, 10);
      cout << "symbol : Ir";
      gotoxy(13, 11);
      cout << "Element Name : Iridium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 192.217";
      gotoxy(13, 13);
      cout << "Melting point : 2719 K (2446 D.C or 4435 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4701 K (4428 D.C or 8002 D.F)";
      gotoxy(13, 15);
      cout << "Density : 22.56 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.2";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 109:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 109";
      gotoxy(13, 10);
      cout << "symbol : Mt";
      gotoxy(13, 11);

      cout << "Element Name : Meitnerium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 268";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 10th line
    case 28:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 28";
      gotoxy(13, 10);
      cout << "symbol : Ni";
      gotoxy(13, 11);
      cout << "Element Name : Nickel";
      gotoxy(13, 12);
      cout << "Atomic Weight : 58.69";

      gotoxy(13, 13);
      cout << "Melting point : 1728 K (1455 D.C or 2651 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3186 K (2913°C or 5275 D.F.)";
      gotoxy(13, 15);
      cout << "Density : 8.908 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.91";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 46:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 46";
      gotoxy(13, 10);
      cout << "symbol : Pd";
      gotoxy(13, 11);
      cout << "Element Name : Palladium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 106.42 ";
      gotoxy(13, 13);
      cout << "Melting point : 1828.05 K (1554.9 D.C or 2830.8 D.F)";

      gotoxy(13, 14);
      cout << "Boiling Point : 3236 K (2963 D.C or 5365 D.F)";
      gotoxy(13, 15);
      cout << "Density : 11.9 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.2";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 78:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 78";
      gotoxy(13, 10);
      cout << "symbol : Pt";
      gotoxy(13, 11);
      cout << "Element Name : Platinum";
      gotoxy(13, 12);
      cout << "Atomic Weight : 195.084";
      gotoxy(13, 13);
      cout << "Melting point : 2041.55 K (1768.4 D.C or 3215.1 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4098 K (3825 D.C or 6917 D.F)";

      gotoxy(13, 15);
      cout << "Density : 21.45 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.28";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 110:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 110";
      gotoxy(13, 10);
      cout << "symbol : Ds";
      gotoxy(13, 11);
      cout << "Element Name : Darmstadtium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 281 ";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";

      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 11th line
    case 29:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 29";
      gotoxy(13, 10);
      cout << "symbol : Cu";
      gotoxy(13, 11);
      cout << "Element Name : Copper";
      gotoxy(13, 12);
      cout << "Atomic Weight : 1357.77 K (1084.62 D.C or 1984.32 D.F)";
      gotoxy(13, 13);
      cout << "Melting point : 2835 K (2562 D.C or 4644 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2,562";
      gotoxy(13, 15);
      cout << "Density : 8.92 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.9";
      gotoxy(13, 17);
      cout << "Legend : Solid";

      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 47:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 47";
      gotoxy(13, 10);
      cout << "symbol : Ag";
      gotoxy(13, 11);
      cout << "Element Name : Silver";
      gotoxy(13, 12);
      cout << "Atomic Weight : 107.86";
      gotoxy(13, 13);
      cout << "Melting point : 961.8";
      gotoxy(13, 14);
      cout << "Boiling Point : 2,162 ";
      gotoxy(13, 15);
      cout << "Density : 10.5";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.93";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 79:

      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 79";
      gotoxy(1, 10);
      cout << "symbol : Au";
      gotoxy(13, 11);
      cout << "Element Name : Gold";
      gotoxy(13, 12);
      cout << "Atomic Weight : 196.96";
      gotoxy(13, 13);
      cout << "Melting point : 1,064";
      gotoxy(13, 14);
      cout << "Boiling Point : 2,700";
      gotoxy(13, 15);
      cout << "Density : 19.32";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.54";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 111:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 111";

      gotoxy(13, 10);
      cout << "symbol : Rg";
      gotoxy(13, 11);
      cout << "Element Name : Roentgenium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 272";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 12th line
    case 30:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 30";
      gotoxy(13, 10);
      cout << "symbol : Zn";
      gotoxy(13, 11);

      cout << "Element Name : Zinc";
      gotoxy(13, 12);
      cout << "Atomic Weight : 65.38";
      gotoxy(13, 13);
      cout << "Melting point : 692.68 K (419.53 D.C or 787.15 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1180 K (907 D.C or 1665 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.140 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.65";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 48:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 48";

      gotoxy(13, 10);
      cout << "symbol : Cd";
      gotoxy(13, 11);
      cout << "Element Name : Cadmium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 112.411";
      gotoxy(13, 13);
      cout << "Melting point : 594.22 K (321.07 D.C or 609.93 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1040 K (767 D.C or 1413 D.F)";
      gotoxy(13, 15);
      cout << "Density : 8.65 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.69";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 80:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 80";
      gotoxy(13, 10);
      cout << "symbol : Hg";
      gotoxy(13, 11);

      cout << "Element Name : Mercury";
      gotoxy(13, 12);
      cout << "Atomic Weight : 200.59";
      gotoxy(13, 13);
      cout << "Melting point : 234.32 K (-38.83 D.C or -37.89 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 629.88 K (356.73 D.C or 674.11 D.F)";
      gotoxy(13, 15);
      cout << "Density : 13.56 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2";
      gotoxy(13, 17);
      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 112:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 112";
      gotoxy(13, 10);
      cout << "symbol : Cn";
      gotoxy(13, 11);
      cout << "Element Name : Copernicium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 285";

      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 13th line
    case 5:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 5";
      gotoxy(13, 10);
      cout << "symbol : B";
      gotoxy(13, 11);
      cout << "Element Name : Boron";
      gotoxy(13, 12);
      cout << "Atomic Weight : 10.811";
      gotoxy(13, 13);
      cout << "Melting point : 2348 K (2075 D.C or 3767 D.F)";
      gotoxy(13, 14);

      cout << "Boiling Point : 4273 K (4000 D.C or 7232 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2.37 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.0";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 13:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 13";
      gotoxy(13, 10);
      cout << "symbol : Al";
      gotoxy(13, 11);
      cout << "Element Name : Aluminium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 26.98";
      gotoxy(13, 13);
      cout << "Melting point : 2348 K (2075 D.C or 3767 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4273 K (4000 D.C or 7232 D.F)";
      gotoxy(13, 15);

      cout << "Density : 2,700 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.61";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 31:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 31";
      gotoxy(13, 10);
      cout << "symbol : Ga";
      gotoxy(13, 11);
      cout << "Element Name : Gallium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 69.723";
      gotoxy(13, 13);
      cout << "Melting point : 302.91 K (29.76 D.C or 85.57 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2477 K (2204 D.C or 3999 D.F)";
      gotoxy(13, 15);
      cout << "Density : 5.91 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.81";

      gotoxy(13, 17);
      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 49:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 49";
      gotoxy(13, 10);
      cout << "symbol : In";
      gotoxy(13, 11);
      cout << "Element Name : Indium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 114.818";
      gotoxy(13, 13);
      cout << "Melting point : 429.75 K (156.60 D.C or 313.88 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2345 K (2072 D.C or 3762 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.31 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.78";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);

      cout << "Element Classification : Metal";
      break;
    case 81:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 81";
      gotoxy(13, 10);
      cout << "symbol : Ti";
      gotoxy(13, 11);
      cout << "Element Name : Thalium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 204.38";
      gotoxy(13, 13);
      cout << "Melting point : 577 K (304 D.C or 579 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1746 K (1473 D.C or 2683 D.F)";
      gotoxy(13, 15);
      cout << "Density : 11.85 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.62";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 113:

      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 113";
      gotoxy(13, 10);
      cout << "symbol : Nh";
      gotoxy(13, 11);
      cout << "Element Name : Nihonium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 286";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 14th line
    case 6:
      cleardevice();
      frame();
      gotoxy(13, 9);

      cout << "Atomic Number : 6";
      gotoxy(13, 10);
      cout << "symbol : C";
      gotoxy(13, 11);
      cout << "Element Name : Carbon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 12.0107";
      gotoxy(13, 13);
      cout << "Melting point : 3823 K (3550 D.C or 6422 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4098 K (3825 D.C or 6917 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2,250";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.55";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 14:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 14";
      gotoxy(13, 10);

      cout << "symbol : Si";
      gotoxy(13, 11);
      cout << "Element Name : Silicon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 28.0855";
      gotoxy(13, 13);
      cout << "Melting point : 1687 K (1414 D.C or 2577 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3538 K (3265 D.C or 5909 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2.24 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.8";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 32:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 32";
      gotoxy(13, 10);
      cout << "symbol : Ge";
      gotoxy(13, 11);

      cout << "Element Name : Germanium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 72.64 ";
      gotoxy(13, 13);
      cout << "Melting point : 1211.40 K (938.25 D.C or 1720.85 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3106 K (2833 D.C or 5131 D.F)";
      gotoxy(13, 15);
      cout << "Density : 5.323 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.01";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 50:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 50";
      gotoxy(13, 10);
      cout << "symbol : Sn";
      gotoxy(13, 11);
      cout << "Element Name : Tin";
      gotoxy(13, 12);

      cout << "Atomic Weight : 118.71";
      gotoxy(13, 13);
      cout << "Melting point : 505.08 K (231.93 D.C or 449.47 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2875 K (2602 D.C or 4715 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.31 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.96";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 82:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 82";
      gotoxy(13, 10);
      cout << "symbol : Pb";
      gotoxy(13, 11);
      cout << "Element Name : Lead";
      gotoxy(13, 12);
      cout << "Atomic Weight : 207.2";
      gotoxy(13, 13);

      cout << "Melting point : 600.61 K (327.46 D.C or 621.43 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2022 K (1749 D.C or 3180 D.F)";
      gotoxy(13, 15);
      cout << "Density : 11.34 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.33";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 114:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 114";
      gotoxy(13, 10);
      cout << "symbol : Fl";
      gotoxy(13, 11);
      cout << "Element Name : Flerovium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 289";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";

      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 15th line
    case 7:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 7";
      gotoxy(13, 10);
      cout << "symbol : N";
      gotoxy(13, 11);
      cout << "Element Name : Nitrogen";
      gotoxy(13, 12);
      cout << "Atomic Weight : 14.0067";
      gotoxy(13, 13);
      cout << "Melting point : 63.15 K (-210.00 D.C or -346.00 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 77.36 K (-195.79 D.C or -320.44 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.251 g/cm^3";

      gotoxy(13, 16);
      cout << "Electronegativity : 3.04";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 15:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 15";
      gotoxy(13, 10);
      cout << "symbol : P";
      gotoxy(13, 11);
      cout << "Element Name : Phosphorus";
      gotoxy(13, 12);
      cout << "Atomic Weight : 30.973762 ";
      gotoxy(13, 13);
      cout << "Melting point : 317.30 K (44.15 D.C or 111.47 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 553.65 K (280.5 D.C or 536.9 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.82 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : ";

      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 33:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 33";
      gotoxy(13, 10);
      cout << "symbol : As";
      gotoxy(13, 11);
      cout << "Element Name : Arsenic";
      gotoxy(13, 12);
      cout << "Atomic Weight : 74.9216 ";
      gotoxy(13, 13);
      cout << "Melting point : 1090 K (817 D.C or 1503 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 887 K (614 D.C or 1137 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.97 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.18";
      gotoxy(13, 17);
      cout << "Legend : Solid";

      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 51:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 51";
      gotoxy(13, 10);
      cout << "symbol : Sb";
      gotoxy(13, 11);
      cout << "Element Name : Antimony";
      gotoxy(13, 12);
      cout << "Atomic Weight : 121.76";
      gotoxy(13, 13);
      cout << "Melting point : 903.78 K (630.63 D.C or 1167.13 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1860 K (1587 D.C or 2889 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.684 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.05";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";

      break;

    case 83:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 83";
      gotoxy(13, 10);
      cout << "symbol : Bi";
      gotoxy(13, 11);
      cout << "Element Name : Bismuth ";
      gotoxy(13, 12);
      cout << "Atomic Weight : 208.9804";
      gotoxy(13, 13);
      cout << "Melting point : 544.55 K (271.40 D.C or 520.52 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1837 K (1564 D.C or 2847 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.78 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.02";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 115:

      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 115";
      gotoxy(13, 10);
      cout << "symbol : Mc";
      gotoxy(13, 11);
      cout << "Element Name : Moscovium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 288 ";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 16th line
    case 8:
      cleardevice();
      frame();
      gotoxy(13, 9);

      cout << "Atomic Number : 8";
      gotoxy(13, 10);
      cout << "symbol : O";
      gotoxy(13, 11);
      cout << "Element Name : Oxygen";
      gotoxy(13, 12);
      cout << "Atomic Weight : 15.999";
      gotoxy(13, 13);
      cout << "Melting point : 54.36 K (-218.79 D.C or -361.82 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 90.20 K (-182.95 D.C or -297.31 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.429 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 3.44";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 16:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 16";
      gotoxy(13, 10);

      cout << "symbol : S";
      gotoxy(13, 11);
      cout << "Element Name : Sulfur";
      gotoxy(13, 12);
      cout << "Atomic Weight : 32.065";
      gotoxy(13, 13);
      cout << "Melting point : 388.36 K (115.21 D.C or 239.38 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 717.75 K (444.60 D.C or 832.28 D.F)";
      gotoxy(13, 15);
      cout << "Density : 2 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.58";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 34:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 34";
      gotoxy(13, 10);
      cout << "symbol : Se";
      gotoxy(13, 11);

      cout << "Element Name : Selenium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 78.96";
      gotoxy(13, 13);
      cout << "Melting point : 493.65 K (220.5 D.C or 428.9 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 958 K (685 D.C or 1265 D.F)";
      gotoxy(13, 15);
      cout << "Density : 4.819 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.55";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 52:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 52";
      gotoxy(13, 10);
      cout << "symbol : Te";
      gotoxy(13, 11);
      cout << "Element Name : Tellurium";
      gotoxy(13, 12);

      cout << "Atomic Weight : 127.6";
      gotoxy(13, 13);
      cout << "Melting point : 722.66 K (449.51 D.C or 841.12 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1261 K (988 D.C or 1810 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.24 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.1";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Semi- metal";
      break;

    case 84:
      cleardevice();
      frame();
      gotoxy(16, 9);
      cout << "Atomic Number : 84";
      gotoxy(13, 10);
      cout << "symbol : Po";
      gotoxy(13, 11);
      cout << "Element Name : Polonium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 209";
      gotoxy(13, 13);

      cout << "Melting point : 527 K (254 D.C or 489 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1235 K (962 D.C or 1764 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.4 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 116:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 116";
      gotoxy(13, 10);
      cout << "symbol : Lv";
      gotoxy(13, 11);
      cout << "Element Name : Livermorium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 292";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);

      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // 17th line
    case 9:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 9";
      gotoxy(13, 10);
      cout << "symbol : F";
      gotoxy(13, 11);
      cout << "Element Name : Fluorine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 18.998";
      gotoxy(13, 13);
      cout << "Melting point : 53.53 K (-219.62 D.C or -363.32 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 85.03 K (-188.12 D.C or -306.62 D.F)";
      gotoxy(13, 15);

      cout << "Density : 1.696 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 4.0";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 17:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 17";
      gotoxy(13, 10);
      cout << "symbol : Cl";
      gotoxy(13, 11);
      cout << "Element Name : Chlorine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 35.4527";
      gotoxy(13, 13);
      cout << "Melting point : 171.65 K (-101.5 D.C or -150.7 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 239.11 K (-34.04 D.C or -29.27 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.214 g/cm^3";
      gotoxy(13, 16);

      cout << "Electronegativity : 3.0";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 35:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 35";
      gotoxy(13, 10);
      cout << "symbol : Br";
      gotoxy(13, 11);
      cout << "Element Name : Bromine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 79.904";
      gotoxy(13, 13);
      cout << "Melting point : 265.95 K (-7.2 D.C or 19.0 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 331.95 K (58.8 D.C or 137.8 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.11 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.8";
      gotoxy(13, 17);

      cout << "Legend : Liquid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 53:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 53";
      gotoxy(13, 10);
      cout << "symbol : I";
      gotoxy(13, 11);
      cout << "Element Name : Iodine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 126.9044";
      gotoxy(13, 13);
      cout << "Melting point : 386.85 K (113.7 D.C or 236.7 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 457.55 K (184.4 D.C or 364.0 D.F)";
      gotoxy(13, 15);
      cout << "Density : 4.93 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);

      cout << "Element Classification : Non- metal";
      break;

    case 85:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 85";
      gotoxy(13, 10);
      cout << "symbol : At";
      gotoxy(13, 11);
      cout << "Element Name : Astatine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 210";
      gotoxy(13, 13);
      cout << "Melting point : 575 K (302 D.C or 576 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 610 K (337 D.C OR 638 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 2.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 117:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 117";
      gotoxy(13, 10);
      cout << "symbol : Ts";
      gotoxy(13, 11);
      cout << "Element Name : Tennessine";
      gotoxy(13, 12);
      cout << "Atomic Weight : 294";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;
      // 18th line
    case 2:
      cleardevice();
      frame();

      gotoxy(13, 9);
      cout << "Atomic Number : 2";
      gotoxy(13, 10);
      cout << "symbol : He";
      gotoxy(13, 11);
      cout << "Element Name : Helium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 4.0026";
      gotoxy(13, 13);
      cout << "Melting point : 0.95 K (-272.2 D.C or -458.0 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 4.22 K (-268.93 D.C or -452.07 D.F)";
      gotoxy(13, 15);
      cout << "Density : 0.124 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 10:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 10";

      gotoxy(13, 10);
      cout << "symbol : Ne";
      gotoxy(13, 11);
      cout << "Element Name : Neon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 20.180";
      gotoxy(13, 13);
      cout << "Melting point : 24.56 K (-248.59 D.C or -415.46 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 27.07 K (-246.08 D.C or -410.94 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.204 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 18:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 18";
      gotoxy(13, 10);
      cout << "symbol : Ar";

      gotoxy(13, 11);
      cout << "Element Name : Argon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 39.948";
      gotoxy(13, 13);
      cout << "Melting point : 83.80 K (-189.35 D.C or -308.83 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 87.30 K (-185.85 D.C or -302.53 D.F)";
      gotoxy(13, 15);
      cout << "Density : 1.65 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 36:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 36";
      gotoxy(13, 10);
      cout << "symbol : Kr";
      gotoxy(13, 11);
      cout << "Element Name : Krypton";

      gotoxy(13, 12);
      cout << "Atomic Weight : 83.798";
      gotoxy(13, 13);
      cout << "Melting point : 115.79 K (-157.36 D.C or -251.25 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 119.93 K (-153.22 D.C or -243.80 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.4 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 54:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 54";
      gotoxy(13, 10);
      cout << "symbol : Xe";
      gotoxy(13, 11);
      cout << "Element Name : Xenon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 131.29";

      gotoxy(13, 13);
      cout << "Melting point : 161.36 K (-111.79 D.C or -169.22 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 165.03 K (-108.12 D.C or -162.62 D.F)";
      gotoxy(13, 15);
      cout << "Density : 3.05";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 86:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 86";
      gotoxy(13, 10);
      cout << "symbol : Rn";
      gotoxy(13, 11);
      cout << "Element Name : Radon";
      gotoxy(13, 12);
      cout << "Atomic Weight : 222";
      gotoxy(13, 13);
      cout << "Melting point : 202 K (-71 D.C or-96 D.F)";

      gotoxy(13, 14);
      cout << "Boiling Point : 211.45 K (-61.7 D.C or -79.1 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.72 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;

    case 118:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 118";
      gotoxy(13, 10);
      cout << "symbol : Og";
      gotoxy(13, 11);
      cout << "Element Name : Oganesson";
      gotoxy(13, 12);
      cout << "Atomic Weight : 294";
      gotoxy(13, 13);
      cout << "Melting point : -";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);

      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Gas";
      gotoxy(13, 18);
      cout << "Element Classification : Non- metal";
      break;
      // LANTHANIDES LAYER
    case 57:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 57";
      gotoxy(13, 10);
      cout << "symbol : La";
      gotoxy(13, 11);
      cout << "Element Name : Lanthanum";
      gotoxy(13, 12);
      cout << "Atomic Weight : 138.90547";
      gotoxy(13, 13);
      cout << "Melting point : 1191 K (918 D.C or 1684 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3737 K (3464 D.C or 6267 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.15 g/cm^3";

      gotoxy(13, 16);
      cout << "Electronegativity : 1.1";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 58:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 58";
      gotoxy(13, 10);
      cout << "symbol : Ce";
      gotoxy(13, 11);
      cout << "Element Name : Cerium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 140.116";
      gotoxy(13, 13);
      cout << "Melting point : 1071 K (798 D.C or 1468 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3697 K (3424 D.C or 6195 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.770 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.12";
      gotoxy(13, 17);

      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 59:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 59";
      gotoxy(13, 10);
      cout << "symbol : Pr";
      gotoxy(13, 11);
      cout << "Element Name : Praseodymium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 140.90766";
      gotoxy(13, 13);
      cout << "Melting point : 1204 K (931 D.C or 1708 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3793 K (3520 D.C or 6368 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.77 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.13";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";

      break;

    case 60:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 60";
      gotoxy(13, 10);
      cout << "symbol : Nd";
      gotoxy(13, 11);
      cout << "Element Name : Neodymium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 144.242";
      gotoxy(13, 13);
      cout << "Melting point : 1294 K (1021 D.C or 1870 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3347 K (3074 D.C or 5565 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.01 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.14";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 61:
      cleardevice();

      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 61";
      gotoxy(13, 10);
      cout << "symbol : Pm";
      gotoxy(13, 11);
      cout << "Element Name : Promethium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 145";
      gotoxy(13, 13);
      cout << "Melting point : 1315 K (1042 D.C or 1908 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3273 K (3000 D.C or 5432 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.26 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.13";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 62:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 62";

      gotoxy(13, 10);
      cout << "symbol : Sm";
      gotoxy(13, 11);
      cout << "Element Name : Samarium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 150.36";
      gotoxy(13, 13);
      cout << "Melting point : 1347 K (1074 D.C or 1965 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2067 K (1794 D.C or 3261 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.52 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.17";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 63:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 63";
      gotoxy(13, 10);
      cout << "symbol : Eu";
      gotoxy(13, 11);

      cout << "Element Name : Europium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 151.964";
      gotoxy(13, 13);
      cout << "Melting point : 1095 K (822 D.C or 1512 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1802 K (1529 D.C or 2784 D.F)";
      gotoxy(13, 15);
      cout << "Density : 5.24 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 64:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 64";
      gotoxy(13, 10);
      cout << "symbol : Gd";
      gotoxy(13, 11);
      cout << "Element Name : Gadolinium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 157.25";

      gotoxy(13, 13);
      cout << "Melting point : 1586 K (1313 D.C or 2395 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3546 K (3273 D.C or 5923 D.F)";
      gotoxy(13, 15);
      cout << "Density : 7.90 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.1";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 65:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 65";
      gotoxy(13, 10);
      cout << "symbol : Tb";
      gotoxy(13, 11);
      cout << "Element Name : Terbium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 158.92535";
      gotoxy(13, 13);
      cout << "Melting point : 1629 K (1356 D.C or 2473 D.F)";

      gotoxy(13, 14);
      cout << "Boiling Point : 3503 K (3230 D.C or 5846 D.F)";
      gotoxy(13, 15);
      cout << "Density : 8.23 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.2";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 66:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 66";
      gotoxy(13, 10);
      cout << "symbol : Dy";
      gotoxy(13, 11);
      cout << "Element Name : Dysprosium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 162.500";
      gotoxy(13, 13);
      cout << "Melting point : 1685 K (1412 D.C or 2574 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2840 K (2567 D.C or 4653 D.F)";

      gotoxy(13, 15);
      cout << "Density : 8.55 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.22";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 67:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 67";
      gotoxy(13, 10);
      cout << "symbol : Ho";
      gotoxy(13, 11);
      cout << "Element Name : Holmium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 164.93033";
      gotoxy(13, 13);
      cout << "Melting point : 1747 K (1474 D.C or 2685 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2973 K (2700 D.C or 4892 D.F)";
      gotoxy(13, 15);
      cout << "Density : 8.80 g/cm^3";
      gotoxy(13, 16);

      cout << "Electronegativity : 1.23";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 68:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 68";
      gotoxy(13, 10);
      cout << "symbol : Er";
      gotoxy(13, 11);
      cout << "Element Name : Erbium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 167.259";
      gotoxy(13, 13);
      cout << "Melting point : 1802 K (1529 D.C or 2784 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3141 K (2868 D.C or 5194 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.07 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.24";
      gotoxy(13, 17);
      cout << "Legend : Solid";

      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 69:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 69";
      gotoxy(13, 10);
      cout << "symbol : Tm";
      gotoxy(13, 11);
      cout << "Element Name : Thulium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 168.93422";
      gotoxy(13, 13);
      cout << "Melting point : 1818 K (1545 D.C or 2813 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2223 K (1950 D.C or 3542 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.32 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.25";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 70:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 70";
      gotoxy(13, 10);
      cout << "symbol : Yb";
      gotoxy(13, 11);
      cout << "Element Name : Ytterbium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 173.045";
      gotoxy(13, 13);
      cout << "Melting point : 1092 K (819 D.C or 1506 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 1469 K (1196 D.C or 2185 D.F)";
      gotoxy(13, 15);
      cout << "Density : 6.90 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.1";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 71:
      cleardevice();
      frame();

      gotoxy(13, 9);
      cout << "Atomic Number : 71";
      gotoxy(13, 10);
      cout << "symbol : Lu";
      gotoxy(13, 11);
      cout << "Element Name : Lutetium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 174.9668";
      gotoxy(13, 13);
      cout << "Melting point : 1936 K (1663 D.C or 3025 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3675 K (3402 D.C or 6156 D.F)";
      gotoxy(13, 15);
      cout << "Density : 9.84 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.27";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
      // ACTINIDES LAYER
    case 89:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 89";

      gotoxy(13, 10);
      cout << "symbol : Ac";
      gotoxy(13, 11);
      cout << "Element Name : Actinium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 227";
      gotoxy(13, 13);
      cout << "Melting point : 1324 K (1051 D.C or 1924 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3471 K (3198 D.C or 5788 D.F)";
      gotoxy(13, 15);
      cout << "Density : 10.07 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.1";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 90:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 90";
      gotoxy(13, 10);
      cout << "symbol : Th";
      gotoxy(13, 11);

      cout << "Element Name : Thorium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 232.0377";
      gotoxy(13, 13);
      cout << "Melting point : 2023 K (1750 D.C or 3182 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 5061 K (4788 D.C or 8650 D.F)";
      gotoxy(13, 15);
      cout << "Density : 11.72 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 91:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 91";
      gotoxy(13, 10);
      cout << "symbol : Pa";
      gotoxy(13, 11);
      cout << "Element Name : Protactinium";
      gotoxy(13, 12);

      cout << "Atomic Weight : 231.03588";
      gotoxy(13, 13);
      cout << "Melting point : 1845 K (1572°C or 2862°F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : 15.37 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.5";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;
    case 92:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 92";
      gotoxy(13, 10);
      cout << "symbol : U";
      gotoxy(13, 11);
      cout << "Element Name : Uranium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 238.02891";
      gotoxy(13, 13);
      cout << "Melting point : 1408 K (1135 D.C or 2075 D.F)";

      gotoxy(13, 14);
      cout << "Boiling Point : 4404 K (4131 D.C or 7468 D.F)";
      gotoxy(13, 15);
      cout << "Density : 18.95 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.7";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 93:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 93";
      gotoxy(13, 10);
      cout << "symbol : Np";
      gotoxy(13, 11);
      cout << "Element Name : Neptunium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 237";
      gotoxy(13, 13);
      cout << "Melting point : 917 K (644 D.C or 1191 D.F)";
      gotoxy(13, 14);

      cout << "Boiling Point : 4175 K (3902 D.C or 7056 D.F)";
      gotoxy(13, 15);
      cout << "Density : 20.25 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.36";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 94:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 94";
      gotoxy(13, 10);
      cout << "symbol : Pu";
      gotoxy(13, 11);
      cout << "Element Name : Plutonium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 244";
      gotoxy(13, 13);
      cout << "Melting point : 913 K (640 D.C or 1184 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 3501 K (3228 D.C or 5842 D.F)";

      gotoxy(13, 15);
      cout << "Density : 19.84 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.28";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 95:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 95";
      gotoxy(13, 10);
      cout << "symbol : Am";
      gotoxy(13, 11);
      cout << "Element Name : Americium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 243";
      gotoxy(13, 13);
      cout << "Melting point : 1449 K (1176 D.C or 2149 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : 2284 K (2011 D.C or 3652 D.F)";
      gotoxy(13, 15);
      cout << "Density : 13.69 g/cm^3";

      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 96:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 96";
      gotoxy(13, 10);
      cout << "symbol : Cm";
      gotoxy(13, 11);
      cout << "Element Name : Curium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 247";
      gotoxy(13, 13);
      cout << "Melting point : 1618 K (1345 D.C or 2453 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : 13.51 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);

      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 97:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 97";
      gotoxy(13, 10);
      cout << "symbol : Bk";
      gotoxy(13, 11);
      cout << "Element Name : Berkelium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 247";
      gotoxy(13, 13);
      cout << "Melting point : 1323 K (1050 D.C or 1922 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : 14 g/cm^3";
      gotoxy(13, 16);
      cout << "Electronegativity : 1.3";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 98:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 98";
      gotoxy(13, 10);
      cout << "symbol : Cf";
      gotoxy(13, 11);
      cout << "Element Name : Californium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 251";
      gotoxy(13, 13);
      cout << "Melting point : 1173 K (900 D.C or 1652 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";

      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 99:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 99";
      gotoxy(13, 10);
      cout << "symbol : Es";
      gotoxy(13, 11);
      cout << "Element Name : Einsteinium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 252";
      gotoxy(13, 13);
      cout << "Melting point : 1133 K (860 D.C or 1580 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);

      cout << "Element Classification : Metal";
      break;

    case 100:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 100";
      gotoxy(13, 10);
      cout << "symbol : Fm";
      gotoxy(13, 11);
      cout << "Element Name : Fermium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 257";
      gotoxy(13, 13);
      cout << "Melting point : 1800 K (1527 D.C or 2781 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 101:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 101";
      gotoxy(13, 10);
      cout << "symbol : Md";
      gotoxy(13, 11);
      cout << "Element Name : Mendelevium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 258";
      gotoxy(13, 13);
      cout << "Melting point : 1100 K (827 D.C or 1521 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 102:
      cleardevice();
      frame();

      gotoxy(13, 9);
      cout << "Atomic Number : 102";
      gotoxy(13, 10);
      cout << "symbol : No";
      gotoxy(13, 11);
      cout << "Element Name : Nobelium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 259";
      gotoxy(13, 13);
      cout << "Melting point : 1100 K (827 D.C or 1520 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    case 103:
      cleardevice();
      frame();
      gotoxy(13, 9);
      cout << "Atomic Number : 103";
      gotoxy(13, 10);

      cout << "symbol : Lr";
      gotoxy(13, 11);
      cout << "Element Name : Lawrencium";
      gotoxy(13, 12);
      cout << "Atomic Weight : 262";
      gotoxy(13, 13);
      cout << "Melting point : 1900 K (1627 D.C or 2961 D.F)";
      gotoxy(13, 14);
      cout << "Boiling Point : -";
      gotoxy(13, 15);
      cout << "Density : -";
      gotoxy(13, 16);
      cout << "Electronegativity : -";
      gotoxy(13, 17);
      cout << "Legend : Solid";
      gotoxy(13, 18);
      cout << "Element Classification : Metal";
      break;

    default:
      cleardevice();
      gotoxy(1, 4);
      cout << "Please enter atomic number from 1 to 118 only.";
      break;
    }
    gotoxy(14, 21);

    cout << "Type 'Y' to return. Type any key to exit : ";
    cin >> again;
    getchar();

  }
  while (again == 'Y' || again == 'y');

  getch();

  return 0;

}