#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty())
            return !s.empty();

        struct TokenNode {
            explicit TokenNode(char ch = '.'): ch(ch), next(nullptr), self(nullptr){};
            inline bool is_end(){ return next == nullptr; };
            char       ch;
            TokenNode* next;
            TokenNode* self;
        };

        auto root = new TokenNode();
        auto current  = root;
        uint16_t remaining_len = 0;
        for(auto it = p.rbegin(); it != p.rend(); it++){
            switch (*it) {
                case '.':
                case 'a'...'z': {
                    current->next = new TokenNode(*it);
                    current = current->next;
                    remaining_len++;
                    break;
                }
                case '*': {
                    current->next = new TokenNode(*(++it));
                    current = current->next;
                    current->self = current;
                    remaining_len += 0x0100;
                    break;
                }
            }
        }

        if(s.empty())
            return !(remaining_len & 0x00FF);

        if(remaining_len < 0x0100){
            if(s.length() != p.length())
                return false;
            auto s_it = s.begin();
            auto p_it = p.begin();
            for(; s_it != s.end(); s_it++, p_it++){
                if(*p_it != '.' && *s_it != *p_it)
                    return false;
            }
            return true;
        }


        function<bool(TokenNode*, int, uint16_t)> check_token;
        check_token = [&s, &check_token](TokenNode* token, int s_pos, uint16_t re_len){
            if(s_pos < 0)
                return !(re_len & 0x00FF);

            if(s_pos + 1< (re_len & 0x00FF))
                return false;

            if(token->self == nullptr)
                return (token->ch == '.' || token->ch == s[s_pos]) && ((token->next == nullptr && s_pos == 0) ||
                       (token->next != nullptr && check_token(token->next, s_pos - 1, re_len - 1)));

            return ((token->ch == '.' || token->ch == s[s_pos]) && check_token(token->self, s_pos - 1, re_len)) ||
                   (token->next != nullptr && check_token(token->next, s_pos, re_len - 0x0100));
        };
        return check_token(root->next, s.size() - 1, remaining_len);
    }
};
