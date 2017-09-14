void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int dv;
	int md;

	dv = a / b;
	md = a % b;
	div = &dv;
	mod = &md; 
}
