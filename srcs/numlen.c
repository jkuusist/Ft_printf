int	numlen(long long num, int base)
{
	int res;
	res = 1;
	if (num < 0)
		res++;
	while (num > (base - 1))
	{
		num /= base;
		res++;
	}
	return (res);
}
