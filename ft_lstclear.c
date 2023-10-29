void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  next;

    if (!lst)
        return ;
    if (!(del))
    {
        while (lst)
        {
            next = lst->next;
            (del)(lst);
            free(lst);
            lst = NULL;
            lst = lst->next;
        }
    }
}