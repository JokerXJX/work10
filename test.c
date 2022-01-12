#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		arr[tmp]++;
//	}
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", arr[a]);
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		if(is_prime(i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			int k = 0;
//			for (k = i; k < n - 1; k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////链表结点的定义
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//int main()
//{
//	int n = 0;
//	struct Node* list = NULL;//指向链表的指针
//	struct Node* tail = NULL;//指向链表尾部元素的指针
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	int d = 0;//要删除的元素
//	//接受n个数字并尾插到链表中
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
//		pn->data = m;
//		pn->next = NULL;
//
//		//插入第一个元素
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//
//	//输入要删除的元素
//	scanf("%d", &d);
//	//删除指定元素
//	struct Node* cur = list;
//	struct Node* prev = NULL;
//	while (cur)
//	{
//		//找到了要删除的元素
//		if (cur->data == d)
//		{
//			//删除
//			//删除的如果是第一个结点
//			struct Node* pd = cur;
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//			free(pd);
//			n--;
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//
//	//输出
//	printf("%d\n", n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	//释放
//	cur = list;
//	struct Node* del = NULL;
//	while (cur)
//	{
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//  list = NULL;
//	return 0;
//}


int main()
{

	return 0;
}