vector<string> fizzBuzz(int n) {
        vector<string> ans ;
        for(int i=0;i<n;i++){
            if (i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }
            else if(i%3==0){
                ans.push_back("Fizz");
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }
            else {
                // char k='0';
                
                ans.push_back(to_string(i));
            }
        }
        //reverse(ans.begin(), ans.end());
        return ans;
    }
