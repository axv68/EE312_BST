// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "true";
    if (bst.isItemInTree(s)){
        cout << s << " is in the BST" << endl << endl; 
    }
    else {
        cout << s << " is NOT in the BST " << endl << endl; 
    }
    bst.deleteItem(s);
    //bst.makeEmpty(); 
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

}


int main2() {

    ifstream inFile;
    inFile.open("test2.txt");

    BST_312<int> bst;
   
    string s;
    int num; 
    inFile >> s;
    num = stoi(s); 
    while (inFile) {;
        cout << "inserting ... " << num << endl;
        bst.insertItem(num);
        inFile >> s;
        num = stoi(s); 
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    //s = "tree";
    // num = 4; 


    // if (bst.isItemInTree(num)){
    //     cout << num << " is in the BST" << endl << endl; 
    // }
    // else {
    //     cout << num << " is NOT in the BST " << endl << endl; 
    // }
        
    // bst.deleteItem(num);
    cout << "Emptying BST ...." << endl << endl; 
    bst.makeEmpty(); 
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

}
