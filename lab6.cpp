#include<bits/stdc++.h>

using namespace std;

struct Node
{
  long long int id;
  int recharge;
};

int main(void)
{
  vector<Node> d;
  long long int queries,n;
  cin >> n;
  cin >> queries;
  while(queries--)
  {
    int choice;
    int i=0,flag=0,max=0;;
    struct Node temp;
    cin >> choice;
    switch(choice)
    {
      case 1: cin >> temp.id;
              cin >> temp.recharge;
              if(d.size())
              {
              while(i!=d.size())
              {
                if(d[i].id == temp.id)
                {
                  flag = 1;
                  break;
                }
                i++;          //search for id and increment recharge
              }
              }
              if(flag == 0)
              {
                d.push_back(temp);
              }
              else if(flag == 1)
              {
                d[i].recharge = d[i].recharge + temp.recharge;
                //cout << d[i].recharge << endl;
              }
              break;
      case 2:
              for(int j=0;j<d.size();j++)
              {
                if(d[j].recharge > max)
                {
                  max = d[j].recharge;
                }
              }
              for(int j=0;j<d.size();j++)
              {
                if(d[j].recharge == max)
                {
                  cout << d[j].id << endl;
                }
              }
              if(max==0)
              {
                cout << "NO DATA AVAILABLE !! " << endl;
              }                          //search for highest recharge
              break;
      default: cout << "Enter valid option" ;
                break;
    }
  }
}
