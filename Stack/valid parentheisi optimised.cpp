class Solution {
public:
    bool isValid(string s) {
     //1 make stack
        stack<char>Stack;
//traverse string
        for(auto i:s)
            
        {
            if(i=='[' || i=='{' || i== '(' )
            {
                Stack.push(i);
            }  
            
            else
            { {if(Stack.empty()
                   || (Stack.top()=='[' && i!=']') 
                   || (Stack.top()=='{'  && i!='}')
                   || (Stack.top()=='(' && i!=')' ))
                return false;
                 
            }
            //matching brackets
            Stack.pop();
            }
         }
        
      return   Stack.empty();
    }
};