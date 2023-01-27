int main() {
std::stack<int> a, b;
int size = a.size();
int max_num = size - 1; // the biggest number in a is stack_size - 1
int max_bits = 0; // how many bits for max_num
while ((max_num >> max_bits) != 0) ++max_bits;
for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
{
for(int j = 0 ; j < size ; ++j)
{
int num = a.top(); // top number of A
if ((num >> i)&1 == 1) ra();
// if the (i + 1)-th bit is 1, leave in stack a
else pb();
// otherwise push to stack b
}
// put into boxes done
while (!b.empty()) pa(); // while stack b is not empty, do pa

Copy code
// connect numbers done
}
return 0;
}


static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
