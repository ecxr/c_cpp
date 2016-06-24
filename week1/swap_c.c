void swap(int i*, int j*)
{
	int temp = *i;
	*i = *j;
	j = temp;
}

void swap_double(double i*, double j*)
{
	double temp = *i;
	*i = *j;
	j = temp;
}

int main()
{
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;
	swap(&m, &n);
	swap_double(&x, &y);
}