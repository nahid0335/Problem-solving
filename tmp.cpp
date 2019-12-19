#include<bits/stdc++.h>
using namespace std;
#define MAXC 1000
char A[MAXC],B[MAXC];
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
vector<string>v;
string ans;
void printAll(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0'){
		cout<<ans<<endl;
		v.push_back(ans);
		return;
	}
	if(A[i]==B[j]){
		ans+=A[i];
		printAll(i+1,j+1);
		ans.erase(ans.end()-1); //Delete last character
	}
	else
	{
		if(dp[i+1][j]>dp[i][j+1]) printAll(i+1,j);
		else if(dp[i+1][j]<dp[i][j+1]) printAll(i,j+1);
		else
		{
			printAll(i+1,j);
			printAll(i,j+1);
		}
	}
}
int calcLCS(int i,int j)
{
	if(A[i]=='\0' or B[j]=='\0') return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}
int main() {
	scanf("%s %s",A,B);
	//printf("%s %s",A,B);
	lenA=strlen(A);
    lenB=strlen(B);
	int sum=calcLCS(0,0);
	printf("%d\n",sum);
	printAll(0,0);
	sum--;
	for(int i=0;i<v.size();i++)
    {
        if(v[i].size()==sum)
            cout<<v[i]<<endl;
    }
	return 0;

}
