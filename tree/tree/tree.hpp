#pragma once
#ifndef Template_HPP
#define Template_HPP
#include <iostream>
#include <ctime>
#include <iomanip> 
#include <conio.h>
#include <string>
using namespace std;
template <typename DataType, typename KeyType>
class Btree {
	struct Node; 
	typedef Node *PNode;
	struct Node {
		DataType data = DataType();
		KeyType key = KeyType();
		PNode parent = nullptr;
		PNode left = nullptr;
		PNode right = nullptr;
		Node() = default;
		Node(const DataType &data, const KeyType & key) :data(data), key(key) {};
	};
	PNode root = nullptr;
private: void Add(const DataType &data, const KeyType & key, PNode & root);
public: void Add(const DataType &data, const KeyType & key);
		void Output(ostream &out, PNode root)const;
		//clear, destructor, coppy, prusvoena, на вхід под текст. на виході частоту використання/частоту викор. літер
		template<typename DataType, typename KeyType>
		friend ostream& operator << (ostream&out, const Btree<DataType, KeyType> &tree);


};


#include "tree.cpp"
#endif
