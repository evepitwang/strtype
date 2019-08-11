#include<string>
#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s("th weethdsay");
	cout<<" the sise of the string "<<s<<" is"<<s.size()<<" charaterits\including newline"<<endl;
	printf("nimage bi ,this is with C");
 	vector<int> intr1 = {0};
          intr1.push_back(2);
          intr1.push_back(3);
         intr1.push_back(4);
        for(vector<int>::iterator iter = intr1.begin();iter !=  intr1.end()  ;    \
			iter++)
          {
 	 cout<<*iter<<endl;
          }

}
