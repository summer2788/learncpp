#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        vector<int> stack;
        int ouput{1};
        for (auto &i : tokens)
        {
            if (is_number(i))
            {
                stack.push_back(stoi(i));
            }
            else
            {
                int tempt1 = stack.back();
                stack.pop_back();
                int tempt2 = stack.back();
                stack.pop_back();

                switch (i[0])
                {
                case '+':
                {
                    stack.push_back(tempt1 + tempt2);

                    break;
                }
                case '*':
                {
                    stack.push_back(tempt1 * tempt2);
                    break;
                }
                case '/':
                {
                    stack.push_back(tempt1 / tempt2);
                    break;
                }
                case '-':
                {
                    stack.push_back(tempt1 - tempt2);
                    break;
                }
                default:
                {
                    break;
                }
                }
            }
        }

        return stack.front();
    }

private:
    bool is_number(const std::string &s)
    {
        if ((s.size() > 1) || (isdigit(s[0])))
            return true;
        else
            return false;
    }
};
int main()
{
    Solution s;
    vector<string> tokens{"4", "13", "5", "/", "+"};
    cout << s.evalRPN(tokens) << endl;
    return 0;
}
