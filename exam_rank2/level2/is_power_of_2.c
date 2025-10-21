int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
	{
		n /= 2;
	}
	return (n == 1);
}

#include <stdio.h>

int main(void)
{
    unsigned int nums[] = {0, 1, 2, 3, 4, 5, 8, 16, 31, 32};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%u -> %s\n", nums[i], is_power_of_2(nums[i]) ? "Power of 2" : "Not power of 2");
    }

    return 0;
}
