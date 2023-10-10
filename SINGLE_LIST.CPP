#include <iostream>
using namespace std;

struct Node // Struct của node
{
    int data;
    Node *next;
};

typedef struct Node *node;

node MAKE_NODE(int x) // Tạo node mới
{
    node tmp = new Node();
    tmp->data = x;    // chuyển x thành data
    tmp->next = NULL; // chuyển con trỏ trỏ tới NULL
    return tmp;
}

bool NULL_CHECK_NODE(node a) // Check NULL
{
    return a == NULL;
}

int COUNT_SIZE_NODE(node a)
{
    int count = 0;
    while (a != NULL)
    {
        count++;
        a = a->next; // cho node hiện tại nhảy sang nốt tiếp theo
    }
    return count;
}

// Tạo một Node đầu list
void INSERT_BEGIN(node &a, int x)
{
    node tmp = MAKE_NODE(x);
    if (a == NULL)
        a = tmp;
    else
    {
        a->next = a;
        a = tmp;
    }
}

// Tạo phần tử cuối danh sách
void INSERT_RBEGIN(node &a, int x)
{
    node tmp = MAKE_NODE(x);
    if (a == Null)
        a = tmp;
    else
    {
        node p = a;
        while (p->next != NULL)
            p = p->next;
    }
    p->next = tmp;
}

// Chèn vào giữa danh sách
void INSERT_MIDDLE(node &a, int x; int pos)
{
    int n = Size(a);
    if (pos <= 0 || pos > n + 1)
        cout << "Vi tri chen ko hop le\n";
    else if (n == 1)
        INSERT_BEGIN(a, x);
    else if (n == pos + 1)
        INSERT_RBEGIN(a, x);
    node p = a;
    for (int i = 1; i < pose - 1; i++)
        p = p->next;
    node temp = MAKE_NODE(x);
    tmp->next = p->next;
    p->next = tmp;
}

int main()
{
    node HEAD = NULL;
}