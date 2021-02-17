#include <bits/stdc++.h>

using namespace std;

stack<int> vagoes;

int N = -1;

int main(int argc, char const *argv[]){
    
  while(N != 0)
  {

    cin>>N;
    int num;
    if(N != 0)
    {
      int dif, pn;
      for (int i = 1; i <= N; i++)
      {
        cin>>num;
        vagoes.push(num);
        if((N - i) == 1) pn = vagoes.top();
      }

      dif = vagoes.top() - pn;
      pn = vagoes.top();
      vagoes.pop();

      bool flag  = true;

      for (int i = 1; i < N; i++)
      {
        if((pn - vagoes.top()) != dif)
        {
          flag = false;
        }

        pn = vagoes.top();
        vagoes.pop();

      }



      cout<<(flag ? "YES" : "NO")<<endl;
            
    }else{
      cout<<"\n"<<endl;
      break;
    }

  }
  
      
  return 0;
}
