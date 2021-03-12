#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int col1,col2,num;
 	char table[4][4]={{'b','e','m','p'},{'h','f','n','w'},{'i','g','o','x'},{'j','h','t','y'}},table2[2][4]={{'r','s','h','e'},{'p','t','l','n'}};
 	string store[10]={{"beautiful"},{"focus"},{"group"},{"hospital"},{"information"},{"newspaper"},{"price"},{"treatment"},{"watch"},{"yeah"}};
 	cout<<"***		Game Starts		***"<<endl;
 	cout<<""<<endl;
	cout<<endl;
 	cout<<"Think of a word from the list :"<<endl;
 		for(int i=0;i<10;i++)
 		{
 			cout<<"		"<<store[i];
 			cout<<endl;
		}
		cout<<""<<endl;
		cout<<endl;
	
 	cout<<"First Question : Number of characters in the word are more than 5 (Y/N) ?"<<endl;	
 	cin>>num;
 	cout<<"Second Question : In which column, the first character of the word lies in the following Table? "<<endl;
 	cout<<"		1		2		3		4"<<endl;
 	cout<<endl;
 	for(int j=0;j<4;j++)
 	{
 		for(int k=0;k<4;k++)
 		{
 			cout<<"		"<<table[j][k];
		}
		cout<<endl;
	}
	cin>>col1;
	cout<<"Third Question : In which column, the last character of the word lies in the following Table?"<<endl;
	cout<<"		1		2		3		4"<<endl;
	cout<<endl;
 	for(int m=0;m<2;m++)
 	{
 		for(int n=0;n<4;n++)
 		{
 			cout<<"		"<<table2[m][n];
		}
		cout<<endl;
	}
	cin>>col2;
	if(num==5)
	{
		if(col1==2)
		{
			if(col2==1)
			{
				cout<<"Group"<<endl;
			}
			if(col2==2)
			{
				cout<<"Focus"<<endl;
			}
			else
			{
				cout<<"Sorry User, I could not guess the word "<<endl;
			}
		}
		else if(col1==4)
		{
			if(col2==4)
			{
				cout<<"Price"<<endl;	
			}
			else if(col2==3)
			{
				cout<<"Watch"<<endl;
			}
			else
			{
				cout<<"Sorry User, I could not guess the word"<<endl;
			}
		}
		else
		{
			cout<<"Sorry User, I could not guess the word "<<endl;
		}
	}
	else if(num==4)
	{
		if(col1==4)
		{
			if(col2==3)
			{
				cout<<"Yeah"<<endl;	
			}
			else
			{
				cout<<"Sorry User, I could not guess the word "<<endl;
			}
		}
		else
		{
			cout<<"Sorry User, I could not guess the word "<<endl;
		}
	}
	else if(num==9)
	{
		if(col1==3)
		{
			if(col2==2)
			{
				cout<<"Treatment"<<endl;
			}
			else if(col2==1)
			{
				cout<<"Newspaper"<<endl;
			}
			else
			{
				cout<<"Sorry User, I could not guess the word"<<endl;
			}
		}
		else if(col1==1)
		{
			if(col2==3)
			{
				cout<<"Beautiful"<<endl;
			}
			else
			{
				cout<<"Sorry User, I could not guess the word "<<endl;
			}
		}
	}
	else if(num==11)
	{
		if(col1==1)
		{
			if(col2==4)
			{
				cout<<"Information"<<endl;
			}
			else
			{
				cout<<"‘ Sorry User, I could not guess the word ’"<<endl;
			}
		}
		else
		{
			cout<<"‘ Sorry User, I could not guess the word ’"<<endl;
		}
	}
	else if(num==8)
	{
		if(col1==1)
		{
			if(col2==3)
			{
				cout<<"Hospital"<<endl;
			}
			else
			{
				cout<<"‘ Sorry User, I could not guess the word ’"<<endl;
			}
		}
		else
		{
			cout<<"‘ Sorry User, I could not guess the word ’"<<endl;
		}
	}
	else
	{
		cout<<"‘ Sorry User, I could not guess the word ’"<<endl;
	}
}
