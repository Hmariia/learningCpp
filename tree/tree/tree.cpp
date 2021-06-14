#pragma once
#ifndef Template_CPP 
#define Template_CPP
#include "tree.hpp"
template<typename DataType, typename KeyType>
void Btree<DataType, KeyType>::Add(const DataType & data, const KeyType & key, PNode & root)
{
	if (key < root->key) {
		if (!root->left)
		{
			root->left = new Node(data, key);
			root->left->parent = root;
		}
		else Add(data, key, root->left);
	}
	if (key > root->key) {
		if (!root->right) {
			root -> right = new Node(data, key);
			root->right->parent = root;
		}
		else   Add(data, key, root->right);
	}
}
template<typename DataType, typename KeyType>
void Btree<DataType, KeyType>::Add(const DataType & data, const KeyType & key)
{
	if (!root) {
		root = new Node();
		root->data = data;
		root->key = key;
		return;
	}
	Add(data, key, root);
}
template<typename DataType, typename KeyType>
void Btree<DataType, KeyType>::Output(ostream & out, PNode root)const
{
	if (!root) return;
	Output(out, root->left);
	out << root->key << "\t" << root->data << endl;
	Output(out, root->right);
}
template<typename DataType, typename KeyType>
ostream & operator<<(ostream & out, const Btree <DataType, KeyType>& tree)
{
	tree.Output(out, tree.root);
	return out;
}




#endif

