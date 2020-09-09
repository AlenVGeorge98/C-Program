
int prime(int number)
{
 int flag=0;

    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return("True");
    else
        return("False");

    return 0;

}
