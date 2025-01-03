#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        int count = 0;
        int one = 0;
        int zero = 0;   
        for(int i = 0; i < N; i++){
            if(S[i] == '1'){
                one++;
            }   
            else{
                zero++;
            }
        }
        int k=N;
        while(k!=0){        
        for(int i = 1; i < N; i++){

            if(S[i] != S[i-1] && one >= zero){
                one--;
                count++;
                if(S[i] == '1'){
                    S.erase(i, 1);
                    N--;
                }
                else if(S[i-1] == '1'){
                    S.erase(i-1, 1);
                    N--;
                }
            }else if(S[i] != S[i-1] && one < zero){
                zero--;
                count++;
                if(S[i] == '0'){
                    S.erase(i, 1);
                    N--;
                }
                else if(S[i-1] == '0'){
                    S.erase(i-1, 1);
                    N--;
                }
            }
        }
        k--;
        }
        cout << S.size() << endl;

        
        
    }

    return 0;
}
