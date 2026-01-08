
int	ft_list_size(t_list *begin_list)
{
    int count = 0;

    if(!begin_list)
        return(1);

    while(begin_list)
    {
        count++;
        begin_list = begin_list -> next;
    }
    return(count);
}

//klasik list_size