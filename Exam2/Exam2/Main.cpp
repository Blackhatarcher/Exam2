#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct node
{
	bool is_word;
	node* parent;
	vector <string*> children;
	string data;
};

class PrefixTree
{
private:
	node* root;

public:
	PrefixTree() {
		root = NULL;
	}
	//will walk through the tree and insert the node in the proper place
	void insert(node*) {

	}
	//will return a nicely formatted string that has all the words that start with this prefix
	string getWords(string starter) {
		string result = "All out of luck";

		return result;
	}
	//will open the txt file and read all the words into the tree
	void fillTree() {

	}
};
int main() {

	// create the prefix tree 
	PrefixTree tree;
	//populate it 
	tree.fillTree();

	bool run = true;
	string response = "";
	while (run) {
		cout << "Welcome" << endl;
		cout << "Enter a string to search for " << endl;
		cin >> response;
		cout << tree.getWords(response) << endl;

		cout << "Enter X to exit" << endl;
		cin >> response;
		if (response == "X" || response == "x") {
			run = false;
		}

	}
}
