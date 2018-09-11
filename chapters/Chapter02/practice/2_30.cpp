/* Determine whether arguments can be added without overflow */

int tadd_ok(int x, int y);

int tadd_ok(int x, int y)
{
    if ((x >= 0 && y <= 0) || (x <= 0 && y >= 0))
        return 1;

    int sum_temp = x + y;
    return (x >= 0) ? sum_temp >= x && sum_temp >= y : sum_temp <= x && sum_temp <= y;
}
