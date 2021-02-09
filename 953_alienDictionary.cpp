#include<bits/stdc++.h>
using namespace std;

bool isAdjacentSorted(string word1, string word2, map<char,int> m)
{
	size_t s = min(word1.length(),word2.length());
	for (size_t i=0; i<s; i++)
	{
		if (m[word1[i]]<m[word2[i]])
			return true;
		else if (m[word1[i]]>m[word2[i]])
			return false;
	}
	if (word1.length() <= word2.length())
		return true;
	else 
		return false;
}

bool isAlienSorted(vector<string>& words, string order) {
    string word1,word2;
	map<char,int> m;
	for (size_t i=0; i<order.length(); i++)
	{
		m[order[i]] = i;
	}
    for (int i=0; i<words.size()-1; i++)
    {
    	word1 = words[i];
    	word2 = words[i+1];
	    if (!isAdjacentSorted(word1,word2,m))
	    	return false;
    }
    return true;
}

int main()
{
	vector<string> words = {"hello","leetcode"};
	string order = "hlabcdefgijkmnopqrstuvwxyz";
	cout<<isAlienSorted(words,order);
	// cout << min(1,2) << endl;
	if (words[0][0]>words[1][0])
		cout<<"true"<<endl;
	return 0;
}