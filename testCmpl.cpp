#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Node
{
public:
	Node(int score,int age,string name):m_score(score),m_age(age),m_name(name){}
	int getScore() { return m_score;  }
	int getScore() const { return m_score; }
	friend ostream &operator<<(ostream &out, const Node &node);
private:
	int m_score;
	int m_age;
	string m_name;
};
ostream &operator<<(ostream &out, const Node &node)
{
	out << "score:" << node.m_score << "	age:" << node.m_age << "		" 
		<< node.m_name;
	return out;
}
bool compare(const Node &node1, const Node &node2)
{
	return node1.getScore() < node2.getScore();
}

int main()
{
	Node node1 = { 90,30,"liu" };
	Node node2 = { 90,23,"hu" };
	Node node3 = { 67,32,"ki" };
	Node node4 = { 78,45,"arr" };
	vector<Node> vec;
	vec.push_back(node1);
	vec.push_back(node2);
	vec.push_back(node3);
	vec.push_back(node4);
	sort(vec.begin(), vec.end(), compare);
	for (auto itr = vec.begin(); itr != vec.end(); itr++)
	{
		cout << *itr << endl;
	}
	return 0;
}