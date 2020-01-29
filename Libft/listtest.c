#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void mydel(void *content,size_t size_c)
{
    bzero(content,size_c);
    size_c=0;
}
t_list * f(t_list *tem)
{
 	printf("%s %lu\n",(char *)(tem->content),tem->content_size);
 	return(tem);
}

void f2(t_list *tem)
{
 	printf("%s %lu\n",(char *)(tem->content),tem->content_size);
}

void ft_lstadd_inindex(t_list **alst, t_list *new,int i)
{
		int index;
		t_list *head;
		t_list *next;
		
		index=-1;
		head=NULL;
		next=NULL;
		head=(*alst);
		if((*alst))
		{
			while((*alst)->next && ++index<i-1)
				(*alst)=(*alst)->next;
			if(i==0)
			ft_lstadd(alst,new);
			else
			{	
				new->next=(*alst)->next;
    		(*alst)->next=new;
				(*alst)=head;
			}	
		}
}
/*
void ft_lstpush(t_list **alst, t_list *new)
{
	t_list *head;

	head=*alst;
	if(*alst)
	{
		while((*alst)->next)
				(*alst)=(*alst)->next;
		new->next=(*alst)->next;
		(*alst)->next=new;
		(*alst)=head;
	}
	else
	ft_lstadd(alst,new);
}

*/

t_list *ft_lstsearch_inindex(t_list **alst,int i)
{
		int index;
		index=-1;
		if((*alst))
		{
			while((*alst)->next && ++index<i)
				(*alst)=(*alst)->next;
			if(index==i)
				return (*alst);
		}
			return (NULL);
}
/*
t_list *ft_lstdel_inindex(t_list **alst,int i)
{
		int index;
		t_list * head;
		//t_list * next;
		head=*alst;
		index=-1;
		if((*alst))
		{
			while((*alst)->next && ++index<i)
				(*alst)=(*alst)->next;
			if(index==i)
				return (*alst);
		}
			return (NULL);
}
*/
int main(void) {
  

		t_list **l2s;
		l2s=malloc(sizeof(t_list));
    t_list *list = ft_lstnew("list 0",7);
		list->next = ft_lstnew("list 1",7);
		list->next->next = ft_lstnew("list 2",7);
			ft_lstdel(&list,mydel);
		ft_lstadd_inindex(&list,ft_lstnew("list 3",7),7);
    ft_lstiter(list,f2);
		t_list *just;
		just=ft_lstsearch_inindex(&list,2);
		if(just)
		printf("\n----------\n%s\n-----------\n",just->content);
		// ft_lstiter(list,f2);
	//printf("%s",ft_strccpy(c1,c4,'x'));
  return 0;
}
