#ifndef Intro
#define Intro

void display() {
  char i;
  for (i = 5; i <= 25; i++) {
    gotoxy(i, 12);
    cout << " Welcome To Periodic Table";
    delay(100);
  }

  char x;
  for (x = 45; x >= 25; x--) {
    gotoxy(x, 14);
    cout << " Created by : Group 8 ";
    delay(110);
  }
}

#endif