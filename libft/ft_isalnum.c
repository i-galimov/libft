int	ft_isalnum(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (ch);
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (ch);
	return (0);
}
