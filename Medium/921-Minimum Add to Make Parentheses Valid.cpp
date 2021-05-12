// ##### 1. With Stack:
// The idea is *very* *simple*, iterate over every char in the string 'S':
// Now, there is only **two** possibilities, 

// char ch == `')'` ----- *(1)*
//          OR
// char ch == `'('` ----- *(2)*
    
// **for case (2) :** <br>Here we will simply *push* it into the stack, and will *wait for its counter part* `(i.e, ')')`
    
// **for case (1) :** 
// Here we have few choices to make,
// **(i) :** What if the stack is already empty ?? we have no choice, then to push it into the stack
// **(ii) :** At the top of the stack, we encounter the opening bracket ` '('` : this is considered a valid substring` { "()" }`. : so we will *pop it out* of the stack
// **(iii) :** We have considered every possible way, now its time to push it into the stack

// ---------------------------

// After the *loop is over,* the total no. of brackets(opening or closing), present in the stack is all invalid OR *waiting for its counter part.*
// So here the size of stack represents, the total no. of brackets we will be needing to make the input string valid, *`hence the ans is == stack.size();`*



class Solution {
public:
    int minAddToMakeValid(string S) {

        stack<char> s;

        for(auto b : S){

            if(b == '('){
                s.push(b);
            }else{

                if(s.size() == 0){
                    s.push(b);
                }else if(s.top() == '('){
                    s.pop();
                }else{
                    s.push(b);
                }

            }

        }

        return s.size();

    }
};

// ##### 2. Without Stack:
// Just maintain two variables:

class Solution {
public:
    int minAddToMakeValid(string S) {

        int opening_brackets = 0;
        int correction_needed = 0;

        for(int i =0;i<S.size();i++){

            if(opening_brackets == 0 && S[i] == ')')
            {
                correction_needed++;
            }
            else
            {
                if(S[i] == '('){
                    opening_brackets++;
                }else{
                    opening_brackets--;
                }
            }

        }

        return opening_brackets + correction_needed;
    }
};


