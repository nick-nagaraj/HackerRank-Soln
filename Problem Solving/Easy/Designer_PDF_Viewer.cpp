#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int height[26], max;
  string question;
  vector<int> question_cnt;
  vector<int> height_cnt;

  for (int i = 0; i < 26; i++)
  {
    cin >> height[i];
  }

  cin >> question;

  for (int i = 0; i < question.length(); i++)
  {
    question_cnt.push_back((int)question[i] - 97);
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < question_cnt.size(); j++)
    {
      if (question_cnt[j] == i)
      {
        height_cnt.push_back(height[i]);
      }
    }
  }

  max = *max_element(height_cnt.begin(), height_cnt.end());

  cout << max * question.size();

}
