#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, element;
  int max, min;
  vector<int> score;
  vector<int> maxCount;
  vector<int> minCount;
  int best = 0, worst = 0;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> element;
    score.push_back(element);
    max = *max_element(score.begin(), score.end());
    min = *min_element(score.begin(), score.end());
    maxCount.push_back(max);
    minCount.push_back(min);
  }

  for (int j = 1; j < maxCount.size(); j++)
  {
    if (maxCount[j - 1] != maxCount[j])
    {
      best++;
    }
  }

  for (int j = 1; j < minCount.size(); j++)
  {
    if (minCount[j - 1] != minCount[j])
    {
      worst++;
    }
  }

  cout << best << " " << worst;

}
