#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (lst == NULL)
		return (NULL);
	lst->next = NULL;
	lst->content = content;
	return (lst);
}
