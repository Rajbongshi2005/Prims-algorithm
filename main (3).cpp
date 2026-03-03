#include <iostream>
using namespace std;
int matrix[100][100],visited_node[100];
int sum=0;
int tail=-1,distances[100];
void Making_matrix(int row)
{
	for(int i=0; i<row; i++ )
	{
		for(int j=0; j<row; j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<'\n';

	for(int i=0; i<row; i++ )
	{
		for(int j=0; j<row; j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<'\n';
	}
}

void VisitedNode(int row)
{
	visited_node[0] = 1;

	for(int i = 0; i < row - 1; i++)
	{
		int team = 70000;
		int a = -1, b = -1;

		for(int j = 0; j < row; j++)
		{
			if(visited_node[j] == 1)
			{
				for(int z = 0; z < row; z++)
				{
					if(visited_node[z] == 0 && matrix[j][z] != 0)
					{
						if(matrix[j][z] < team)
						{	if(matrix[j][z] < team)
							{
								team = matrix[j][z];
								a = j;
								b = z;
							}
						}
					}
				}
			}
		}

		if(a != -1 && b != -1)
		{
			visited_node[b] = 1;
			distances[++tail]=matrix[a][b];
			cout << a << " - " << b << " : " << distances[tail] << '\n';
		}
	}

	for(int i=0; i<row; i++) {
		sum+=distances[i];
	}
	for(int i=0; i<row; i++) {
		cout<<distances[i]<<' ';
	}
}

int main()
{
	int row;
	cout<<"Enter the node number: ";
	cin>>row;

	cout<<"Making the matrix:"<<'\n';

	Making_matrix(row);
	VisitedNode(row);
	cout<<sum<<'\n';


	return 0;
}

