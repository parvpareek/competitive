#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> combinations;


void permute(string str,int k) 
{ 
    // Sort the string in lexicographically 
    // ascennding order 
    sort(str.begin(), str.end()); 
  
    // Keep printing next permutation while there 
    // is next permutation 
    do { 
       combinations.push_back(str);
       if(combinations.size() == k)
       {
           break;
       }
    } while (next_permutation(str.begin(), str.end()) ); 
} 

int main()
{
    unsigned short t, i =0;
    cin >> t;
    do
    {
    unsigned long n, k;
    unsigned long max;
    cin >> n >> k;

    int a = n - 2;
    string word = "";
    

    for(int i = 0;i < a;i++)
    {
        word = word + "a";
    }
    word = word + "bb";
    permute(word, k);


    cout << combinations.at((k-1))<<endl;
    i++;
    combinations.clear();
    }while(t != i);
}