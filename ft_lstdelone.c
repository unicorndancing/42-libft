void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst)
        return ;
    if (!del && !(lst->content))
    {
        (del)((void *)lst->content);
    }
    free(lst);
    lst = NULL;
}