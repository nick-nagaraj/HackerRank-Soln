#include <iostream>
#include <string>
#include <array>
#include <sstream>
#include <cmath>

using namespace std;



int main()
{
  string time;
  int h, m, s;

  cin >> time;

  if (time[0] == '0')
  {
    h = int(time[1]) - 48;
  }

  if (time[0] != '0')
  {
    h = int(time[1]) - 48 + (int(time[0]) - 48)*10;
  }

  if (time[3] == '0')
  {
    m = int(time[4]) - 48;
  }

  if (time[3] != '0')
  {
    m = int(time[4]) - 48 + (int(time[3]) - 48)*10;
  }

  if (time[6] == '0')
  {
    s = int(time[7]) - 48;
  }

  if (time[6] != '0')
  {
    s = int(time[7]) - 48 + (int(time[6]) - 48)*10;
  }

  if (time[8] == 'A')
  {
    if (h == 12)
    {
      cout << "00:";
    }

    else if (h < 10)
    {
      cout << "0";
      cout << h << ":";
    }


    if (m < 10)
    {
      cout << "0";
    }
    cout << m << ":";

    if (s < 10)
    {
      cout << "0";
    }
    cout << s;
  }

  else if (time[8] == 'P')
  {
    if (h < 12)
    {
    cout << h + 12 << ":";
    }

    else
    {
      cout << h << ":";
    }

    if (m < 10)
    {
      cout << "0";
    }

    cout << m << ":";


    if (s < 10)
    {
      cout << "0";
    }
    cout << s;
  }


}
