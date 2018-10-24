#include <iostream>
#include "ExpressionTree.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    char exp[] = "12+7*";
    BTreeNode * eTree = MakeExpTree(exp);
    
    cout << "전위 표기법의 수식: ";
    ShowPrefixTypeExp(eTree);
    cout << endl;
    
    cout << "중위 표기법의 수식: ";
    ShowInfixTypeExp(eTree);
    cout << endl;
    
    cout << "후위 표기법의 수식: ";
    ShowPostfixTypeExp(eTree);
    cout << endl;
    
    cout << "총 계산 결과: " << EvaluateExpTree(eTree) << endl;
    
    return 0;
}
