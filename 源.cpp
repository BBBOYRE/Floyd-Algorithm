#include<iostream>
#include<vector>
//#include<algorithm>
#include<list>

using namespace std;
#define type int
//构造邻接矩阵
//这里的matrix需要在函数外定义大小
void buildMatrix(vector<vector<int>>* matrix)
{
	type x, y, z;
	while (cin >> x >> y >> z)
	{
		(*matrix)[x - 1][y - 1] = z;
		if (cin.get() == '\n')
		{
			if (cin.peek() == '\n')
				return;
		}
	}
	return;
}


class Node
{
public:
	int head;
	Node* next;
	Node(int x){
		head = x;
	}
};

bool SortBool(Node x, Node y)
{
	return x.head < y.head;
}

int main()
{
	Node* head = new Node(2);
	Node* temp = new Node(1);
	//head->next = temp;

	list<Node> List;
	List.push_back(*head);
	List.push_back(*temp);
	List.sort(SortBool);
	list<Node>::iterator it = List.begin();
	while (it != List.end())
	{
		cout << (*it).head << " ";
		it++;
	}
	List.clear();
	return 0;
}


