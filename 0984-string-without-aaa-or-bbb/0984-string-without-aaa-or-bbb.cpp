class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;

        while(a || b){
            if(a>b){
                if(a>0){ans+='a';a--;}
                if(a>0 && a>=b){ans+='a';a--;}
                if(b>0){ans+='b';b--;}
            }
            else{
                if(b>0){ans+='b';b--;}
                if(b>0 && b>=a){ans+='b';b--;}
                if(a>0){ans+='a';a--;}
            }
        }
        return ans;
    }
};