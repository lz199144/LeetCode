/* https://leetcode.com/problems/n-queens/*/
/* jasonlz */
#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;

int row[1000];  
int col[1000];  
vector<vector<string> >result;  

void dfs(int r,int n)  
{  
    int i,j;  
    if(r==n)  
    {  
        vector<string>go;  
        for(i=0;i<n;++i)  
        {  
            string temp(n,'.');  
            temp[row[i]]='Q';  
            go.push_back(temp);  
        }  
        result.push_back(go);  
    }  
    for(i=0;i<n;++i)  
    {  
        if(col[i]==0)  
        {  
            for(j=0;j<r;++j)  
                if(abs(j-r)==abs(i-row[j]))break;  
            if(j==r)  
            {  
                row[r]=i;  
                col[i]=1;  
                dfs(r+1,n);  
                col[i]=0;  
                row[r]=0;  
            }  
        }  
    }  
       
}  
vector<vector<string> > solveNQueens(int n) {  
    result.clear();  
    dfs(0,n);  
    return result;  
}

int main()
{
    time_t start,end;

    start = clock();
    vector<vector<string> > re = solveNQueens(14);
    end = clock();
    cout<<re.size()<<endl;
    cout<<"Run time: "<<(double)(end - start) / CLOCKS_PER_SEC<<"S"<<endl;
    // for(int i= 0;i<re.size();i++){
    //     cout<<i+1<<":"<<endl;
    //     for(int j=0;j<10;j++){
    //         cout<<re[i][j]<<endl;
    //     }
    //     cout << endl;
    // }
    return 0;
}