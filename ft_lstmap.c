t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list **newlist;

    newlist = malloc(sizeof(t_list) * ft_lstlen(lst));
    if (!lst || !newlist)
        return (NULL);
    if (f)
    {
        while (lst)
        {
            newlist->next = lst->next;
            newlist->content = (f)(lst->content);
            lst = lst->next;
        }
    }
}