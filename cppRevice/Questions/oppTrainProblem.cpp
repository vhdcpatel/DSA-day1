#include <bits/stdc++.h>
using namespace std;

void getOppSeatNum(int n) {
  int mod, pow, oppSeat;
  mod = n % 12;
  pow = n / 12;
  if (mod == 0) {
    mod = 12;
    pow--;
  }
  oppSeat = (13 - mod);
  cout << oppSeat + pow * 12;
  if (oppSeat == 1 || oppSeat == 6 || oppSeat == 7 || oppSeat == 12) {
    cout << " WS";
  } else if (oppSeat == 2 || oppSeat == 5 || oppSeat == 8 || oppSeat == 11) {
    cout << " MS";
  } else {
    cout << " AS";
  }
}

int main() { getOppSeatNum(40); }
