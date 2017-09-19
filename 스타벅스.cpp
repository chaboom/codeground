#include <iostream>#include <vector>using namespace std;
int Answer;
int main(int argc, char** argv){ 
  int T, test_case; cin >> T; 
  for(test_case = 0; test_case  < T; test_case++) {
    Answer = 0;  
    int N, M, K; 
    vector<int> person;  
    vector<int> coffee;  
    cin >> N >> M >> K;  
    for(int i = 0; i < N; i++){      
      int temp; cin >> temp;      
      person.push_back(temp);  
    }  
    for(int j = 0; j< M; j++){      
      int temp; cin >> temp;      
      coffee.push_back(temp);  
    }  
    int sum = 0;  
    for(int i = 0; i < N; i++){      
      if( sum > K) Answer = 1; break;      
      sum += coffee[person[i] - 1];  
    }  
    cout << "Case #" << test_case+1 << endl;  
    if(Answer == 1) cout << "N" << endl;  
    else cout << "Y" << endl; 
    } 
  return 0;
}
