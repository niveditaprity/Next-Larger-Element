void nextLargerElement(long long arr[], int n){
  stack<long long>s;
  vector<long long>cd;
  s.push(arr[n-1]);
  cd.push_back(-1);
  for(int i=n-2;i>=0;i--)
  {
      while(!s.empty()&&s.top()<=arr[i])
      {
          s.pop();
      }
      long long d=(s.empty())?-1:s.top();
      cd.push_back(d);
      s.push(arr[i]);
  }
  reverse(cd.begin(), cd.end());
for (long long i = 0; i < cd.size(); i++)
cout << cd[i] << " ";// Your code here
}
