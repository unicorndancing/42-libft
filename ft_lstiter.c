void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    if (f)
    {
        while (lst)
        {
            (f)(lst->content);
            lst = lst->next;
        }
    }
}