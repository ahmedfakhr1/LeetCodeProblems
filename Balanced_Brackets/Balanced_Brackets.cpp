class Solution {
public:
    bool isValid(string s) {
         int strLength = s.length();
    stack<char> a;
    for(int i = 0;i<strLength;i++){
        switch(s.at(i)){
            case '{':a.push(s.at(i));
                break;
            case '[':a.push(s.at(i));
                break;
            case '(':a.push(s.at(i));
                break;
            case '}':
                if (a.empty()!=true){
                if (a.top() == '{') a.pop();
                else return false;
                }
                else return false;
                break;
            case ']':
                if (a.empty()!=true){
                if (a.top() == '[') a.pop();
                else return false;
                }
                else return false;
                break;
            case ')':
                if (a.empty()!=true){
                if (a.top() == '(') a.pop();
                else return false;}
                else return false;
                break;
        }
    }
    if (a.size() == 0) return true;
    else return false;
    }
};
