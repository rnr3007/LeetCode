#include <cstddef>
#ifndef STRUCT_H
#define STRUCT_H

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

#endif