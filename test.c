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

////������Ķ���
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//int main()
//{
//	int n = 0;
//	struct Node* list = NULL;//ָ�������ָ��
//	struct Node* tail = NULL;//ָ������β��Ԫ�ص�ָ��
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	int d = 0;//Ҫɾ����Ԫ��
//	//����n�����ֲ�β�嵽������
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
//		pn->data = m;
//		pn->next = NULL;
//
//		//�����һ��Ԫ��
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
//	//����Ҫɾ����Ԫ��
//	scanf("%d", &d);
//	//ɾ��ָ��Ԫ��
//	struct Node* cur = list;
//	struct Node* prev = NULL;
//	while (cur)
//	{
//		//�ҵ���Ҫɾ����Ԫ��
//		if (cur->data == d)
//		{
//			//ɾ��
//			//ɾ��������ǵ�һ�����
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
//	//���
//	printf("%d\n", n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	//�ͷ�
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