#ifndef AVLTREE_H
#define AVLTREE_H

#pragma once
#include <utility> // 为了使用 std::pair
using namespace std;

template <class K, class V>
struct AVLTreeNode
{
    AVLTreeNode<K, V> *_left;
    AVLTreeNode<K, V> *_right;
    AVLTreeNode<K, V> *_parent;

    int _bf; // 平衡因子

    pair<K, V> _kv;
    AVLTreeNode(const pair<K, V> &kv) : _left(nullptr), _right(nullptr), _parent(nullptr), _kv(kv), _bf(0)
    {
    }
};

template <class K, class V>
class AVLTree
{
    typedef AVLTreeNode<K, V> Node;

public:
    AVLTree() : _root(nullptr) {}

    bool Insert(const pair<K, V> &kv)
    {
        // 按照搜索树的规则进行插入
        if (_root == nullptr)
        {
            _root = new Node(kv);
            return true;
        }

        Node *parent = nullptr;
        Node *cur = _root;

        // 查找插入位置
        while (cur)
        {
            if (cur->_kv.first > kv.first)
            {
                parent = cur;
                cur = cur->_left;
            }
            else if (cur->_kv.first < kv.first)
            {
                parent = cur;
                cur = cur->_right;
            }
            else
            {
                return false; // 重复键，插入失败
            }
        }

        // 创建新节点并连接到树
        cur = new Node(kv);
        if (parent->_kv.first < kv.first)
        {
            parent->_right = cur;
        }
        else
        {
            parent->_left = cur;
        }
        cur->_parent = parent;

        // 更新平衡因子
        while (parent)
        {
            if (cur == parent->_right)
            {
                parent->_bf++;
            }
            else
            {
                parent->_bf--;
            }

            if (parent->_bf == 0) // 父节点高度不变，停止更新
            {
                break;
            }
            else if (parent->_bf == 1 || parent->_bf == -1) // 父节点高度发生变化，继续向上更新
            {
                cur = parent;
                parent = parent->_parent;
            }
            else if (parent->_bf == 2 || parent->_bf == -2) // 需要旋转处理
            {
                // 旋转代码待实现
                break;
            }
        }
        return true;
    }
    void RotateL(Node *parent)
    {
        Node *subR = parent->_right;
        Node *subRL = subR->_left;

        parent->_right = subRL;
        if (subRL)
            subRL->_parent = parent;
        subR->_left = parent;
        Node *ppNode = parent->_parent;
        parent->_parent = subR;
        // 1.原本parent是这棵树的跟，现在sub是根
        // 2.parent为根的树只是整棵树中的子树，改变链接关系，那么subR变成了树的根

        if (_root == parent)
        {
            _root = subR;
            subR->_parent = nullptr;
        }
        else
        {
            if (ppNode->_left == parent)
            {
                ppNode->_left = subR;
            }
            else
            {
                ppNode->_right = subR;
            }
            subR->_parent = ppNode;
        }
        parent->_bf = subR->_bf = 0;
    }

    void RotateR(Node *parent)
    {
        Node *subL = parent->_left;
        Node *subLR = subL->_right;
        }

private:
    Node *_root;
};

#endif // AVLTREE_H
