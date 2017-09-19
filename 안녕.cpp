#include <iostream>
#include <string>
using namespace std;
int Answer;
int main(int argc, char** argv){
  int T, test_case;	
  cin >> T;	
  for(test_case = 0; test_case  < T; test_case+	{
    Answer = 0;		
    string input;
    cin >> input;
    int cnt_h = 0, cnt_e = 0, cnt_l = 0, cnt_o = 0;		
    for(int i =0; i < input.length(); i++){		   
      if(input[i] == 'h') cnt_h++;		    
      if(input[i] == 'e') cnt_e++;		   
      if(input[i] == 'l') cnt_l++;		    
      if(input[i] == 'o') cnt_o++;		
    }		
    cnt_l /= 2;		
    while(cnt_h > 0 && cnt_e > 0 && cnt_l > 0 && cnt_o > 0){
      cnt_h--; cnt_e--; cnt_l--; cnt_o--;	
      Answer++;		
    }		
    cout << "Case #" << test_case+1 << endl;		
    cout << Answer << endl;	
  }	
  return 0;
}
