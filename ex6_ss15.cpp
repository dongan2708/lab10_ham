int main(int argc, char *argv[]) {
	int x, y;
	x = 15;
	y = 20;
	printf(" x = %d, y = %d\n", x,y);
	swap (x,y);
	printf (" after interchanging x = %d, y=%d\n", x,y);
	}
	swap (int u, int v)
	{
		int temp;
		temp=u;
		u=v;
		v=temp;
		return;
	}
