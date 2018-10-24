#ifndef ExpressionTree_hpp
#define ExpressionTree_hpp

#include "BinaryTree.hpp"

BTreeNode * MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode * bt);

void ShowPrefixTypeExp(BTreeNode * bt);
void ShowInfixTypeExp(BTreeNode * bt);
void ShowPostfixTypeExp(BTreeNode * bt);

#endif /* ExpressionTree_hpp */
