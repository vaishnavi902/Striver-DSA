//Input : s = "hannah"   Output : true   Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.
#include <bits/stdc++.h>

using namespace std;
class solution {
    public: bool ispalindrome(string s) {

        //to convert uppecase into lowercase and vice versa
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int i = 0, j = s.length() - 1;
        while (i < j) {

            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main() {
    solution obj;
    cout << obj.ispalindrome("HahaHah") << endl;
    return 0;
}
