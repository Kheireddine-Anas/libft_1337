#include "libft.h"
#include <stdio.h>

typedef struct s_lst
{
	int		nbr;
	char	*str;
	struct s_lst	*next;
}t_lst;

t_lst *creat_node(int len, char *str);
void add_back(t_lst *head,t_lst *node);
void print_lst(t_lst *head);
void tartib(t_lst *head);

t_lst	*creat_node(int len, char *str)
{
	t_lst *n;
	n = malloc(sizeof(t_lst));
	n->nbr = len;
	n->str = ft_strdup(str);
	n->next = NULL;
	return(n);
}

void add_back(t_lst *head,t_lst *node)
{
	t_lst *cur;

	cur = head;
	while (cur->next != NULL) 
        cur = cur->next;
    cur->next = node;
}

void print_lst(t_lst *head)
{
	t_lst *hdr;

	hdr = head;
	while (hdr != NULL)
	{
		printf("nbr is %d\n", hdr->nbr);
		printf("str is %s\n", hdr->str);
		printf("----------------------------\n");

		hdr = hdr->next;
	}
}

int main()
{
	t_lst *head;
	t_lst *head1;
	head = creat_node(6, "so long");
	head1 = creat_node(8, "Go Furth");
	add_back(head, creat_node(2, "to mooe"));
	add_back(head, creat_node(4, "fu lik"));
	add_back(head, head1);

	print_lst(head);
}