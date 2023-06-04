#include <bits/stdc++.h>

 

void setZeros(vector<vector<int>> &mat)

{


    set<int>r,c;

    for(int i=0;i<mat.size();i++)

    {

        for(int j=0;j<mat[0].size();j++)

        {

            if(mat[i][j]==0)

            {

                r.insert(i);

                c.insert(j);

            }

        }

    }

    for(auto it:r)

    {

        for(int i=0;i<mat[0].size();i++)

        {

            mat[it][i]=0;

        }

    }

    for(auto it:c)

    {

        for(int i=0;i<mat.size();i++)

        {

            mat[i][it]=0;

        }

    }

    

 

}


