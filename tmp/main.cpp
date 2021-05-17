#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string str;
  vector <string> counter_words(255);
  cout << "enter a few words: ";
  getline(cin,str);
  int j = 0;
  for (; j < str.length(); ++j)
  {
    for (int i = 0; str[i] != ' ' && str[i] != '\0'; ++i)
    {
      counter_words[j] += str[i];
      cout << "worc cycle two i\n";
    }
    cout << "worck cycle one j\n";
  }
  for (int i = 0; i < j; ++i)
  {
    cout << counter_words[i] << ' ';
  }
  cout << counter_words.size() << '\n';
}
