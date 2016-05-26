// bleeps disliked words
#include "../std_lib_facilities.h"
int main()
{
  vector<string> disliked_words = {"Broccoli", "Moe", "BLA"};
  string dislike = "true";
  for (string temp; cin >> temp;) {
    dislike = "false";
    for (int i = 0; i < disliked_words.size(); ++i)
      if (temp == disliked_words[i])
	dislike = "true";

    if (dislike == "true")
      cout << "BLEEP" << '\n';
    else
      cout << temp << '\n';
  }
  return 0;
}
